    
double call_forward_reaction_0(const double& temperature, const double& log_temperature)  { return arrhenius(double(109000000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double call_forward_reaction_1(const double& temperature, const double& log_temperature)  { return arrhenius(double(3820000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double call_forward_reaction_2(const double& temperature, const double& log_temperature)  { return arrhenius(double(879000000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double call_forward_reaction_3(const double& temperature, const double& log_temperature)  { return arrhenius(double(216000.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double call_forward_reaction_4(const double& temperature, const double& log_temperature)  { return arrhenius(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double call_forward_reaction_5(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double call_forward_reaction_6(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double call_forward_reaction_7(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[2] + (double(0.0)-double(1))*species[6] + (double(7.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11] + (double(2.0)-double(1))*species[12]);}
    
double call_forward_reaction_8(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
double
call_forward_reaction_9(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(1910000000000000.2), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[2] + (double(14.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double call_forward_reaction_10(const double& temperature, const double& log_temperature)  { return arrhenius(double(3680.0000000000005), double(2.087), double(-6087720.0), temperature, log_temperature);}
    
double call_forward_reaction_11(const double& temperature, const double& log_temperature)  { return arrhenius(double(70800000000.00002), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double call_forward_reaction_12(const double& temperature, const double& log_temperature)  { return arrhenius(double(1450000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_13(const double& temperature, const double& log_temperature)  { return arrhenius(double(16300000000.000002), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double call_forward_reaction_14(const double& temperature, const double& log_temperature)  { return arrhenius(double(7000000000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double call_forward_reaction_15(const double& temperature, const double& log_temperature)  { return arrhenius(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double
call_forward_reaction_16(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_lindemann(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double call_forward_reaction_17(const double& temperature, const double& log_temperature)  { return arrhenius(double(2530000000.0000005), double(0.0), double(199576800.0), temperature, log_temperature);}
    
double call_forward_reaction_18(const double& temperature, const double& log_temperature)  { return arrhenius(double(84.60000000000001), double(2.053), double(-1489504.0), temperature, log_temperature);}
    
double call_forward_reaction_19(const double& temperature, const double& log_temperature)  { return arrhenius(double(8640000000.000002), double(-0.664), double(1389088.0), temperature, log_temperature);}
    
double call_forward_reaction_20(const double& temperature, const double& log_temperature)  { return arrhenius(double(157.00000000000003), double(2.18), double(75077696.0), temperature, log_temperature);}
    
double call_forward_reaction_21(const double& temperature, const double& log_temperature)  { return arrhenius(double(3070.000000000001), double(2.5), double(31748192.0), temperature, log_temperature);}
    
double call_forward_reaction_22(const double& temperature, const double& log_temperature)  { return arrhenius(double(231000.00000000003), double(1.56), double(35501240.0), temperature, log_temperature);}
    
double call_forward_reaction_23(const double& temperature, const double& log_temperature)  { return arrhenius(double(1000.0000000000002), double(2.182), double(10234064.0), temperature, log_temperature);}
    
double
call_forward_reaction_24(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(6.35e+29), double(-5.57), double(15974512.0), double(141000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double call_forward_reaction_25(const double& temperature, const double& log_temperature)  { return arrhenius(double(108000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_26(const double& temperature, const double& log_temperature)  { return arrhenius(double(23100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_27(const double& temperature, const double& log_temperature)  { return arrhenius(double(116.00000000000001), double(2.35), double(-6368048.0), temperature, log_temperature);}
    
double call_forward_reaction_28(const double& temperature, const double& log_temperature)  { return arrhenius(double(20800000000.000004), double(0.0), double(-2468560.0), temperature, log_temperature);}
    
double call_forward_reaction_29(const double& temperature, const double& log_temperature)  { return arrhenius(double(2510000000.0000005), double(0.0), double(118394648.0), temperature, log_temperature);}
    
double call_forward_reaction_30(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.022800000000000004), double(2.53), double(40869312.0), temperature, log_temperature);}
    
double call_forward_reaction_31(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.010600000000000002), double(3.36), double(18033040.0), temperature, log_temperature);}
    
double
call_forward_reaction_32(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double call_forward_reaction_33(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature, mixture_concentration);}
    
double call_forward_reaction_34(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration);}
    
double call_forward_reaction_35(const double& temperature, const double& log_temperature)  { return arrhenius(double(416000000.00000006), double(0.57), double(11556208.0), temperature, log_temperature);}
    
double call_forward_reaction_36(const double& temperature, const double& log_temperature)  { return arrhenius(double(78200.00000000001), double(1.63), double(-4414120.0), temperature, log_temperature);}
    
double call_forward_reaction_37(const double& temperature, const double& log_temperature)  { return arrhenius(double(244.00000000000006), double(2.5), double(152548640.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(109000000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(109000000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3820000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3820000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(879000000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(879000000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(216000.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(216000.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_5_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double dcall_forward_reaction_5_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
Species dcall_forward_reaction_5_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(2.0), double(1.9), double(3.8), double(2.5), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_6_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double dcall_forward_reaction_6_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
Species dcall_forward_reaction_6_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(2.0), double(1.9), double(3.8), double(2.5), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_7_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[2] + (double(0.0)-double(1))*species[6] + (double(7.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11] + (double(2.0)-double(1))*species[12]);}
    
double dcall_forward_reaction_7_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[2] + (double(0.0)-double(1))*species[6] + (double(7.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11] + (double(2.0)-double(1))*species[12]);}
    
Species dcall_forward_reaction_7_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(3.0), double(1.0), double(1.5), double(1.0), double(1.0), double(1.0), double(0.0), double(1.0), double(7.0), double(1.9), double(3.8), double(2.5), double(2.0)};return scale_gen(dthird_body_dmixture_concentration(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[2] + (double(0.0)-double(1))*species[6] + (double(7.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11] + (double(2.0)-double(1))*species[12]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_8_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_8_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_8_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),double(0),double(0),double(0),double(0),double(0),1.0*dthird_body_dmixture_concentration(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration),double(0),double(0),double(0),double(0),double(0),double(0)};}
    
double
dcall_forward_reaction_9_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(1910000000000000.2), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[2] + (double(14.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double
dcall_forward_reaction_9_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(1910000000000000.2), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[2] + (double(14.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
Species
dcall_forward_reaction_9_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(0.78), double(1.0), double(1.0), double(1.0), double(14.0), double(1.0), double(2.0), double(1.9), double(3.8), double(2.5), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(1910000000000000.2), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[2] + (double(14.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_10_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3680.0000000000005), double(2.087), double(-6087720.0), temperature, log_temperature);}
    
double dcall_forward_reaction_10_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3680.0000000000005), double(2.087), double(-6087720.0), temperature, log_temperature);}
    
double dcall_forward_reaction_11_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(70800000000.00002), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_11_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(70800000000.00002), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_12_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1450000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_12_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1450000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_13_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(16300000000.000002), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_13_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(16300000000.000002), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_14_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7000000000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double dcall_forward_reaction_14_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7000000000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double dcall_forward_reaction_15_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_15_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_16_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_lindemann_dtemperature(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double
dcall_forward_reaction_16_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_lindemann_dlog_temperature(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
Species
dcall_forward_reaction_16_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(2.0), double(1.9), double(3.8), double(2.5), double(1.0)};
return scale_gen(dfalloff_lindemann_dmixture_concentration(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.9)-double(1))*species[9] + (double(3.8)-double(1))*species[10] + (double(2.5)-double(1))*species[11]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_17_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2530000000.0000005), double(0.0), double(199576800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_17_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2530000000.0000005), double(0.0), double(199576800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_18_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(84.60000000000001), double(2.053), double(-1489504.0), temperature, log_temperature);}
    
double dcall_forward_reaction_18_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(84.60000000000001), double(2.053), double(-1489504.0), temperature, log_temperature);}
    
double dcall_forward_reaction_19_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(8640000000.000002), double(-0.664), double(1389088.0), temperature, log_temperature);}
    
double dcall_forward_reaction_19_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(8640000000.000002), double(-0.664), double(1389088.0), temperature, log_temperature);}
    
double dcall_forward_reaction_20_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(157.00000000000003), double(2.18), double(75077696.0), temperature, log_temperature);}
    
double dcall_forward_reaction_20_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(157.00000000000003), double(2.18), double(75077696.0), temperature, log_temperature);}
    
double dcall_forward_reaction_21_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3070.000000000001), double(2.5), double(31748192.0), temperature, log_temperature);}
    
double dcall_forward_reaction_21_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3070.000000000001), double(2.5), double(31748192.0), temperature, log_temperature);}
    
double dcall_forward_reaction_22_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(231000.00000000003), double(1.56), double(35501240.0), temperature, log_temperature);}
    
double dcall_forward_reaction_22_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(231000.00000000003), double(1.56), double(35501240.0), temperature, log_temperature);}
    
double dcall_forward_reaction_23_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1000.0000000000002), double(2.182), double(10234064.0), temperature, log_temperature);}
    
double dcall_forward_reaction_23_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1000.0000000000002), double(2.182), double(10234064.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_24_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(6.35e+29), double(-5.57), double(15974512.0), double(141000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double
dcall_forward_reaction_24_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(6.35e+29), double(-5.57), double(15974512.0), double(141000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
Species
dcall_forward_reaction_24_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(2.0), double(1.5), double(2.0), double(2.5), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(6.35e+29), double(-5.57), double(15974512.0), double(141000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_25_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(108000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_25_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(108000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_26_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(23100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_26_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(23100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_27_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(116.00000000000001), double(2.35), double(-6368048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_27_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(116.00000000000001), double(2.35), double(-6368048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_28_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(20800000000.000004), double(0.0), double(-2468560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_28_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(20800000000.000004), double(0.0), double(-2468560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_29_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2510000000.0000005), double(0.0), double(118394648.0), temperature, log_temperature);}
    
double dcall_forward_reaction_29_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2510000000.0000005), double(0.0), double(118394648.0), temperature, log_temperature);}
    
double dcall_forward_reaction_30_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.022800000000000004), double(2.53), double(40869312.0), temperature, log_temperature);}
    
double dcall_forward_reaction_30_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.022800000000000004), double(2.53), double(40869312.0), temperature, log_temperature);}
    
double dcall_forward_reaction_31_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.010600000000000002), double(3.36), double(18033040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_31_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.010600000000000002), double(3.36), double(18033040.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_32_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
double
dcall_forward_reaction_32_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]);}
    
Species
dcall_forward_reaction_32_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(2.0), double(1.5), double(2.0), double(2.5), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[6] + (double(2.0)-double(1))*species[8] + (double(1.5)-double(1))*species[9] + (double(2.0)-double(1))*species[10] + (double(2.5)-double(1))*species[11]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_33_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_33_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_33_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),1.0*dthird_body_dmixture_concentration(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature, mixture_concentration),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0)};}
    
double dcall_forward_reaction_34_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_34_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_34_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),1.0*dthird_body_dmixture_concentration(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0)};}
    
double dcall_forward_reaction_35_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(416000000.00000006), double(0.57), double(11556208.0), temperature, log_temperature);}
    
double dcall_forward_reaction_35_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(416000000.00000006), double(0.57), double(11556208.0), temperature, log_temperature);}
    
double dcall_forward_reaction_36_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(78200.00000000001), double(1.63), double(-4414120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_36_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(78200.00000000001), double(1.63), double(-4414120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_37_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(244.00000000000006), double(2.5), double(152548640.0), temperature, log_temperature);}
    
double dcall_forward_reaction_37_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(244.00000000000006), double(2.5), double(152548640.0), temperature, log_temperature);}
