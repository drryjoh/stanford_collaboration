
scalar
arrhenius(const scalar& A, const scalar& B, const scalar& E, const scalar& temperature) 
{
        scalar pow_term = pow_gen(temperature, B);
        scalar exp_term = exp_gen(divide(-E, universal_gas_constant() * temperature));

        return multiply(A,
                        multiply(pow_term,
                                 exp_term));
}


scalar
darrhenius_dtemperature(const scalar& A, const scalar& B, const scalar& E, const scalar& temperature) 
{
        scalar pow_term = pow_gen(temperature, B);
        scalar dpow_term_dtemperature = dpow_da(temperature, B);

        scalar exp_term =
            exp_gen(divide(-E,
                           universal_gas_constant() * temperature));
        scalar dexp_term_dtemperature =
            exp_chain(divide(-E,
                             universal_gas_constant() * temperature),
                      ddivide_db(-E,
                                 universal_gas_constant() * temperature) * universal_gas_constant());

        return multiply(A,
                        multiply_chain(pow_term,
                                       dpow_term_dtemperature,
                                       exp_term,
                                       dexp_term_dtemperature));
}


scalar
arrhenius(const scalar& A, const scalar& B, const scalar& E, const scalar& temperature, const scalar& log_temperature) 
{

        scalar exp_term = exp_gen(B * log_temperature + divide(-E, universal_gas_constant() * temperature));

        return multiply(A, exp_term);
}


scalar
darrhenius_dtemperature(const scalar& A, const scalar& B, const scalar& E, const scalar& temperature, const scalar& log_temperature) 
{

        scalar dexp_term_dtemperature = exp_chain(B * log_temperature + divide(-E, universal_gas_constant() * temperature),
                                                    ddivide_db(-E, universal_gas_constant() * temperature) * universal_gas_constant());

        return multiply(A, dexp_term_dtemperature);
}


scalar
darrhenius_dlog_temperature(const scalar& A, const scalar& B, const scalar& E, const scalar& temperature, const scalar& log_temperature) 
{

        scalar dexp_term_dlog_temperature = exp_chain(B * log_temperature + divide(-E, universal_gas_constant() * temperature),
                                                    B);

        return multiply(A, dexp_term_dlog_temperature);
}