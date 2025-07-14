
scalar
f_cent_troe(const scalar& alpha, 
            const scalar& T1, 
            const scalar& T2,
            const scalar& T3,
            const scalar& temperature) 
{
        return
        (scalar(1) - alpha) * exp_gen(-inv_safe_gen(T3) * temperature)
        + alpha * exp_gen(-inv_gen(T1) * temperature)
        + exp_gen(-inv_gen(temperature) * T2);
}


scalar
df_cent_troe_dtemperature(const scalar& alpha, 
                          const scalar& T1, 
                          const scalar& T2,
                          const scalar& T3,
                          const scalar& temperature) 
{
        return
        (scalar(1) - alpha) * exp_chain(-inv_safe_gen(T3) * temperature, -inv_safe_gen(T3))
        + alpha * exp_chain(-inv_gen(T1) * temperature, -inv_gen(T1))
        + exp_chain(-inv_gen(temperature) * T2, -dinv_da(temperature) * T2);
}


scalar
f_troe(const scalar& alpha, 
       const scalar& T1, 
       const scalar& T2,
       const scalar& T3,
       const scalar& temperature,
       const scalar& Pr) 
{
        scalar f_cent_troe_ = f_cent_troe(alpha, T1, T2, T3, temperature); 
        scalar log_f_cent_troe_ = log10_gen(f_cent_troe_);
        scalar log_Pr = log10_gen(Pr);
        scalar c = scalar(-0.4) + scalar(-0.67) * log_f_cent_troe_;
        scalar n = scalar(0.75) + scalar(-1.27) * log_f_cent_troe_;
        scalar d = scalar(0.14);
        scalar a = log_Pr + c;
        scalar b = n - d * (log_Pr + c);
        scalar Pr_factor = inv_gen(scalar(1) + pow_gen2(divide(a, b)));
        
        return
        pow_gen(scalar(10), (multiply(log_f_cent_troe_, Pr_factor)));
}


scalar
df_troe_dtemperature(const scalar& alpha, 
                     const scalar& T1, 
                     const scalar& T2,
                     const scalar& T3,
                     const scalar& temperature,
                     const scalar& Pr) 
{

        scalar f_cent_troe_ = f_cent_troe(alpha, T1, T2, T3, temperature); 
        scalar df_cent_troe_dtemperature_ =  df_cent_troe_dtemperature(alpha, T1, T2, T3, temperature); 

        scalar log_f_cent_troe_ = log10_gen(f_cent_troe_);
        scalar dlog_f_cent_troe_dtemperature_ = log10_chain(f_cent_troe_, df_cent_troe_dtemperature_);

        scalar log_Pr = log10_gen(Pr);
        scalar dlog_Pr_dtemperature = scalar(0.0);

        scalar c = scalar(-0.4) + scalar(-0.67) * log_f_cent_troe_;
        scalar dc_dtemperature = scalar(-0.67) * dlog_f_cent_troe_dtemperature_;

        scalar n = scalar(0.75) + scalar(-1.27) * log_f_cent_troe_;
        scalar dn_dtemperature =  scalar(-1.27) * dlog_f_cent_troe_dtemperature_;
        
        scalar d = scalar(0.14);
        scalar dd_dtemperature = scalar(0.0);

        scalar a = log_Pr + c;
        scalar da_dtemperature = dc_dtemperature;

        scalar b = n - multiply(d, (log_Pr + c));
        scalar db_dtemperature = dn_dtemperature - multiply(d, dc_dtemperature);

        scalar Pr_factor = inv_gen(scalar(1) + pow_gen2(divide(a, b)));
        scalar dPr_factor_dtemperature = 
        inv_chain(scalar(1) + pow_gen2(divide(a, b)), 
                  pow_gen2_chain(divide(a,
                                        b), 
                                 divide_chain(a, 
                                              da_dtemperature,
                                              b,
                                              db_dtemperature)));

        return
        dpow_db_chain(scalar(10), 
                      multiply(log_f_cent_troe_, 
                               Pr_factor), 
                      multiply_chain(log_f_cent_troe_, 
                                     dlog_f_cent_troe_dtemperature_,
                                     Pr_factor,
                                     dPr_factor_dtemperature));
}


