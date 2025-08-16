
scalar
log_arrhenius(const scalar& log_A,
              const scalar& B,
              const scalar& E,
              const scalar& log_temperature,
              const scalar& inv_universal_gas_constant_temperature) 
{
        return log_A + B * log_temperature - E * inv_universal_gas_constant_temperature;
}


scalar
dlog_arrhenius_dlog_temperature(const scalar& log_A,
                                const scalar& B,
                                const scalar& E,
                                const scalar& log_temperature,
                                const scalar& inv_universal_gas_constant_temperature) 
{
        return B;
}


scalar
dlog_arrhenius_dinv_universal_gas_constant_temperature(const scalar& log_A,
                                                       const scalar& B,
                                                       const scalar& E,
                                                       const scalar& log_temperature,
                                                       const scalar& inv_universal_gas_constant_temperature) 
{
        return - E;
}


scalar
dlog_arrhenius_diugct(const scalar& log_A,
                      const scalar& B,
                      const scalar& E,
                      const scalar& log_temperature,
                      const scalar& inv_universal_gas_constant_temperature) 
{
        return - E;
}


scalar pressure_dependent_arrhenius(const scalar& log_k1, //f(temperature)
                                               const scalar& log_k2, //f(temperature)
                                               const scalar& log_P, //f(pressure)
                                               const scalar& log_P1,
                                               const scalar& log_P2) 
{
    return  exp_gen(log_k1 + (log_k2 - log_k1) * (log_P - log_P1) / (log_P2 - log_P1));
}


scalar dpressure_dependent_arrhenius_dtemperature(const scalar& log_k1, 
                                                             const scalar& dlog_k1_dtemperature, 
                                                             const scalar& log_k2,
                                                             const scalar& dlog_k2_dtemperature, 
                                                             const scalar& log_P, 
                                                             const scalar& log_P1,
                                                             const scalar& log_P2) 
{
    return  
    exp_chain(log_k1 + (log_k2 - log_k1) * (log_P - log_P1) / (log_P2 - log_P1),
              dlog_k1_dtemperature + (dlog_k2_dtemperature - dlog_k1_dtemperature) * (log_P - log_P1) / (log_P2 - log_P1));
}


scalar dpressure_dependent_arrhenius_dpressure(const scalar& log_k1, 
                                                          const scalar& log_k2,
                                                          const scalar& log_P,
                                                          const scalar& dlog_P_dpressure, 
                                                          const scalar& log_P1,
                                                          const scalar& log_P2) 
{
    return  
    exp_chain(log_k1 + (log_k2 - log_k1) * (log_P - log_P1) / (log_P2 - log_P1),
              (log_k2 - log_k1) / (log_P2 - log_P1)) * dlog_P_dpressure;
}