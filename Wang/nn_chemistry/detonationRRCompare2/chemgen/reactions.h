    
scalar call_forward_reaction_0(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(103990000000.00002), scalar(0.0), scalar(64057040.0), temperature, log_temperature);}
    
scalar call_forward_reaction_1(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(3649000000.0000005), scalar(0.0), scalar(33262800.0), temperature, log_temperature);}
    
scalar call_forward_reaction_2(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(760250000000.0001), scalar(0.0), scalar(80249120.0), temperature, log_temperature);}
    
scalar call_forward_reaction_3(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(215780.00000000003), scalar(1.51), scalar(14380408.0), temperature, log_temperature);}
    
scalar call_forward_reaction_4(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(33.50000000000001), scalar(2.42), scalar(-8066752.0), temperature, log_temperature);}
    
scalar call_forward_reaction_5(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(3.876700000000001e+16), scalar(-1.4), scalar(436767760.0), temperature, log_temperature, mixture_concentration + (scalar(2.5)-scalar(1))*species[1] + (scalar(12.0)-scalar(1))*species[5] + (scalar(0.0)-scalar(1))*species[8]);}
    
scalar call_forward_reaction_6(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(5840000000000001.0), scalar(-1.1), scalar(436767760.0), temperature, log_temperature, mixture_concentration);}
    
scalar call_forward_reaction_7(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(6160000000.000001), scalar(-0.5), scalar(0.0), temperature, log_temperature, mixture_concentration + (scalar(2.5)-scalar(1))*species[1] + (scalar(12.0)-scalar(1))*species[5] + (scalar(0.0)-scalar(1))*species[8]);}
    
scalar call_forward_reaction_8(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(18900000.000000004), scalar(0.0), scalar(-7480992.0), temperature, log_temperature, mixture_concentration);}
    
scalar call_forward_reaction_9(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(4712400000000.001), scalar(-1.0), scalar(0.0), temperature, log_temperature, mixture_concentration + (scalar(2.5)-scalar(1))*species[1] + (scalar(12.0)-scalar(1))*species[5] + (scalar(0.75)-scalar(1))*species[8]);}
    
scalar call_forward_reaction_10(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(5.903e+24), scalar(-3.32), scalar(505427200.0), temperature, log_temperature, mixture_concentration + (scalar(3.0)-scalar(1))*species[1] + (scalar(1.5)-scalar(1))*species[3] + (scalar(0.0)-scalar(1))*species[5]);}
    
scalar call_forward_reaction_11(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return third_body(scalar(1.0100000000000001e+23), scalar(-2.44), scalar(502916800.0), temperature, log_temperature, mixture_concentration);}
    
scalar
call_forward_reaction_12(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return falloff_troe(scalar(724170000000000.1), scalar(-1.72), scalar(2196600.0), scalar(5286300000.000001), scalar(0.44), scalar(0.0), scalar(0.5), scalar(90000.0), scalar(90000.0), scalar(30.0), temperature, log_temperature, mixture_concentration + (scalar(2.0)-scalar(1))*species[1] + (scalar(0.78)-scalar(1))*species[3] + (scalar(13.76974842661546)-scalar(1))*species[5] + (scalar(0.6867116639685282)-scalar(1))*species[8]);}
    
scalar call_forward_reaction_13(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(3272.9000000000005), scalar(2.09), scalar(-6087720.0), temperature, log_temperature);}
    
scalar call_forward_reaction_14(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(63600000000.00001), scalar(0.0), scalar(1255200.0), temperature, log_temperature);}
    
scalar call_forward_reaction_15(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(1613100000.0000002), scalar(0.0), scalar(0.0), temperature, log_temperature);}
    
scalar call_forward_reaction_16(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(17208000000.000004), scalar(0.0), scalar(-1861880.0), temperature, log_temperature);}
    
scalar call_forward_reaction_17(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(7636800000.000001), scalar(0.0), scalar(-4573112.0), temperature, log_temperature);}
    
scalar call_forward_reaction_18(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(450000000000.00006), scalar(0.0), scalar(45731120.0), temperature, log_temperature);}
    
scalar call_forward_reaction_19(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(194000000.00000003), scalar(0.0), scalar(-5895256.0), temperature, log_temperature);}
    
