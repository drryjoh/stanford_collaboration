
scalar
f_sri(const scalar& a, 
      const scalar& b,
      const scalar& c,
      const scalar& d,
      const scalar& e,
      const scalar& temperature,
      const scalar& Pr) 
{
    scalar inner_expr = 
    multiply(a, 
             exp_gen(-divide(b, temperature))) + exp_gen(-divide(temperature, c));
    
    scalar exponent = 
    inv_gen(1.0 + pow_gen2(log10_gen(Pr)));
    
    return 
    multiply(pow_gen(inner_expr, 
                     exponent),
             pow_gen(temperature, 
                     e));
}


scalar
df_sri_dtemperature(const scalar& a, 
                    const scalar& b,
                    const scalar& c,
                    const scalar& d,
                    const scalar& e,
                    const scalar& temperature,
                    const scalar& Pr) 
{
    scalar inner_expr = 
    multiply(a, 
             exp_gen(-divide(b, temperature)))
    + exp_gen(-divide(temperature, c));
    
    scalar dinner_expr_dtemperature = 
    multiply(a, 
             exp_chain(-divide(b, temperature),
                       -ddivide_db(b, temperature)))
    + exp_chain(-divide(temperature, c), 
                -ddivide_da(temperature, c));

    scalar exponent = 
    inv_gen(1.0 + pow_gen2(log10_gen(Pr)));
    
    scalar dexponent_dtemperature = scalar(0.0);

    
    return 
    multiply_chain(pow_gen(inner_expr, 
                           exponent),
                   pow_gen_chain(inner_expr,
                                 dinner_expr_dtemperature,
                                 exponent,
                                 dexponent_dtemperature),
                   pow_gen(temperature, 
                           e),
                   dpow_da(temperature,
                           e));

}


scalar
df_sri_dPr(const scalar& a, 
           const scalar& b,
           const scalar& c,
           const scalar& d,
           const scalar& e,
           const scalar& temperature,
           const scalar& Pr) 
{
    scalar inner_expr = 
    multiply(a, 
             exp_gen(-divide(b, temperature))) + exp_gen(-divide(temperature, c));
   scalar dinner_expr_dPr = scalar(0.0);
    
    scalar exponent = 
    inv_gen(1.0 + pow_gen2(log10_gen(Pr)));
    
    scalar dexponent_dPr = 
     inv_chain(1.0 + pow_gen2(log10_gen(Pr)),
                     pow_gen2_chain(log10_gen(Pr),
                                    dlog10_da(Pr)));

    return 
    multiply(dpow_db(inner_expr, exponent) * dexponent_dPr,
             pow_gen(temperature, 
                     e));

}


scalar
falloff_sri(const scalar& A_low,  //constant
            const scalar& B_low, //constant
            const scalar& E_low,  //constant
            const scalar& A_high, //constant
            const scalar& B_high,  //constant
            const scalar& E_high, //constant
            const scalar& a, //constant
            const scalar& b, //constant
            const scalar& c, //constant
            const scalar& d, //constant
            const scalar& e,// constant
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

    return
        multiply(multiply(k_high, Pr_inv_one_p_Pr),
                 f_sri(a, b, c, d, e, temperature, Pr));

}


scalar
dfalloff_sri_dtemperature(const scalar& A_low,  //constant
                          const scalar& B_low, //constant
                          const scalar& E_low,  //constant
                          const scalar& A_high, //constant
                          const scalar& B_high,  //constant
                          const scalar& E_high, //constant
                          const scalar& a, //constant
                          const scalar& b, //constant
                          const scalar& c, //constant
                          const scalar& d, //constant
                          const scalar& e,// constant
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
        multiply_chain(multiply(k_high, Pr_inv_one_p_Pr),
                       multiply_chain(k_high, dk_high_dtemperature, Pr_inv_one_p_Pr, dPr_inv_one_p_Pr_dtemperature),
                       f_sri(a, b, c, d, e, temperature, Pr),
                       df_sri_dtemperature(a, b, c, d, e, temperature, Pr) + df_sri_dPr(a, b, c, d, e, temperature, Pr) * dPr_dtemperature);
}


scalar
dfalloff_sri_dlog_temperature(const scalar& A_low,  //constant
                              const scalar& B_low, //constant
                              const scalar& E_low,  //constant
                              const scalar& A_high, //constant
                              const scalar& B_high,  //constant
                              const scalar& E_high, //constant
                              const scalar& a, //constant
                              const scalar& b, //constant
                              const scalar& c, //constant
                              const scalar& d, //constant
                              const scalar& e,// constant
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
        multiply_chain(multiply(k_high, Pr_inv_one_p_Pr),
                       multiply_chain(k_high, dk_high_dlog_temperature,  Pr_inv_one_p_Pr, dPr_inv_one_p_Pr_dlog_temperature),
                       f_sri(a, b, c, d, e, temperature, Pr),
                       df_sri_dPr(a, b, c, d, e, temperature, Pr) * dPr_dlog_temperature);
}


scalar
dfalloff_sri_dmixture_concentration(const scalar& A_low,  //constant
                                    const scalar& B_low, //constant
                                    const scalar& E_low,  //constant
                                    const scalar& A_high, //constant
                                    const scalar& B_high,  //constant
                                    const scalar& E_high, //constant
                                    const scalar& a, //constant
                                    const scalar& b, //constant
                                    const scalar& c, //constant
                                    const scalar& d, //constant
                                    const scalar& e,// constant
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
        divide(k_low,
               k_high);

        scalar inv_one_p_Pr = inv_gen(scalar(1)+Pr);
        scalar dinv_one_p_Pr_dmixture_concentration = inv_chain(scalar(1)+Pr, dPr_dmixture_concentration);

        scalar Pr_inv_one_p_Pr = multiply(Pr, inv_one_p_Pr);
        scalar dPr_inv_one_p_Pr_dmixture_concentration = multiply_chain(Pr, dPr_dmixture_concentration, inv_one_p_Pr, dinv_one_p_Pr_dmixture_concentration);

    return
        multiply_chain(multiply(k_high, Pr_inv_one_p_Pr),
                       multiply(k_high, dPr_inv_one_p_Pr_dmixture_concentration),
                       f_sri(a, b, c, d, e, temperature, Pr),
                       df_sri_dPr(a, b, c, d, e, temperature, Pr) * dPr_dmixture_concentration);

}