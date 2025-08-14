#!python3
import cantera as ct

gas = ct.Solution("FFCMy_12.yaml")

# --- Species block ---
spec_str = "\n".join(gas.species_names)

rxn_str_list = []

for rxn_ind in range(gas.n_reactions):
    rxn = gas.reaction(rxn_ind)
    rxn_eq = rxn.equation.replace("<=>", "=")
    extra_str = ""
    tp_str = ""
    eff_str = ""

    # --- Third-body efficiencies ---
    if hasattr(rxn, "efficiencies") and rxn.efficiencies:
        eff_list = []
        for sp in gas.species_names:
            eff = rxn.efficiencies.get(sp, 1.0)
            eff_list.append(f"({sp} {eff})")
        eff_str = "\n".join(eff_list)
        eff_str = f"""coeffs
{gas.n_species}
(
{eff_str}
)
;"""

    # --- Falloff reactions ---
    if rxn.reaction_type == "falloff":
        tp_str = "reversibleArrheniusTroeFallOffReaction"

        # Access the Arrhenius objects properly
        k0 = rxn.falloff.arrhenius_low
        kInf = rxn.falloff.arrhenius_high

        rate_str = f"""k0
{{
    A               {k0.pre_exponential_factor:.4g};
    beta            {k0.temperature_exponent:.3g};
    Ta              {k0.activation_energy/ct.gas_constant:.6g};
}}
kInf
{{
    A               {kInf.pre_exponential_factor:.4g};
    beta            {kInf.temperature_exponent:.3g};
    Ta              {kInf.activation_energy/ct.gas_constant:.6g};
}}"""

        # Troe parameters (if present)
        if hasattr(rxn.falloff, "parameters") and len(rxn.falloff.parameters) == 4:
            p = rxn.falloff.parameters
            rate_str += f"""
F
{{
    alpha           {p[0]:.4g};
    Tsss            {p[1]:.3g};
    Ts              {p[2]:.6g};
    Tss             {p[3]:.6g};
}}"""

        if eff_str:
            extra_str += f"""
thirdBodyEfficiencies
{{
{eff_str}
}}"""

    # --- Three-body reactions ---
    elif rxn.reaction_type == "three-body":
        tp_str = "reversiblethirdBodyArrheniusReaction"
        rr = rxn.rate
        rate_str = f"""A               {rr.pre_exponential_factor:.4g};
beta            {rr.temperature_exponent:.3g};
Ta              {rr.activation_energy/ct.gas_constant:.6g};"""
        if eff_str:
            extra_str += f"""
{eff_str}"""

    # --- Elementary reactions ---
    else:  # "elementary" or other
        tp_str = "reversibleArrheniusReaction"
        rr = rxn.rate
        rate_str = f"""A               {rr.pre_exponential_factor:.4g};
beta            {rr.temperature_exponent:.3g};
Ta              {rr.activation_energy/ct.gas_constant:.6g};"""

    # --- Assemble reaction block ---
    cur_str = f"""    un-named-reaction-{rxn_ind}
{{
    type            {tp_str};
    reaction        {rxn_eq};
    {rate_str}{extra_str}
}}"""
    rxn_str_list.append(cur_str)

# --- Final output ---
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

print("Conversion completed: chemFFCM2_generated")
