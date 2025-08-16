//pow
 scalar pow_gen(const scalar& a, const scalar& b)  { return std::pow(a, b);}
// Partial derivative of a^b with respect to a
 scalar dpow_da(const scalar& a, const scalar& b)  { return b * std::pow(a, b - scalar(1));}
//chain rule if b = constant
 scalar dpow_da_chain(const scalar& a, const scalar& a_chain, const scalar& b)  { return a_chain * b * std::pow(a, b - scalar(1));}
// Partial derivative of a^b with respect to b
 scalar dpow_db(const scalar& a, const scalar& b)  { return std::pow(a, b) * std::log(a);}
// chain rule if a = constant
 scalar dpow_db_chain(const scalar& a, const scalar& b, const scalar& b_perturbation)  { return std::pow(a, b) * std::log(a) * b_perturbation;}

 
scalar
pow_gen_chain(const scalar& a, 
              const scalar& a_perturbation,
              const scalar& b,
              const scalar& b_perturbation) 
{ 
    return dpow_da(a, b) * a_perturbation + dpow_db(a, b) * b_perturbation;
}

//simple pow
 scalar pow_gen2(const scalar& a)  { return a * a;}
 scalar dpow_gen2_da(const scalar& a)  { return scalar(2) * a;}
 scalar pow_gen2_chain(const scalar& a, const scalar& a_perturbation)  { return scalar(2) * a * a_perturbation;}

 scalar pow_gen3(const scalar& a)  { return a * a * a;}
 scalar dpow_gen3_da(const scalar& a)  { return scalar(3) * a * a;}
 scalar pow_gen3_chain(const scalar& a, const scalar& a_perturbation)  { return scalar(3) * a * a * a_perturbation;}

 scalar pow_gen4(const scalar& a)  { return a * a * a * a;}
 scalar dpow_gen4_da(const scalar& a)  { return scalar(4) * a * a * a;}
 scalar pow_gen4_chain(const scalar& a, const scalar& a_perturbation)  { return scalar(4) * a * a * a * a_perturbation;}