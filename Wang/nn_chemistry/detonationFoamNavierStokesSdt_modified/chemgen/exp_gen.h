//exponent
 scalar exp_gen(const scalar& a)  {return std::exp(a);}
 scalar dexp_da(const scalar& a)  {return exp_gen(a);}
 scalar exp_chain(const scalar& a, const scalar& a_perturbation)  {return a_perturbation * exp_gen(a);}

//ln
 scalar log_gen(const scalar& a)  {return std::log(a);}
 scalar dlog_da(const scalar& a)  {return inv_gen(a);}
 scalar log_chain(const scalar& a, const scalar& a_perturbation)  {return inv_gen(a) * a_perturbation;}

//log10
 scalar log10_gen(const scalar& a)  {return (a > scalar(0)) ? std::log10(a) : scalar(0.0);}
 scalar dlog10_da(const scalar& a)  {return inv_gen(a * log_gen(10));}
 scalar log10_chain(const scalar& a, const scalar& a_perturbation)  {return dlog10_da(a) * a_perturbation;}