scalar
df_troe_dPr(const scalar& alpha, 
            const scalar& T1, 
            const scalar& T2,
            const scalar& T3,
            const scalar& temperature,
            const scalar& Pr) 
{
        scalar f_cent_troe_ = f_cent_troe(alpha, T1, T2, T3, temperature); 
        scalar log_f_cent_troe_ = log10_gen(f_cent_troe_);

        scalar log_Pr = log10_gen(Pr);
        scalar dlog_Pr_dPr = dlog10_da(Pr);

        scalar c = scalar(-0.4) + scalar(-0.67) * log_f_cent_troe_;
        scalar n = scalar(0.75) + scalar(-1.27) * log_f_cent_troe_;
        scalar d = scalar(0.14);

        scalar a = log_Pr + c;
        scalar da_dPr = dlog_Pr_dPr;

        scalar b = n - d * (log_Pr + c);
        scalar db_dPr =  -d * (dlog_Pr_dPr);

        scalar Pr_factor = inv_gen(scalar(1) + pow_gen2(divide(a, b)));
        scalar dPr_factor_dPr = inv_chain(scalar(1) + pow_gen2(divide(a, b)),
                                            pow_gen2_chain(divide(a, b),
                                                           divide_chain(a,
                                                                        da_dPr,
                                                                        b,
                                                                        db_dPr)));
        
        return
        dpow_db_chain(scalar(10), 
                      multiply(log_f_cent_troe_, 
                                Pr_factor),
                      multiply_chain(log_f_cent_troe_,
                                     scalar(0.0), 
                                     Pr_factor,
                                     dPr_factor_dPr));
}


scalar
falloff_troe(const scalar& A_low,  //constant
             const scalar& B_low, //constant
             const scalar& E_low,  //constant
             const scalar& A_high, //constant
             const scalar& B_high,  //constant
             const scalar& E_high, //constant
             const scalar& alpha,//constant
             const scalar& T1,//constant
             const scalar& T2,//constant
             const scalar& T3,//constant
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
                 f_troe(alpha, T1, T2, T3, temperature, Pr));
}


scalar
dfalloff_troe_dtemperature(const scalar& A_low,  //constant
                          const scalar& B_low, //constant
                          const scalar& E_low,  //constant
                          const scalar& A_high, //constant
                          const scalar& B_high,  //constant
                          const scalar& E_high, //constant
                          const scalar& alpha,//constant
                          const scalar& T1,//constant
                          const scalar& T2,//constant
                          const scalar& T3,//constant
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
                       f_troe(alpha, T1, T2, T3, temperature, Pr), 
                       df_troe_dtemperature(alpha, T1, T2, T3, temperature, Pr) + df_troe_dPr(alpha, T1, T2, T3, temperature, Pr) * dPr_dtemperature);
}


scalar
dfalloff_troe_dlog_temperature(const scalar& A_low,  //constant
                               const scalar& B_low, //constant
                               const scalar& E_low,  //constant
                               const scalar& A_high, //constant
                               const scalar& B_high,  //constant
                               const scalar& E_high, //constant
                               const scalar& alpha,//constant
                               const scalar& T1,//constant
                               const scalar& T2,//constant
                               const scalar& T3,//constant
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
                       multiply_chain(k_high, dk_high_dlog_temperature, Pr_inv_one_p_Pr, dPr_inv_one_p_Pr_dlog_temperature),
                       f_troe(alpha, T1, T2, T3, temperature, Pr),
                       df_troe_dPr(alpha, T1, T2, T3, temperature, Pr) * dPr_dlog_temperature);
}


scalar
dfalloff_troe_dmixture_concentration(const scalar& A_low,  //constant
                                     const scalar& B_low, //constant
                                     const scalar& E_low,  //constant
                                     const scalar& A_high, //constant
                                     const scalar& B_high,  //constant
                                     const scalar& E_high, //constant
                                     const scalar& alpha,//constant
                                     const scalar& T1,//constant
                                     const scalar& T2,//constant
                                     const scalar& T3,//constant
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
                       f_troe(alpha, T1, T2, T3, temperature, Pr),
                       df_troe_dPr(alpha, T1, T2, T3, temperature, Pr) * dPr_dmixture_concentration);
}