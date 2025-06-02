
scalar
third_body(const scalar& A, 
           const scalar& B,
           const scalar& E, 
           const scalar& temperature, 
           const scalar& log_temperature, 
           const scalar& mixture_concentration) 
{
        return multiply(mixture_concentration,
                        arrhenius(A, B, E, temperature, log_temperature));
}


scalar
dthird_body_dtemperature(const scalar& A, 
                         const scalar& B, 
                         const scalar& E, 
                         const scalar& temperature, 
                         const scalar& log_temperature,
                         const scalar& mixture_concentration) 
{
        return multiply(mixture_concentration,
                        darrhenius_dtemperature(A,B,E,temperature,log_temperature));
}


scalar
dthird_body_dlog_temperature(const scalar& A, 
                             const scalar& B, 
                             const scalar& E, 
                             const scalar& temperature, 
                             const scalar& log_temperature,
                             const scalar& mixture_concentration) 
{
        return multiply(mixture_concentration,
                        darrhenius_dlog_temperature(A,B,E,temperature,log_temperature));
}


scalar
dthird_body_dmixture_concentration(const scalar& A, 
                                   const scalar& B, 
                                   const scalar& E, 
                                   const scalar& temperature,
                                   const scalar& log_temperature,
                                   const scalar& mixture_concentration) 
{
        return arrhenius(A,B,E,temperature, log_temperature);
}