scalar call_forward_reaction_20(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(103000000000.00002), scalar(0.0), scalar(46191360.0), temperature, log_temperature);}
    
scalar
call_forward_reaction_21(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return falloff_troe(scalar(2.3968000000000005e+21), scalar(-2.3), scalar(203970000.0), scalar(1925200000000.0), scalar(0.9), scalar(203970000.0), scalar(0.58), scalar(90000.0), scalar(90000.0), scalar(30.0), temperature, log_temperature, mixture_concentration + (scalar(3.7)-scalar(1))*species[1] + (scalar(1.2)-scalar(1))*species[3] + (scalar(7.5)-scalar(1))*species[5] + (scalar(7.7)-scalar(1))*species[7] + (scalar(0.9859595379900199)-scalar(1))*species[8]);}
    
scalar call_forward_reaction_22(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(24100000000.000004), scalar(0.0), scalar(16610480.0), temperature, log_temperature);}
    
scalar call_forward_reaction_23(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(48200000000.00001), scalar(0.0), scalar(33262800.0), temperature, log_temperature);}
    
scalar call_forward_reaction_24(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(9630.0), scalar(2.0), scalar(16610480.0), temperature, log_temperature);}
    
scalar call_forward_reaction_25(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(1761100000.0000002), scalar(0.0), scalar(1330512.0), temperature, log_temperature);}
    
scalar call_forward_reaction_26(const scalar& temperature, const scalar& log_temperature)  { return arrhenius(scalar(76310000000.00002), scalar(0.0), scalar(30417680.0), temperature, log_temperature);}
    //dcall_forward_reaction_0 temperature unused
    //dcall_forward_reaction_1 temperature unused
    //dcall_forward_reaction_2 temperature unused
    //dcall_forward_reaction_3 temperature unused
    //dcall_forward_reaction_4 temperature unused
    //dcall_forward_reaction_5 temperature unused not needed
    
Species dcall_forward_reaction_5_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { Species dmixture_concentration_dspecies = {scalar(1), scalar(2.5), scalar(1), scalar(1), scalar(1), scalar(12.0), scalar(1), scalar(1), scalar(0.0)};return scale_gen(dthird_body_dmixture_concentration(scalar(3.876700000000001e+16), scalar(-1.4), scalar(436767760.0), temperature, log_temperature, mixture_concentration + (scalar(2.5)-scalar(1))*species[1] + (scalar(12.0)-scalar(1))*species[5] + (scalar(0.0)-scalar(1))*species[8]),dmixture_concentration_dspecies);}
    //dcall_forward_reaction_6 temperature unused not needed
    
Species dcall_forward_reaction_6_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return {scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),dthird_body_dmixture_concentration(scalar(5840000000000001.0), scalar(-1.1), scalar(436767760.0), temperature, log_temperature, mixture_concentration)};}
    //dcall_forward_reaction_7 temperature unused not needed
    
Species dcall_forward_reaction_7_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { Species dmixture_concentration_dspecies = {scalar(1), scalar(2.5), scalar(1), scalar(1), scalar(1), scalar(12.0), scalar(1), scalar(1), scalar(0.0)};return scale_gen(dthird_body_dmixture_concentration(scalar(6160000000.000001), scalar(-0.5), scalar(0.0), temperature, log_temperature, mixture_concentration + (scalar(2.5)-scalar(1))*species[1] + (scalar(12.0)-scalar(1))*species[5] + (scalar(0.0)-scalar(1))*species[8]),dmixture_concentration_dspecies);}
    //dcall_forward_reaction_8 temperature unused not needed
    
Species dcall_forward_reaction_8_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return {scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),dthird_body_dmixture_concentration(scalar(18900000.000000004), scalar(0.0), scalar(-7480992.0), temperature, log_temperature, mixture_concentration)};}
    //dcall_forward_reaction_9 temperature unused not needed
    
