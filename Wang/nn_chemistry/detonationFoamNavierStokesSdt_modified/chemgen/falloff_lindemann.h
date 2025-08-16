
scalar
falloff_lindemann(const scalar& A_low,  //constant
                  const scalar& B_low, //constant
                  const scalar& E_low,  //constant
                  const scalar& A_high, //constant
                  const scalar& B_high,  //constant
                  const scalar& E_high, //constant
                  const scalar& temperature, 
                  const scalar& log_temperature,
                  const scalar& mixture_concentration) 
{
        scalar k_low  = arrhenius(A_low, B_low, E_low, temperature, log_temperature);
        scalar k_high = arrhenius(A_high, B_high, E_high, temperature, log_temperature);
        
        scalar Pr = 
        divide(multiply(k_low,
                        mixture_concentration),
               k_high);
        scalar inv_one_p_Pr = inv_gen(scalar(1)+Pr);
        scalar Pr_inv_one_p_Pr = multiply(Pr, inv_one_p_Pr);

        scalar return_value = 
        multiply(k_high,
                 Pr_inv_one_p_Pr);

        return return_value;
}


scalar
dfalloff_lindemann_dtemperature(const scalar& A_low,  //constant
                                const scalar& B_low, //constant
                                const scalar& E_low,  //constant
                                const scalar& A_high, //constant
                                const scalar& B_high,  //constant
                                const scalar& E_high, //constant
                                const scalar& temperature, 
                                const scalar& log_temperature,
                                const scalar& mixture_concentration) 
{
        scalar k_low  = arrhenius(A_low, B_low, E_low, temperature, log_temperature);
        scalar dk_low_dtemperature  = darrhenius_dtemperature(A_low, B_low, E_low, temperature, log_temperature);

        scalar k_high = arrhenius(A_high, B_high, E_high, temperature, log_temperature);
        scalar dk_high_dtemperature = darrhenius_dtemperature(A_high, B_high, E_high, temperature, log_temperature);
        
        scalar Pr = 
        divide(multiply(k_low,
                        mixture_concentration),
               k_high);

        scalar dPr_dtemperature = 
        divide_chain(multiply(k_low,
                              mixture_concentration),
                     multiply(dk_low_dtemperature,
                              mixture_concentration),
                     k_high,
                     dk_high_dtemperature);

        scalar inv_one_p_Pr = inv_gen(scalar(1)+Pr);
        scalar dinv_one_p_Pr_dtemperature = inv_chain(scalar(1)+Pr, dPr_dtemperature);

        scalar Pr_inv_one_p_Pr = multiply(Pr, inv_one_p_Pr);
        scalar dPr_inv_one_p_Pr_dtemperature = multiply_chain(Pr, dPr_dtemperature, inv_one_p_Pr, dinv_one_p_Pr_dtemperature);

        return
        multiply_chain(k_high, dk_high_dtemperature, Pr_inv_one_p_Pr, dPr_inv_one_p_Pr_dtemperature);
}


scalar
dfalloff_lindemann_dlog_temperature(const scalar& A_low,  //constant
                                    const scalar& B_low, //constant
                                    const scalar& E_low,  //constant
                                    const scalar& A_high, //constant
                                    const scalar& B_high,  //constant
                                    const scalar& E_high, //constant
                                    const scalar& temperature, 
                                    const scalar& log_temperature,
                                    const scalar& mixture_concentration) 
{
        scalar k_low  = arrhenius(A_low, B_low, E_low, temperature, log_temperature);
        scalar dk_low_dlog_temperature  = darrhenius_dlog_temperature(A_low, B_low, E_low, temperature, log_temperature);

        scalar k_high = arrhenius(A_high, B_high, E_high, temperature, log_temperature);
        scalar dk_high_dlog_temperature = darrhenius_dlog_temperature(A_high, B_high, E_high, temperature, log_temperature);
        
        scalar Pr = 
        divide(multiply(k_low,
                        mixture_concentration),
               k_high);
        
        scalar dPr_dlog_temperature = 
        divide_chain(multiply(k_low,
                              mixture_concentration),
                     multiply(dk_low_dlog_temperature,
                              mixture_concentration),
                     k_high,
                     dk_high_dlog_temperature);

        scalar inv_one_p_Pr = inv_gen(scalar(1)+Pr);
        scalar dinv_one_p_Pr_dlog_temperature = inv_chain(scalar(1)+Pr, dPr_dlog_temperature);

        scalar Pr_inv_one_p_Pr = multiply(Pr, inv_one_p_Pr);
        scalar dPr_inv_one_p_Pr_dlog_temperature = multiply_chain(Pr, dPr_dlog_temperature, inv_one_p_Pr, dinv_one_p_Pr_dlog_temperature);

        return
        multiply_chain(k_high,
                       dk_high_dlog_temperature,
                       Pr_inv_one_p_Pr,
                       dPr_inv_one_p_Pr_dlog_temperature);

}


scalar
dfalloff_lindemann_dmixture_concentration(const scalar& A_low,  //constant
                                          const scalar& B_low, //constant
                                          const scalar& E_low,  //constant
                                          const scalar& A_high, //constant
                                          const scalar& B_high,  //constant
                                          const scalar& E_high, //constant
                                          const scalar& temperature, 
                                          const scalar& log_temperature,
                                          const scalar& mixture_concentration) 
{
        scalar k_low  = arrhenius(A_low, B_low, E_low, temperature, log_temperature);
        scalar k_high = arrhenius(A_high, B_high, E_high, temperature, log_temperature);
        
        scalar Pr = 
        divide(multiply(k_low,
                        mixture_concentration),
               k_high);
        
        scalar dPr_dmixture_concentration = 
        divide(k_low,  //d/dM(k_low*M) = k_low
               k_high);

        scalar inv_one_p_Pr = inv_gen(scalar(1)+Pr);
        scalar dinv_one_p_Pr_dmixture_concentration = inv_chain(scalar(1)+Pr, dPr_dmixture_concentration);

        scalar Pr_inv_one_p_Pr = multiply(Pr, inv_one_p_Pr);
        scalar dPr_inv_one_p_P_dmixture_concentration = multiply_chain(Pr, dPr_dmixture_concentration, inv_one_p_Pr, dinv_one_p_Pr_dmixture_concentration);

        return
        multiply(k_high,
                 dPr_inv_one_p_P_dmixture_concentration); //d/dM(k_high * Pr_inv_one_p_Pr) = k_high * d(Pr_inv_one_p_P)/dM
}