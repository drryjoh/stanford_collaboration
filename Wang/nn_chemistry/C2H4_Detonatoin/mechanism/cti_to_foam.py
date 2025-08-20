import cantera as ct

work_dir = "."
mech_file_name = "ffcmy9reduced30"

gas = ct.Solution("{}/{}.yaml".format(work_dir, mech_file_name))
print("Species No.: {}. Reaction No.: {}".format(gas.n_species, gas.n_reactions))

spec_str = "\n".join(gas.species_names)

rxn_str_list = []
for rxn_ind in range(gas.n_reactions):
    rxn = gas.reaction(rxn_ind)
    tp = rxn.reaction_type
    rxn_eq = rxn.equation.replace("<=>", "=").replace("=>", "=")
    extra_str = ""

    # prepare third body efficiencies
    if rxn.third_body is not None:
        eff_list = []
        for sp_ind in range(gas.n_species):
            sp = gas.species_name(sp_ind)
            eff = rxn.third_body.efficiencies[sp] if sp in rxn.third_body.efficiencies else 1.0
            eff_list.append("({} {})".format(sp, eff))
        eff_str = "\n".join(eff_list)
        eff_str = f"""coeffs          
{gas.n_species}
(
{eff_str}
)
;"""

    if tp in ["falloff-Lindemann", "falloff-Troe"]:
        rate_str = f"""k0
        {{
            A               {rxn.rate.low_rate.pre_exponential_factor:.4g};
            beta            {rxn.rate.low_rate.temperature_exponent:.3g};
            Ta              {rxn.rate.low_rate.activation_energy/ct.gas_constant:.6g};
        }}
        kInf
        {{
            A               {rxn.rate.high_rate.pre_exponential_factor:.4g};
            beta            {rxn.rate.high_rate.temperature_exponent:.3g};
            Ta              {rxn.rate.high_rate.activation_energy/ct.gas_constant:.6g};
        }}"""

        if tp == "falloff-Troe":
            tp_str = "reversibleArrheniusTroeFallOff"
            params = rxn.rate.falloff_coeffs
            rate_str += f"""
        F
        {{
            alpha           {params[0]:.4g};
            Tsss            {params[1]:.3g};
            Ts              {params[2]:.6g};
            Tss             {params[3]:.6g};
        }}"""
        else:
            tp_str = "reversibleArrheniusLindemannFallOff"

        if rxn.third_body is not None:
            extra_str += f"""
        thirdBodyEfficiencies
        {{
            {eff_str}
        }}"""
    elif tp == "pressure-dependent-Arrhenius":
        tp_str = "reversibleArrheniusPLOG"
        rr = rxn.rate.rates[0][1]
        rate_str = f"""A               {rr.pre_exponential_factor:.4g};
            beta            {rr.temperature_exponent:.3g};
            Ta              {rr.activation_energy/ct.gas_constant:.6g};
            ArrheniusData
(
"""
        for pres, rr in rxn.rate.rates:
            rate_str += f"""({pres:.6g} {rr.pre_exponential_factor:.4g} {rr.temperature_exponent:.3g} {rr.activation_energy/ct.gas_constant:.6g})
"""
        rate_str += ");"
    else:
        rr = rxn.rate
        rate_str = f"""A               {rr.pre_exponential_factor:.4g};
            beta            {rr.temperature_exponent:.3g};
            Ta              {rr.activation_energy/ct.gas_constant:.6g};"""

        if tp == "three-body-Arrhenius" and "M" in rxn_eq:
            tp_str = "reversibleThirdBodyArrhenius"

            extra_str += f"""
        {eff_str}"""
        elif rxn.reversible:
            tp_str = "reversibleArrhenius"
        else:
            tp_str = "irreversibleArrhenius"

    # combine all parts of the reaction string
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

with open("ffcmy9reduced30.foam", "w") as f:
    f.write(out_str)