Species dcall_forward_reaction_9_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { Species dmixture_concentration_dspecies = {scalar(1), scalar(2.5), scalar(1), scalar(1), scalar(1), scalar(12.0), scalar(1), scalar(1), scalar(0.75)};return scale_gen(dthird_body_dmixture_concentration(scalar(4712400000000.001), scalar(-1.0), scalar(0.0), temperature, log_temperature, mixture_concentration + (scalar(2.5)-scalar(1))*species[1] + (scalar(12.0)-scalar(1))*species[5] + (scalar(0.75)-scalar(1))*species[8]),dmixture_concentration_dspecies);}
    //dcall_forward_reaction_10 temperature unused not needed
    
Species dcall_forward_reaction_10_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { Species dmixture_concentration_dspecies = {scalar(1), scalar(3.0), scalar(1), scalar(1.5), scalar(1), scalar(0.0), scalar(1), scalar(1), scalar(1)};return scale_gen(dthird_body_dmixture_concentration(scalar(5.903e+24), scalar(-3.32), scalar(505427200.0), temperature, log_temperature, mixture_concentration + (scalar(3.0)-scalar(1))*species[1] + (scalar(1.5)-scalar(1))*species[3] + (scalar(0.0)-scalar(1))*species[5]),dmixture_concentration_dspecies);}
    //dcall_forward_reaction_11 temperature unused not needed
    
Species dcall_forward_reaction_11_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { return {scalar(0),scalar(0),scalar(0),scalar(0),scalar(0),dthird_body_dmixture_concentration(scalar(1.0100000000000001e+23), scalar(-2.44), scalar(502916800.0), temperature, log_temperature, mixture_concentration),scalar(0),scalar(0),scalar(0)};}
    //dcall_forward_reaction_12 temperature derivative unused
    
Species
dcall_forward_reaction_12_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { Species dmixture_concentration_dspecies = {scalar(1), scalar(2.0), scalar(1), scalar(0.78), scalar(1), scalar(13.76974842661546), scalar(1), scalar(1), scalar(0.6867116639685282)};
return scale_gen(dfalloff_troe_dmixture_concentration(scalar(724170000000000.1), scalar(-1.72), scalar(2196600.0), scalar(5286300000.000001), scalar(0.44), scalar(0.0), scalar(0.5), scalar(90000.0), scalar(90000.0), scalar(30.0), temperature, log_temperature, mixture_concentration + (scalar(2.0)-scalar(1))*species[1] + (scalar(0.78)-scalar(1))*species[3] + (scalar(13.76974842661546)-scalar(1))*species[5] + (scalar(0.6867116639685282)-scalar(1))*species[8]), dmixture_concentration_dspecies);}
    //dcall_forward_reaction_13 temperature unused
    //dcall_forward_reaction_14 temperature unused
    //dcall_forward_reaction_15 temperature unused
    //dcall_forward_reaction_16 temperature unused
    //dcall_forward_reaction_17 temperature unused
    //dcall_forward_reaction_18 temperature unused
    //dcall_forward_reaction_19 temperature unused
    //dcall_forward_reaction_20 temperature unused
    //dcall_forward_reaction_21 temperature derivative unused
    
Species
dcall_forward_reaction_21_dspecies(const Species& species, const scalar& temperature, const scalar& log_temperature, const scalar& mixture_concentration)  { Species dmixture_concentration_dspecies = {scalar(1), scalar(3.7), scalar(1), scalar(1.2), scalar(1), scalar(7.5), scalar(1), scalar(7.7), scalar(0.9859595379900199)};
return scale_gen(dfalloff_troe_dmixture_concentration(scalar(2.3968000000000005e+21), scalar(-2.3), scalar(203970000.0), scalar(1925200000000.0), scalar(0.9), scalar(203970000.0), scalar(0.58), scalar(90000.0), scalar(90000.0), scalar(30.0), temperature, log_temperature, mixture_concentration + (scalar(3.7)-scalar(1))*species[1] + (scalar(1.2)-scalar(1))*species[3] + (scalar(7.5)-scalar(1))*species[5] + (scalar(7.7)-scalar(1))*species[7] + (scalar(0.9859595379900199)-scalar(1))*species[8]), dmixture_concentration_dspecies);}
    //dcall_forward_reaction_22 temperature unused
    //dcall_forward_reaction_23 temperature unused
    //dcall_forward_reaction_24 temperature unused
    //dcall_forward_reaction_25 temperature unused
    //dcall_forward_reaction_26 temperature unused
