#!python3
import cantera as ct
gas = ct.Solution("FFCMy_12.yaml")
spec_str = "\n".join([gas.species_name(i) for i in range(gas.n_species)])
rxn_str_list = []
for rxn_ind in range(gas.n_reactions):
    rxn = gas.reaction(rxn_ind)
    tp = type(rxn)
    rxn_eq = rxn.equation.replace("<=>", "=")
    extra_str = ""

    if hasattr(rxn, "efficiencies"):
        eff_list = []
        for sp_ind in range(gas.n_species):
            sp = gas.species_name(sp_ind)
            eff = rxn.efficiencies[sp] if sp in rxn.efficiencies else 1.0
            eff_list.append("({} {})".format(sp, eff))
        eff_str = "\n".join(eff_list)
        eff_str = f"""coeffs          
{gas.n_species}
(
{eff_str}
)
;"""

    if tp == ct._cantera.FalloffReaction:
        tp_str = "reversibleArrheniusTroeFallOffReaction"
        params = rxn.falloff.parameters
        rate_str = f"""k0
        {{
            A               {rxn.low_rate.pre_exponential_factor:.4g};
            beta            {rxn.low_rate.temperature_exponent:.3g};
            Ta              {rxn.low_rate.activation_energy/ct.gas_constant:.6g};
        }}
        kInf
        {{
            A               {rxn.high_rate.pre_exponential_factor:.4g};
            beta            {rxn.high_rate.temperature_exponent:.3g};
            Ta              {rxn.high_rate.activation_energy/ct.gas_constant:.6g};
        }}"""

        if len(params) == 4:
            rate_str += f"""
        F
        {{
            alpha           {params[0]:.4g};
            Tsss            {params[1]:.3g};
            Ts              {params[2]:.6g};
            Tss             {params[3]:.6g};
        }}"""

        if hasattr(rxn, "efficiencies"):
            extra_str += f"""
        thirdBodyEfficiencies
        {{
            {eff_str}
        }}"""
    else:
        rr = rxn.rate
        rate_str = f"""A               {rr.pre_exponential_factor:.4g};
            beta            {rr.temperature_exponent:.3g};
            Ta              {rr.activation_energy/ct.gas_constant:.6g};"""

        if tp == ct._cantera.ThreeBodyReaction and "M" in rxn_eq:
            tp_str = "reversiblethirdBodyArrheniusReaction"

            extra_str += f"""
        {eff_str}"""
        else:
            tp_str = "reversibleArrheniusReaction"

    cur_str = f"""    un-named-reaction-{rxn_ind}
    {{
            type            {tp_str};
            reaction        {rxn_eq};
            {rate_str}{extra_str}
    }}"""
    rxn_str_list.append(cur_str)
rxn_str = "\n".join(rxn_str_list)

out_str = f"""species
{gas.n_species}
(
{spec_str}
)
;

reactions
{{
{rxn_str}
}}
"""

with open("chemFFCM2_generated", "w") as f:
    f.write(out_str)
	
