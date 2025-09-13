    
double call_forward_reaction_0(const double& temperature, const double& log_temperature)  { return arrhenius(double(103990000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double call_forward_reaction_1(const double& temperature, const double& log_temperature)  { return arrhenius(double(3649000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double call_forward_reaction_2(const double& temperature, const double& log_temperature)  { return arrhenius(double(760250000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double call_forward_reaction_3(const double& temperature, const double& log_temperature)  { return arrhenius(double(215780.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double call_forward_reaction_4(const double& temperature, const double& log_temperature)  { return arrhenius(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double call_forward_reaction_5(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(3.876700000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
double call_forward_reaction_6(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
double call_forward_reaction_7(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(4712400000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
double call_forward_reaction_8(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(5.903e+24), double(-3.32), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(3.0)-double(1))*species[2] + (double(1.5)-double(1))*species[4] + (double(0.0)-double(1))*species[6]);}
    
double call_forward_reaction_9(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
double
call_forward_reaction_10(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(724170000000000.1), double(-1.72), double(2196600.0), double(5286300000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[2] + (double(0.78)-double(1))*species[4] + (double(13.76974842661546)-double(1))*species[6]);}
    
double call_forward_reaction_11(const double& temperature, const double& log_temperature)  { return arrhenius(double(3272.9000000000005), double(2.09), double(-6087720.0), temperature, log_temperature);}
    
double call_forward_reaction_12(const double& temperature, const double& log_temperature)  { return arrhenius(double(63600000000.00001), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double call_forward_reaction_13(const double& temperature, const double& log_temperature)  { return arrhenius(double(1613100000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_14(const double& temperature, const double& log_temperature)  { return arrhenius(double(17208000000.000004), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double call_forward_reaction_15(const double& temperature, const double& log_temperature)  { return arrhenius(double(7636800000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double call_forward_reaction_16(const double& temperature, const double& log_temperature)  { return arrhenius(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double call_forward_reaction_17(const double& temperature, const double& log_temperature)  { return arrhenius(double(194000000.00000003), double(0.0), double(-5895256.0), temperature, log_temperature);}
    
double call_forward_reaction_18(const double& temperature, const double& log_temperature)  { return arrhenius(double(103000000000.00002), double(0.0), double(46191360.0), temperature, log_temperature);}
    
double
call_forward_reaction_19(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(2.3968000000000005e+21), double(-2.3), double(203970000.0), double(1925200000000.0), double(0.9), double(203970000.0), double(0.58), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(1.5)-double(1))*species[0] + (double(3.7)-double(1))*species[2] + (double(1.2)-double(1))*species[4] + (double(7.5)-double(1))*species[6] + (double(7.7)-double(1))*species[8]);}
    
double call_forward_reaction_20(const double& temperature, const double& log_temperature)  { return arrhenius(double(24100000000.000004), double(0.0), double(16610480.0), temperature, log_temperature);}
    
double call_forward_reaction_21(const double& temperature, const double& log_temperature)  { return arrhenius(double(48200000000.00001), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double call_forward_reaction_22(const double& temperature, const double& log_temperature)  { return arrhenius(double(9630.0), double(2.0), double(16610480.0), temperature, log_temperature);}
    
double call_forward_reaction_23(const double& temperature, const double& log_temperature)  { return arrhenius(double(1761100000.0000002), double(0.0), double(1330512.0), temperature, log_temperature);}
    
double call_forward_reaction_24(const double& temperature, const double& log_temperature)  { return arrhenius(double(76310000000.00002), double(0.0), double(30417680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(103990000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(103990000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3649000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3649000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(760250000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(760250000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(215780.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(215780.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_5_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(3.876700000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
double dcall_forward_reaction_5_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(3.876700000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
Species dcall_forward_reaction_5_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(1.0), double(1.0), double(2.5), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(3.876700000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_6_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
double dcall_forward_reaction_6_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
Species dcall_forward_reaction_6_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(1.0), double(1.0), double(2.5), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_7_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(4712400000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
double dcall_forward_reaction_7_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(4712400000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]);}
    
Species dcall_forward_reaction_7_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(1.0), double(1.0), double(2.5), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(4712400000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[2] + (double(12.0)-double(1))*species[6]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_8_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(5.903e+24), double(-3.32), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(3.0)-double(1))*species[2] + (double(1.5)-double(1))*species[4] + (double(0.0)-double(1))*species[6]);}
    
double dcall_forward_reaction_8_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(5.903e+24), double(-3.32), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(3.0)-double(1))*species[2] + (double(1.5)-double(1))*species[4] + (double(0.0)-double(1))*species[6]);}
    
Species dcall_forward_reaction_8_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(3.0), double(1.0), double(1.5), double(1.0), double(0.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(5.903e+24), double(-3.32), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(3.0)-double(1))*species[2] + (double(1.5)-double(1))*species[4] + (double(0.0)-double(1))*species[6]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_9_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_9_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_9_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),double(0),double(0),double(0),double(0),double(0),1.0*dthird_body_dmixture_concentration(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration),double(0),double(0)};}
    
double
dcall_forward_reaction_10_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(724170000000000.1), double(-1.72), double(2196600.0), double(5286300000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[2] + (double(0.78)-double(1))*species[4] + (double(13.76974842661546)-double(1))*species[6]);}
    
double
dcall_forward_reaction_10_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(724170000000000.1), double(-1.72), double(2196600.0), double(5286300000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[2] + (double(0.78)-double(1))*species[4] + (double(13.76974842661546)-double(1))*species[6]);}
    
Species
dcall_forward_reaction_10_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(1.0), double(1.0), double(2.0), double(1.0), double(0.78), double(1.0), double(13.76974842661546), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(724170000000000.1), double(-1.72), double(2196600.0), double(5286300000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[2] + (double(0.78)-double(1))*species[4] + (double(13.76974842661546)-double(1))*species[6]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_11_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3272.9000000000005), double(2.09), double(-6087720.0), temperature, log_temperature);}
    
double dcall_forward_reaction_11_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3272.9000000000005), double(2.09), double(-6087720.0), temperature, log_temperature);}
    
double dcall_forward_reaction_12_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(63600000000.00001), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_12_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(63600000000.00001), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_13_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1613100000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_13_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1613100000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_14_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(17208000000.000004), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_14_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(17208000000.000004), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_15_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7636800000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double dcall_forward_reaction_15_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7636800000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double dcall_forward_reaction_16_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_16_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_17_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(194000000.00000003), double(0.0), double(-5895256.0), temperature, log_temperature);}
    
double dcall_forward_reaction_17_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(194000000.00000003), double(0.0), double(-5895256.0), temperature, log_temperature);}
    
double dcall_forward_reaction_18_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(103000000000.00002), double(0.0), double(46191360.0), temperature, log_temperature);}
    
double dcall_forward_reaction_18_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(103000000000.00002), double(0.0), double(46191360.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_19_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(2.3968000000000005e+21), double(-2.3), double(203970000.0), double(1925200000000.0), double(0.9), double(203970000.0), double(0.58), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(1.5)-double(1))*species[0] + (double(3.7)-double(1))*species[2] + (double(1.2)-double(1))*species[4] + (double(7.5)-double(1))*species[6] + (double(7.7)-double(1))*species[8]);}
    
double
dcall_forward_reaction_19_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(2.3968000000000005e+21), double(-2.3), double(203970000.0), double(1925200000000.0), double(0.9), double(203970000.0), double(0.58), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(1.5)-double(1))*species[0] + (double(3.7)-double(1))*species[2] + (double(1.2)-double(1))*species[4] + (double(7.5)-double(1))*species[6] + (double(7.7)-double(1))*species[8]);}
    
Species
dcall_forward_reaction_19_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(1.5), double(1.0), double(3.7), double(1.0), double(1.2), double(1.0), double(7.5), double(1.0), double(7.7)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(2.3968000000000005e+21), double(-2.3), double(203970000.0), double(1925200000000.0), double(0.9), double(203970000.0), double(0.58), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(1.5)-double(1))*species[0] + (double(3.7)-double(1))*species[2] + (double(1.2)-double(1))*species[4] + (double(7.5)-double(1))*species[6] + (double(7.7)-double(1))*species[8]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_20_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(24100000000.000004), double(0.0), double(16610480.0), temperature, log_temperature);}
    
double dcall_forward_reaction_20_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(24100000000.000004), double(0.0), double(16610480.0), temperature, log_temperature);}
    
double dcall_forward_reaction_21_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(48200000000.00001), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_21_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(48200000000.00001), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_22_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(9630.0), double(2.0), double(16610480.0), temperature, log_temperature);}
    
double dcall_forward_reaction_22_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(9630.0), double(2.0), double(16610480.0), temperature, log_temperature);}
    
double dcall_forward_reaction_23_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1761100000.0000002), double(0.0), double(1330512.0), temperature, log_temperature);}
    
double dcall_forward_reaction_23_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1761100000.0000002), double(0.0), double(1330512.0), temperature, log_temperature);}
    
double dcall_forward_reaction_24_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(76310000000.00002), double(0.0), double(30417680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_24_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(76310000000.00002), double(0.0), double(30417680.0), temperature, log_temperature);}
