//scalar multiply/divides
//multiply
 scalar multiply(const scalar& a, const scalar& b)  {return a * b;}
//derivatives
 scalar dmultiply_da(const scalar& a, const scalar& b)  {return b;}
 scalar dmultiply_db(const scalar& a, const scalar& b)  {return a;}
//derivatives * increment
 scalar multiply_chain(const scalar& a, const scalar& a_perturbation, const scalar& b, const scalar& b_perturbation)  {return a_perturbation * b + a * b_perturbation;}

//pow
 scalar pow2(const scalar& a)  {return a * a;}
 scalar dpow2_da(const scalar& a)  {return scalar(2) * a;}

//iverse
 scalar inv_gen(const scalar& a)  {return scalar(1)/a;}
 scalar dinv_da(const scalar& a)  {return scalar(-1)/pow2(a);}
 scalar inv_safe_gen(const scalar& a)  {return (a != scalar(0)) ? (scalar(1.0) / a) : scalar(0.0);}
 scalar dinv_safe_da(const scalar& a)  {return (a != scalar(0)) ? (scalar(-1.0) / pow2(a)) : scalar(0.0);}
 scalar inv_chain(const scalar& a, const scalar& a_perturbation)  {return scalar(-a_perturbation)/pow2(a);}

//divide
 scalar divide(const scalar& a, const scalar& b)  {return a / b;}
//derivatives
 scalar ddivide_da(const scalar& a, const scalar& b)  {return inv_gen(b);}
 scalar ddivide_db(const scalar& a, const scalar& b)  {return -a / pow2(b);}
//derivatives * increment
 scalar divide_chain(const scalar& a, const scalar& a_perturbation, const scalar& b, const scalar& b_perturbation)  {return a_perturbation / b + -a / pow2(b) * b_perturbation;}

 scalar sqrt_gen(const scalar& a)  {return std::sqrt(a);}
 scalar dsqrt_da(const scalar& a)  {return scalar(0.5) * inv_gen(std::sqrt(a));}
 scalar sqrt_chain(const scalar& a, const scalar& da)  { return scalar(0.5) * da * inv_gen(std::sqrt(a));}