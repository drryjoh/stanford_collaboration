    
double call_forward_reaction_0(const double& temperature, const double& log_temperature)  { return arrhenius(double(104000000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double call_forward_reaction_1(const double& temperature, const double& log_temperature)  { return arrhenius(double(3820000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double call_forward_reaction_2(const double& temperature, const double& log_temperature)  { return arrhenius(double(879000000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double call_forward_reaction_3(const double& temperature, const double& log_temperature)  { return arrhenius(double(216000.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double call_forward_reaction_4(const double& temperature, const double& log_temperature)  { return arrhenius(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double call_forward_reaction_5(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_6(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_7(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_8(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[3] + (double(0.0)-double(1))*species[5] + (double(7.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22] + (double(2.0)-double(1))*species[29]);}
    
double call_forward_reaction_9(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
double
call_forward_reaction_10(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(637000000000000.1), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[3] + (double(14.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_11(const double& temperature, const double& log_temperature)  { return arrhenius(double(3680.0000000000005), double(2.087), double(-6087720.0), temperature, log_temperature);}
    
double call_forward_reaction_12(const double& temperature, const double& log_temperature)  { return arrhenius(double(70800000000.00002), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double call_forward_reaction_13(const double& temperature, const double& log_temperature)  { return arrhenius(double(1450000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_14(const double& temperature, const double& log_temperature)  { return arrhenius(double(16300000000.000002), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double call_forward_reaction_15(const double& temperature, const double& log_temperature)  { return arrhenius(double(7000000000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double call_forward_reaction_16(const double& temperature, const double& log_temperature)  { return arrhenius(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double
call_forward_reaction_17(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_lindemann(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_18(const double& temperature, const double& log_temperature)  { return arrhenius(double(2530000000.0000005), double(0.0), double(199576800.0), temperature, log_temperature);}
    
double call_forward_reaction_19(const double& temperature, const double& log_temperature)  { return arrhenius(double(70.5), double(2.053), double(-1489504.0), temperature, log_temperature);}
    
double call_forward_reaction_20(const double& temperature, const double& log_temperature)  { return arrhenius(double(5760000000.000001), double(-0.664), double(1389088.0), temperature, log_temperature);}
    
double call_forward_reaction_21(const double& temperature, const double& log_temperature)  { return arrhenius(double(157.00000000000003), double(2.18), double(75077696.0), temperature, log_temperature);}
    
double call_forward_reaction_22(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(480000000000000.06), double(-1.2), double(74199056.0), temperature, log_temperature, mixture_concentration + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_23(const double& temperature, const double& log_temperature)  { return arrhenius(double(90300000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_24(const double& temperature, const double& log_temperature)  { return arrhenius(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_25(const double& temperature, const double& log_temperature)  { return arrhenius(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_26(const double& temperature, const double& log_temperature)  { return arrhenius(double(108000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_27(const double& temperature, const double& log_temperature)  { return arrhenius(double(6920.000000000001), double(1.9), double(-5732080.0), temperature, log_temperature);}
    
double call_forward_reaction_28(const double& temperature, const double& log_temperature)  { return arrhenius(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_29(const double& temperature, const double& log_temperature)  { return arrhenius(double(57000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_30(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_31(const double& temperature, const double& log_temperature)  { return arrhenius(double(175000000000.00003), double(0.0), double(13890880.0), temperature, log_temperature);}
    
double
call_forward_reaction_32(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(2.4300000000000004e+16), double(-1.6), double(0.0), double(51300000000.00001), double(0.15), double(0.0), double(0.514), double(22850.0), double(10350.0), double(152.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_33(const double& temperature, const double& log_temperature)  { return arrhenius(double(3430000000.0000005), double(0.0), double(-3698656.0), temperature, log_temperature);}
    
double call_forward_reaction_34(const double& temperature, const double& log_temperature)  { return arrhenius(double(184000.00000000003), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double call_forward_reaction_35(const double& temperature, const double& log_temperature)  { return arrhenius(double(277000.00000000006), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double call_forward_reaction_36(const double& temperature, const double& log_temperature)  { return arrhenius(double(184000.00000000003), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double call_forward_reaction_37(const double& temperature, const double& log_temperature)  { return arrhenius(double(277000.00000000006), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double
call_forward_reaction_38(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(3.2600000000000005e+18), double(-2.5), double(0.0), double(1020000000000.0001), double(-0.4), double(0.0), double(0.4), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_39(const double& temperature, const double& log_temperature)  { return arrhenius(double(63800.000000000015), double(1.51), double(-2991560.0), temperature, log_temperature);}
    
double
call_forward_reaction_40(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(1.3900000000000004e+28), double(-5.04), double(30961600.0), double(21300000000.000004), double(0.32), double(0.0), double(0.405), double(2811.0), double(9908.0), double(258.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_41(const double& temperature, const double& log_temperature)  { return arrhenius(double(80000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_42(const double& temperature, const double& log_temperature)  { return arrhenius(double(28600000000.000004), double(0.12), double(-677808.0), temperature, log_temperature);}
    
double call_forward_reaction_43(const double& temperature, const double& log_temperature)  { return arrhenius(double(863.0000000000001), double(2.02), double(28350784.0), temperature, log_temperature);}
    
double call_forward_reaction_44(const double& temperature, const double& log_temperature)  { return arrhenius(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_45(const double& temperature, const double& log_temperature)  { return arrhenius(double(441.00000000000006), double(2.3), double(30756584.0), temperature, log_temperature);}
    
double call_forward_reaction_46(const double& temperature, const double& log_temperature)  { return arrhenius(double(2790000000.0000005), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double call_forward_reaction_47(const double& temperature, const double& log_temperature)  { return arrhenius(double(2010000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double call_forward_reaction_48(const double& temperature, const double& log_temperature)  { return arrhenius(double(1570000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double call_forward_reaction_49(const double& temperature, const double& log_temperature)  { return arrhenius(double(1830000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double call_forward_reaction_50(const double& temperature, const double& log_temperature)  { return arrhenius(double(520000000.00000006), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double call_forward_reaction_51(const double& temperature, const double& log_temperature)  { return arrhenius(double(40000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_52(const double& temperature, const double& log_temperature)  { return arrhenius(double(200000000000.00003), double(0.0), double(45977976.0), temperature, log_temperature);}
    
double call_forward_reaction_53(const double& temperature, const double& log_temperature)  { return arrhenius(double(1600000000000.0002), double(0.0), double(49973696.0), temperature, log_temperature);}
    
double call_forward_reaction_54(const double& temperature, const double& log_temperature)  { return arrhenius(double(12000000000.000002), double(0.0), double(1970664.0), temperature, log_temperature);}
    
double call_forward_reaction_55(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_56(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_57(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_58(const double& temperature, const double& log_temperature)  { return arrhenius(double(68000000000.000015), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_59(const double& temperature, const double& log_temperature)  { return arrhenius(double(31300000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_60(const double& temperature, const double& log_temperature)  { return arrhenius(double(15100000000.000002), double(0.0), double(-1803304.0), temperature, log_temperature);}
    

double
call_forward_reaction_61(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(3.3600000000000004e+19), double(-3.325), double(16526800.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(3.3600000000000004e+19), double(-3.325), double(16526800.0), temperature));
        double log_k2 = log_gen(arrhenius(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature));
        double log_k2 = log_gen(arrhenius(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature));
        double log_k2 = log_gen(arrhenius(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1.2700000000000004e+19), double(-3.06), double(33262800.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return arrhenius(double(1.2700000000000004e+19), double(-3.06), double(33262800.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_62(const double& temperature, const double& log_temperature)  { return arrhenius(double(9000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_63(const double& temperature, const double& log_temperature)  { return arrhenius(double(13300000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_64(const double& temperature, const double& log_temperature)  { return arrhenius(double(6620000000.000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double
call_forward_reaction_65(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(4.190000000000001e+28), double(-5.533), double(25639552.0), double(186000000000.00003), double(-0.033), double(-594128.0), double(0.782), double(2755.0), double(6570.0), double(271.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
call_forward_reaction_66(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_67(const double& temperature, const double& log_temperature)  { return arrhenius(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature);}
    
double call_forward_reaction_68(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration);}
    
double call_forward_reaction_69(const double& temperature, const double& log_temperature)  { return arrhenius(double(416000000.00000006), double(0.57), double(11556208.0), temperature, log_temperature);}
    
double call_forward_reaction_70(const double& temperature, const double& log_temperature)  { return arrhenius(double(78200.00000000001), double(1.63), double(-4414120.0), temperature, log_temperature);}
    
double call_forward_reaction_71(const double& temperature, const double& log_temperature)  { return arrhenius(double(244.00000000000006), double(2.5), double(152548640.0), temperature, log_temperature);}
    
double call_forward_reaction_72(const double& temperature, const double& log_temperature)  { return arrhenius(double(96400000000.00002), double(0.0), double(-2163128.0), temperature, log_temperature);}
    
double call_forward_reaction_73(const double& temperature, const double& log_temperature)  { return arrhenius(double(7.400000000000001e-05), double(4.21), double(4686080.0), temperature, log_temperature);}
    
double call_forward_reaction_74(const double& temperature, const double& log_temperature)  { return arrhenius(double(13300000000.000002), double(0.0), double(-2301200.0), temperature, log_temperature);}
    
double call_forward_reaction_75(const double& temperature, const double& log_temperature)  { return arrhenius(double(5.400000000000001), double(2.81), double(24526608.0), temperature, log_temperature);}
    
double call_forward_reaction_76(const double& temperature, const double& log_temperature)  { return arrhenius(double(5.400000000000001), double(2.81), double(24526608.0), temperature, log_temperature);}
    
double
call_forward_reaction_77(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(1.27e+30), double(-5.57), double(15974512.0), double(211000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_78(const double& temperature, const double& log_temperature)  { return arrhenius(double(53900000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_79(const double& temperature, const double& log_temperature)  { return arrhenius(double(23100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_80(const double& temperature, const double& log_temperature)  { return arrhenius(double(42.900000000000006), double(2.57), double(16727632.0), temperature, log_temperature);}
    

double
call_forward_reaction_81(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(70000000000000.016), double(-1.12), double(6778080.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(70000000000000.016), double(-1.12), double(6778080.0), temperature));
        double log_k2 = log_gen(arrhenius(double(117000000000000.02), double(-1.162), double(11568760.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(117000000000000.02), double(-1.162), double(11568760.0), temperature));
        double log_k2 = log_gen(arrhenius(double(14300000000000.002), double(-0.866), double(12970400.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(14300000000000.002), double(-0.866), double(12970400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(200000000000.00003), double(-0.312), double(13263280.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(200000000000.00003), double(-0.312), double(13263280.0), temperature));
        double log_k2 = log_gen(arrhenius(double(552000000.0000001), double(0.44), double(12049920.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(552000000.0000001), double(0.44), double(12049920.0), temperature));
        double log_k2 = log_gen(arrhenius(double(98100000.00000001), double(0.664), double(15869912.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return arrhenius(double(98100000.00000001), double(0.664), double(15869912.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_82(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(370000000.00000006), double(0.142), double(-2020872.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(370000000.00000006), double(0.142), double(-2020872.0), temperature));
        double log_k2 = log_gen(arrhenius(double(13500000000.000002), double(-0.272), double(5372256.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(13500000000.000002), double(-0.272), double(5372256.0), temperature));
        double log_k2 = log_gen(arrhenius(double(84200000000.00002), double(-0.473), double(10234064.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(84200000000.00002), double(-0.473), double(10234064.0), temperature));
        double log_k2 = log_gen(arrhenius(double(153000000000.00003), double(-0.51), double(15125160.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(153000000000.00003), double(-0.51), double(15125160.0), temperature));
        double log_k2 = log_gen(arrhenius(double(10000000000.000002), double(-0.14), double(17154400.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(10000000000.000002), double(-0.14), double(17154400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(18400000.000000004), double(0.68), double(16568640.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return arrhenius(double(18400000.000000004), double(0.68), double(16568640.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_83(const double& temperature, const double& log_temperature)  { return arrhenius(double(116.00000000000001), double(2.228), double(-12644048.0), temperature, log_temperature);}
    
double call_forward_reaction_84(const double& temperature, const double& log_temperature)  { return arrhenius(double(10400000000.000002), double(0.0), double(-2468560.0), temperature, log_temperature);}
    
double call_forward_reaction_85(const double& temperature, const double& log_temperature)  { return arrhenius(double(7550000000.000001), double(0.0), double(118394648.0), temperature, log_temperature);}
    
double call_forward_reaction_86(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.0686), double(2.86), double(40869312.0), temperature, log_temperature);}
    
double call_forward_reaction_87(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_88(const double& temperature, const double& log_temperature)  { return arrhenius(double(72300000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_89(const double& temperature, const double& log_temperature)  { return arrhenius(double(14000000000.000002), double(0.0), double(-2079448.0), temperature, log_temperature);}
    
double
call_forward_reaction_90(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(1.7700000000000004e+44), double(-9.67), double(26024480.0), double(21200000000000.004), double(-0.97), double(2594080.0), double(0.5325), double(1038.0), double(4970.0), double(151.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    

double
call_forward_reaction_91(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(7000000000.000001), double(0.072), double(46588840.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(7000000000.000001), double(0.072), double(46588840.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2350000000.0000005), double(0.233), double(50208000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(2350000000.0000005), double(0.233), double(50208000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(131000000.00000001), double(0.604), double(51044800.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(131000000.00000001), double(0.604), double(51044800.0), temperature));
        double log_k2 = log_gen(arrhenius(double(533000.0000000001), double(1.294), double(50208000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(533000.0000000001), double(1.294), double(50208000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(544.0), double(2.19), double(47697600.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(544.0), double(2.19), double(47697600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(0.10000000000000002), double(3.177), double(43932000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return arrhenius(double(0.10000000000000002), double(3.177), double(43932000.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_92(const double& temperature, const double& log_temperature)  { return arrhenius(double(26200000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_93(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.031900000000000005), double(3.36), double(18033040.0), temperature, log_temperature);}
    
double
call_forward_reaction_94(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(60200000000000.01), double(-0.5468), double(75412416.0), double(11300000000.0), double(1.21), double(100729800.0), double(0.341), double(1000.0), double(2339.0), double(28.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_95(const double& temperature, const double& log_temperature)  { return arrhenius(double(37900000000.00001), double(0.0), double(2493664.0), temperature, log_temperature);}
    
double call_forward_reaction_96(const double& temperature, const double& log_temperature)  { return arrhenius(double(388000000000.00006), double(-0.264), double(-108784.0), temperature, log_temperature);}
    
double call_forward_reaction_97(const double& temperature, const double& log_temperature)  { return arrhenius(double(197000000.00000003), double(0.414), double(1016712.0), temperature, log_temperature);}
    
double call_forward_reaction_98(const double& temperature, const double& log_temperature)  { return arrhenius(double(3780000000.0000005), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_99(const double& temperature, const double& log_temperature)  { return arrhenius(double(18100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_100(const double& temperature, const double& log_temperature)  { return arrhenius(double(63200000.00000001), double(0.0), double(10890952.0), temperature, log_temperature);}
    
double call_forward_reaction_101(const double& temperature, const double& log_temperature)  { return arrhenius(double(24000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_102(const double& temperature, const double& log_temperature)  { return arrhenius(double(6000000000.000001), double(0.0), double(46024000.0), temperature, log_temperature);}
    
double call_forward_reaction_103(const double& temperature, const double& log_temperature)  { return arrhenius(double(614.0000000000001), double(2.5), double(40116192.0), temperature, log_temperature);}
    
double call_forward_reaction_104(const double& temperature, const double& log_temperature)  { return arrhenius(double(693000.0000000001), double(1.56), double(35501240.0), temperature, log_temperature);}
    
double call_forward_reaction_105(const double& temperature, const double& log_temperature)  { return arrhenius(double(1000.0000000000002), double(2.182), double(10234064.0), temperature, log_temperature);}
    
double call_forward_reaction_106(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(-1661048.0), temperature, log_temperature);}
    
double call_forward_reaction_107(const double& temperature, const double& log_temperature)  { return arrhenius(double(2460.0000000000005), double(2.0), double(34601680.0), temperature, log_temperature);}
    
double call_forward_reaction_108(const double& temperature, const double& log_temperature)  { return arrhenius(double(18700000000.000004), double(0.0), double(-2079448.0), temperature, log_temperature);}
    
double call_forward_reaction_109(const double& temperature, const double& log_temperature)  { return arrhenius(double(13000000000.000002), double(0.0), double(2510400.0), temperature, log_temperature);}
    
double
call_forward_reaction_110(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(3.750000000000001e+27), double(-4.8), double(7949600.0), double(22500000000.000004), double(0.32), double(0.0), double(0.646), double(1315.0), double(5566.0), double(13.2), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_111(const double& temperature, const double& log_temperature)  { return arrhenius(double(54000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_112(const double& temperature, const double& log_temperature)  { return arrhenius(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_113(const double& temperature, const double& log_temperature)  { return arrhenius(double(2110.0000000000005), double(2.32), double(3690288.0), temperature, log_temperature);}
    
double call_forward_reaction_114(const double& temperature, const double& log_temperature)  { return arrhenius(double(163000000000.00003), double(-0.35), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_115(const double& temperature, const double& log_temperature)  { return arrhenius(double(132000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_116(const double& temperature, const double& log_temperature)  { return arrhenius(double(173000000000.00003), double(-0.112), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_117(const double& temperature, const double& log_temperature)  { return arrhenius(double(29500000000.000004), double(0.0), double(4656792.0), temperature, log_temperature);}
    
double call_forward_reaction_118(const double& temperature, const double& log_temperature)  { return arrhenius(double(1630000000.0000002), double(0.0), double(3573136.0), temperature, log_temperature);}
    
double call_forward_reaction_119(const double& temperature, const double& log_temperature)  { return arrhenius(double(18800000000000.004), double(-0.59), double(606680.0), temperature, log_temperature);}
    
double call_forward_reaction_120(const double& temperature, const double& log_temperature)  { return arrhenius(double(37900000000.00001), double(0.13), double(-899560.0), temperature, log_temperature);}
    
double call_forward_reaction_121(const double& temperature, const double& log_temperature)  { return arrhenius(double(50000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_122(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_123(const double& temperature, const double& log_temperature)  { return arrhenius(double(10000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double
call_forward_reaction_124(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_lindemann(double(2450000000000.0005), double(-0.64), double(207944800.0), double(800000000000000.0), double(-0.52), double(212338000.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
call_forward_reaction_125(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(3.6300000000000005e+21), double(-3.38), double(3543848.0), double(554000.0000000001), double(1.64), double(8769664.0), double(0.215), double(1043.0), double(2341.0), double(10.7), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_126(const double& temperature, const double& log_temperature)  { return arrhenius(double(939000.0000000001), double(1.4), double(9229904.0), temperature, log_temperature);}
    
double call_forward_reaction_127(const double& temperature, const double& log_temperature)  { return arrhenius(double(235000.00000000003), double(1.4), double(9229904.0), temperature, log_temperature);}
    

double
call_forward_reaction_128(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 7.837208997382573) { return arrhenius(double(15.200000000000001), double(2.28), double(-1221728.0), temperature); }
        else if (7.837208997382573 <= log_pressure && log_pressure < 9.223503358502464)
        {
        double log_k1 = log_gen(arrhenius(double(15.200000000000001), double(2.28), double(-1221728.0), temperature));
        double log_k2 = log_gen(arrhenius(double(302.00000000000006), double(1.92), double(2502032.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  7.837208997382573, 9.223503358502464);
        }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(302.00000000000006), double(1.92), double(2502032.0), temperature));
        double log_k2 = log_gen(arrhenius(double(7530.000000000001), double(1.55), double(8811504.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(7530.000000000001), double(1.55), double(8811504.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5100.000000000001), double(1.65), double(14225600.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(5100.000000000001), double(1.65), double(14225600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(14.600000000000001), double(2.45), double(18731768.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return arrhenius(double(14.600000000000001), double(2.45), double(18731768.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_129(const double& temperature, const double& log_temperature)  { return arrhenius(double(2630.0000000000005), double(2.14), double(71379040.0), temperature, log_temperature);}
    

double
call_forward_reaction_130(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 7.837208997382573) { return arrhenius(double(4370.000000000001), double(1.4), double(949768.0), temperature); }
        else if (7.837208997382573 <= log_pressure && log_pressure < 9.223503358502464)
        {
        double log_k1 = log_gen(arrhenius(double(4370.000000000001), double(1.4), double(949768.0), temperature));
        double log_k2 = log_gen(arrhenius(double(76500.00000000001), double(1.05), double(4665160.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  7.837208997382573, 9.223503358502464);
        }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(76500.00000000001), double(1.05), double(4665160.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1280000.0000000002), double(0.73), double(10794720.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(1280000.0000000002), double(0.73), double(10794720.0), temperature));
        double log_k2 = log_gen(arrhenius(double(431000.00000000006), double(0.92), double(15631424.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(431000.00000000006), double(0.92), double(15631424.0), temperature));
        double log_k2 = log_gen(arrhenius(double(825.0000000000002), double(1.77), double(19664800.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return arrhenius(double(825.0000000000002), double(1.77), double(19664800.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_131(const double& temperature, const double& log_temperature)  { return arrhenius(double(7750.000000000001), double(1.605), double(64015200.0), temperature, log_temperature);}
    
double call_forward_reaction_132(const double& temperature, const double& log_temperature)  { return arrhenius(double(23200.000000000004), double(1.605), double(64015200.0), temperature, log_temperature);}
    
double call_forward_reaction_133(const double& temperature, const double& log_temperature)  { return arrhenius(double(50000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_134(const double& temperature, const double& log_temperature)  { return arrhenius(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_135(const double& temperature, const double& log_temperature)  { return arrhenius(double(10000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double
call_forward_reaction_136(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(2.6900000000000006e+27), double(-5.11), double(29685480.0), double(810000000.0000001), double(0.5), double(18869840.0), double(0.591), double(1226.0), double(5185.0), double(275.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_137(const double& temperature, const double& log_temperature)  { return arrhenius(double(42000.00000000001), double(1.9), double(49580400.0), temperature, log_temperature);}
    
double call_forward_reaction_138(const double& temperature, const double& log_temperature)  { return arrhenius(double(777000.0000000001), double(1.45), double(11631520.0), temperature, log_temperature);}
    
double call_forward_reaction_139(const double& temperature, const double& log_temperature)  { return arrhenius(double(10000000000.000002), double(0.0), double(43095200.0), temperature, log_temperature);}
    
double call_forward_reaction_140(const double& temperature, const double& log_temperature)  { return arrhenius(double(1080000000.0000002), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double call_forward_reaction_141(const double& temperature, const double& log_temperature)  { return arrhenius(double(361000000.00000006), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double call_forward_reaction_142(const double& temperature, const double& log_temperature)  { return arrhenius(double(361000000.00000006), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double call_forward_reaction_143(const double& temperature, const double& log_temperature)  { return arrhenius(double(11.200000000000001), double(2.74), double(9288480.0), temperature, log_temperature);}
    
double call_forward_reaction_144(const double& temperature, const double& log_temperature)  { return arrhenius(double(680000000.0000001), double(0.0), double(-4238392.0), temperature, log_temperature);}
    
double call_forward_reaction_145(const double& temperature, const double& log_temperature)  { return arrhenius(double(1010000000.0000001), double(0.0), double(-4238392.0), temperature, log_temperature);}
    
double call_forward_reaction_146(const double& temperature, const double& log_temperature)  { return arrhenius(double(145000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double
call_forward_reaction_147(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(1.4000000000000004e+24), double(-3.86), double(13890880.0), double(38800000000.00001), double(0.2), double(0.0), double(0.782), double(2663.0), double(6095.0), double(207.49999999999997), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_148(const double& temperature, const double& log_temperature)  { return arrhenius(double(1210000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_149(const double& temperature, const double& log_temperature)  { return arrhenius(double(42200000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_150(const double& temperature, const double& log_temperature)  { return arrhenius(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_151(const double& temperature, const double& log_temperature)  { return arrhenius(double(21000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_152(const double& temperature, const double& log_temperature)  { return arrhenius(double(16700000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_153(const double& temperature, const double& log_temperature)  { return arrhenius(double(1140000000.0000002), double(0.0), double(5857599.999999999), temperature, log_temperature);}
    
double call_forward_reaction_154(const double& temperature, const double& log_temperature)  { return arrhenius(double(41800000000.00001), double(0.0), double(12008080.0), temperature, log_temperature);}
    
double call_forward_reaction_155(const double& temperature, const double& log_temperature)  { return arrhenius(double(286000000.00000006), double(0.0), double(4686080.0), temperature, log_temperature);}
    
double call_forward_reaction_156(const double& temperature, const double& log_temperature)  { return arrhenius(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    

double
call_forward_reaction_157(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(170000000.00000003), double(0.32), double(1506240.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(170000000.00000003), double(0.32), double(1506240.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1240000000.0000002), double(0.077), double(4267680.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(1240000000.0000002), double(0.077), double(4267680.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature));
        double log_k2 = log_gen(arrhenius(double(10800000000.000002), double(-0.16), double(10292640.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(10800000000.000002), double(-0.16), double(10292640.0), temperature));
        double log_k2 = log_gen(arrhenius(double(8600000000.000002), double(-0.1), double(13974560.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(8600000000.000002), double(-0.1), double(13974560.0), temperature));
        double log_k2 = log_gen(arrhenius(double(332000000.00000006), double(0.34), double(15690000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(332000000.00000006), double(0.34), double(15690000.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_158(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(4.340000000000001), double(2.3), double(2468560.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(4.340000000000001), double(2.3), double(2468560.0), temperature));
        double log_k2 = log_gen(arrhenius(double(56.00000000000001), double(1.99), double(5698608.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(56.00000000000001), double(1.99), double(5698608.0), temperature));
        double log_k2 = log_gen(arrhenius(double(94.10000000000002), double(1.94), double(7196480.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(94.10000000000002), double(1.94), double(7196480.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1130.0000000000002), double(1.645), double(11798880.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(1130.0000000000002), double(1.645), double(11798880.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5000.000000000001), double(1.49), double(16631400.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(5000.000000000001), double(1.49), double(16631400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1570.0000000000002), double(1.67), double(20166880.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(1570.0000000000002), double(1.67), double(20166880.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_159(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(46700000000000.01), double(-1.55), double(4184000.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(46700000000000.01), double(-1.55), double(4184000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(182000000000000.03), double(-1.714), double(5819944.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(182000000000000.03), double(-1.714), double(5819944.0), temperature));
        double log_k2 = log_gen(arrhenius(double(471000000000000.06), double(-1.825), double(7907760.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(471000000000000.06), double(-1.825), double(7907760.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature));
        double log_k2 = log_gen(arrhenius(double(181000000000000.03), double(-1.64), double(14058240.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(181000000000000.03), double(-1.64), double(14058240.0), temperature));
        double log_k2 = log_gen(arrhenius(double(686000000000.0001), double(-0.92), double(13807200.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(686000000000.0001), double(-0.92), double(13807200.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_160(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(109000000000000.02), double(-1.55), double(4184000.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(109000000000000.02), double(-1.55), double(4184000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(425000000000000.06), double(-1.714), double(5819944.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(425000000000000.06), double(-1.714), double(5819944.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature));
        double log_k2 = log_gen(arrhenius(double(422000000000000.06), double(-1.64), double(14058240.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(422000000000000.06), double(-1.64), double(14058240.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1600000000000.0002), double(-0.92), double(13807200.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(1600000000000.0002), double(-0.92), double(13807200.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_161(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(6560000000.000001), double(-0.47), double(188280.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(6560000000.000001), double(-0.47), double(188280.0), temperature));
        double log_k2 = log_gen(arrhenius(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature));
        double log_k2 = log_gen(arrhenius(double(63200000000.00001), double(-0.73), double(4037560.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(63200000000.00001), double(-0.73), double(4037560.0), temperature));
        double log_k2 = log_gen(arrhenius(double(234000000000.00003), double(-0.88), double(8016544.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(234000000000.00003), double(-0.88), double(8016544.0), temperature));
        double log_k2 = log_gen(arrhenius(double(53600000000.00001), double(-0.65), double(10878400.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(53600000000.00001), double(-0.65), double(10878400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(662000000.0000001), double(-0.074), double(11882560.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(662000000.0000001), double(-0.074), double(11882560.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_162(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(11600000.000000002), double(0.28), double(3368120.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(11600000.000000002), double(0.28), double(3368120.0), temperature));
        double log_k2 = log_gen(arrhenius(double(174000000.00000003), double(-0.05), double(7075144.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(174000000.00000003), double(-0.05), double(7075144.0), temperature));
        double log_k2 = log_gen(arrhenius(double(940000000.0000001), double(-0.24), double(10267536.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(940000000.0000001), double(-0.24), double(10267536.0), temperature));
        double log_k2 = log_gen(arrhenius(double(17800000000.000004), double(-0.58), double(16213000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(17800000000.000004), double(-0.58), double(16213000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(88000000000.00002), double(-0.74), double(22593600.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(88000000000.00002), double(-0.74), double(22593600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(63400000000.00001), double(-0.646), double(28744080.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(63400000000.00001), double(-0.646), double(28744080.0), temperature); }
        return rate;
}
    
    

double
call_forward_reaction_163(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(3900000.0000000005), double(0.28), double(3368120.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(3900000.0000000005), double(0.28), double(3368120.0), temperature));
        double log_k2 = log_gen(arrhenius(double(58000000.00000001), double(-0.05), double(7075144.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(58000000.00000001), double(-0.05), double(7075144.0), temperature));
        double log_k2 = log_gen(arrhenius(double(312000000.00000006), double(-0.24), double(10267536.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(312000000.00000006), double(-0.24), double(10267536.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5900000000.000001), double(-0.58), double(16213000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(5900000000.000001), double(-0.58), double(16213000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(29000000000.000004), double(-0.74), double(22593600.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(29000000000.000004), double(-0.74), double(22593600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(21100000000.000004), double(-0.646), double(28744080.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return arrhenius(double(21100000000.000004), double(-0.646), double(28744080.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_164(const double& temperature, const double& log_temperature)  { return arrhenius(double(9000000000.000002), double(0.0), double(-3200760.0), temperature, log_temperature);}
    
double
call_forward_reaction_165(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(5650000000000001.0), double(-0.97), double(61023640.0), double(1070000000000.0), double(0.63), double(70688680.0), double(0.36), double(49999.99999999999), double(16935.0), double(122.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_166(const double& temperature, const double& log_temperature)  { return arrhenius(double(454000000000.00006), double(0.0), double(8200640.0), temperature, log_temperature);}
    
double call_forward_reaction_167(const double& temperature, const double& log_temperature)  { return arrhenius(double(4930000000.000001), double(0.0), double(15648160.0), temperature, log_temperature);}
    
double call_forward_reaction_168(const double& temperature, const double& log_temperature)  { return arrhenius(double(52700000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_169(const double& temperature, const double& log_temperature)  { return arrhenius(double(158000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_170(const double& temperature, const double& log_temperature)  { return arrhenius(double(12000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_171(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return third_body(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature, mixture_concentration);}
    
double call_forward_reaction_172(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_173(const double& temperature, const double& log_temperature)  { return arrhenius(double(23000000.000000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_174(const double& temperature, const double& log_temperature)  { return arrhenius(double(6080000000.000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double
call_forward_reaction_175(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(131000000000000.02), double(0.0), double(314117984.0), double(2940000000000000.0), double(0.0), double(360773768.0), double(0.25), double(90000.0), double(90000.0), double(50.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
call_forward_reaction_176(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(2.900000000000001e+33), double(-6.642), double(24137496.0), double(1370000.0000000002), double(1.463), double(5669320.0), double(1.569), double(299.0), double(152.4), double(-9147.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_177(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.23500000000000004), double(3.62), double(47153680.0), temperature, log_temperature);}
    
double call_forward_reaction_178(const double& temperature, const double& log_temperature)  { return arrhenius(double(8130.000000000001), double(1.88), double(765672.0), temperature, log_temperature);}
    
double call_forward_reaction_179(const double& temperature, const double& log_temperature)  { return arrhenius(double(3700000.0000000005), double(0.907), double(3510376.0), temperature, log_temperature);}
    
double call_forward_reaction_180(const double& temperature, const double& log_temperature)  { return arrhenius(double(14.000000000000002), double(2.62), double(1920456.0), temperature, log_temperature);}
    
double call_forward_reaction_181(const double& temperature, const double& log_temperature)  { return arrhenius(double(71000000000.00002), double(0.0), double(251081840.0), temperature, log_temperature);}
    
double call_forward_reaction_182(const double& temperature, const double& log_temperature)  { return arrhenius(double(22.300000000000004), double(2.745), double(9271744.0), temperature, log_temperature);}
    

double
call_forward_reaction_183(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(0.555), double(2.36), double(-757304.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(0.555), double(2.36), double(-757304.0), temperature));
        double log_k2 = log_gen(arrhenius(double(178.00000000000003), double(1.68), double(8619040.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(178.00000000000003), double(1.68), double(8619040.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2370000.0000000005), double(0.56), double(25133288.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(2370000.0000000005), double(0.56), double(25133288.0), temperature));
        double log_k2 = log_gen(arrhenius(double(27600000000.000004), double(-0.5), double(47931904.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return arrhenius(double(27600000000.000004), double(-0.5), double(47931904.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_184(const double& temperature, const double& log_temperature)  { return arrhenius(double(3790000000.0000005), double(0.0), double(74747160.0), temperature, log_temperature);}
    
double call_forward_reaction_185(const double& temperature, const double& log_temperature)  { return arrhenius(double(60200.00000000001), double(1.56), double(69579920.0), temperature, log_temperature);}
    
double
call_forward_reaction_186(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return falloff_troe(double(1.9900000000000005e+35), double(-7.08), double(27970040.0), double(521000000000000.06), double(-0.99), double(6610720.0), double(0.842), double(2219.0), double(6882.0), double(125.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double call_forward_reaction_187(const double& temperature, const double& log_temperature)  { return arrhenius(double(1810000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_188(const double& temperature, const double& log_temperature)  { return arrhenius(double(73700000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_189(const double& temperature, const double& log_temperature)  { return arrhenius(double(58900000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_190(const double& temperature, const double& log_temperature)  { return arrhenius(double(15000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_191(const double& temperature, const double& log_temperature)  { return arrhenius(double(1600000000000.0002), double(-0.609), double(-317984.0), temperature, log_temperature);}
    
double call_forward_reaction_192(const double& temperature, const double& log_temperature)  { return arrhenius(double(14100.000000000004), double(1.09), double(-8263400.0), temperature, log_temperature);}
    
double call_forward_reaction_193(const double& temperature, const double& log_temperature)  { return arrhenius(double(31000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_194(const double& temperature, const double& log_temperature)  { return arrhenius(double(900000000.0000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_195(const double& temperature, const double& log_temperature)  { return arrhenius(double(5.500000000000001), double(2.81), double(24518240.0), temperature, log_temperature);}
    
double call_forward_reaction_196(const double& temperature, const double& log_temperature)  { return arrhenius(double(115000.00000000001), double(1.9), double(31505520.0), temperature, log_temperature);}
    
double call_forward_reaction_197(const double& temperature, const double& log_temperature)  { return arrhenius(double(181.00000000000003), double(2.8), double(24279752.0), temperature, log_temperature);}
    
double call_forward_reaction_198(const double& temperature, const double& log_temperature)  { return arrhenius(double(729.0000000000001), double(2.5), double(205685440.0), temperature, log_temperature);}
    
double call_forward_reaction_199(const double& temperature, const double& log_temperature)  { return arrhenius(double(9150.000000000002), double(2.0), double(4158896.0), temperature, log_temperature);}
    
double call_forward_reaction_200(const double& temperature, const double& log_temperature)  { return arrhenius(double(108000000000.00002), double(0.0), double(-1096208.0), temperature, log_temperature);}
    
double call_forward_reaction_201(const double& temperature, const double& log_temperature)  { return arrhenius(double(33000000000.000004), double(0.0), double(-2761440.0), temperature, log_temperature);}
    
double call_forward_reaction_202(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.0005500000000000001), double(4.0), double(34672808.0), temperature, log_temperature);}
    
double call_forward_reaction_203(const double& temperature, const double& log_temperature)  { return arrhenius(double(24000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_204(const double& temperature, const double& log_temperature)  { return arrhenius(double(12000000000.000002), double(0.0), double(27698080.0), temperature, log_temperature);}
    
double call_forward_reaction_205(const double& temperature, const double& log_temperature)  { return arrhenius(double(184500000000.00003), double(-0.39), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_206(const double& temperature, const double& log_temperature)  { return arrhenius(double(10000000.000000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_207(const double& temperature, const double& log_temperature)  { return arrhenius(double(139000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_208(const double& temperature, const double& log_temperature)  { return arrhenius(double(170.00000000000003), double(1.7), double(6276000.0), temperature, log_temperature);}
    
double call_forward_reaction_209(const double& temperature, const double& log_temperature)  { return arrhenius(double(54500000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_210(const double& temperature, const double& log_temperature)  { return arrhenius(double(34500000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_211(const double& temperature, const double& log_temperature)  { return arrhenius(double(43800000000.00001), double(0.0), double(11439056.0), temperature, log_temperature);}
    
double call_forward_reaction_212(const double& temperature, const double& log_temperature)  { return arrhenius(double(2000000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_213(const double& temperature, const double& log_temperature)  { return arrhenius(double(2000000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_214(const double& temperature, const double& log_temperature)  { return arrhenius(double(25000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_215(const double& temperature, const double& log_temperature)  { return arrhenius(double(25000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_216(const double& temperature, const double& log_temperature)  { return arrhenius(double(18100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    

double
call_forward_reaction_217(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 8.294633844421448) { return arrhenius(double(3.630000000000001e+33), double(-7.36), double(25267176.0), temperature); }
        else if (8.294633844421448 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(3.630000000000001e+33), double(-7.36), double(25267176.0), temperature));
        double log_k2 = log_gen(arrhenius(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  8.294633844421448, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1300000000000000.2), double(-1.25), double(6242528.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return arrhenius(double(1300000000000000.2), double(-1.25), double(6242528.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_218(const double& temperature, const double& log_temperature)  { return arrhenius(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double call_forward_reaction_219(const double& temperature, const double& log_temperature)  { return arrhenius(double(120000000000.00002), double(0.0), double(41074328.0), temperature, log_temperature);}
    

double
call_forward_reaction_220(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 8.294633844421448) { return arrhenius(double(38900000.00000001), double(0.898), double(17212976.0), temperature); }
        else if (8.294633844421448 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(38900000.00000001), double(0.898), double(17212976.0), temperature));
        double log_k2 = log_gen(arrhenius(double(3460000000.0000005), double(0.442), double(22857192.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  8.294633844421448, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(3460000000.0000005), double(0.442), double(22857192.0), temperature));
        double log_k2 = log_gen(arrhenius(double(172000000000.00003), double(-0.01), double(29848656.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(172000000000.00003), double(-0.01), double(29848656.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1600000000000.0002), double(-0.24), double(37881936.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return arrhenius(double(1600000000000.0002), double(-0.24), double(37881936.0), temperature); }
        return rate;
}
    
    
double call_forward_reaction_221(const double& temperature, const double& log_temperature)  { return arrhenius(double(765000.0000000001), double(1.5), double(35982400.0), temperature, log_temperature);}
    
double call_forward_reaction_222(const double& temperature, const double& log_temperature)  { return arrhenius(double(7300000000.000001), double(0.0), double(9414000.0), temperature, log_temperature);}
    
double call_forward_reaction_223(const double& temperature, const double& log_temperature)  { return arrhenius(double(10000000000.000002), double(0.0), double(9414000.0), temperature, log_temperature);}
    
double call_forward_reaction_224(const double& temperature, const double& log_temperature)  { return arrhenius(double(1000.0000000000002), double(2.0), double(418400.0), temperature, log_temperature);}
    
double call_forward_reaction_225(const double& temperature, const double& log_temperature)  { return arrhenius(double(1560000000.0000002), double(0.0), double(-1661048.0), temperature, log_temperature);}
    
double call_forward_reaction_226(const double& temperature, const double& log_temperature)  { return arrhenius(double(15000.000000000002), double(1.6), double(64015200.0), temperature, log_temperature);}
    
double call_forward_reaction_227(const double& temperature, const double& log_temperature)  { return arrhenius(double(0.06580000000000001), double(3.24), double(32472024.0), temperature, log_temperature);}
    
double call_forward_reaction_228(const double& temperature, const double& log_temperature)  { return arrhenius(double(3600.0000000000005), double(2.0), double(-4987328.0), temperature, log_temperature);}
    
double call_forward_reaction_229(const double& temperature, const double& log_temperature)  { return arrhenius(double(3.0800000000000005), double(2.72), double(13146128.0), temperature, log_temperature);}
    

double
call_forward_reaction_230(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return arrhenius(double(53000000000.00001), double(-0.09), double(4698632.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(53000000000.00001), double(-0.09), double(4698632.0), temperature));
        double log_k2 = log_gen(arrhenius(double(15000000000.000002), double(0.125), double(12552000.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(15000000000.000002), double(0.125), double(12552000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5170000.000000001), double(1.19), double(15815520.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(5170000.000000001), double(1.19), double(15815520.0), temperature));
        double log_k2 = log_gen(arrhenius(double(450.00000000000006), double(2.43), double(20041360.0), temperature)); 
        return pressure_dependent_arrhenius(log_k1, log_k2, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return arrhenius(double(450.00000000000006), double(2.43), double(20041360.0), temperature); }
        return rate;
}
    
    
double dcall_forward_reaction_0_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(104000000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(104000000000.00002), double(0.0), double(64057040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3820000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3820000000.0000005), double(0.0), double(33262800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(879000000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(879000000000.0001), double(0.0), double(80249120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(216000.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(216000.00000000003), double(1.51), double(14380408.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(33.50000000000001), double(2.42), double(-8066752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_5_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double dcall_forward_reaction_5_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species dcall_forward_reaction_5_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.9), double(3.8), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(4.580000000000001e+16), double(-1.4), double(436767760.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_6_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double dcall_forward_reaction_6_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species dcall_forward_reaction_6_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.9), double(3.8), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(6160000000.000001), double(-0.5), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_7_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double dcall_forward_reaction_7_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species dcall_forward_reaction_7_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.9), double(3.8), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(4710000000000.001), double(-1.0), double(0.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_8_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[3] + (double(0.0)-double(1))*species[5] + (double(7.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22] + (double(2.0)-double(1))*species[29]);}
    
double dcall_forward_reaction_8_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[3] + (double(0.0)-double(1))*species[5] + (double(7.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22] + (double(2.0)-double(1))*species[29]);}
    
Species dcall_forward_reaction_8_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(3.0), double(1.0), double(1.0), double(1.5), double(1.0), double(0.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(7.0), double(1.9), double(3.8), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0)};return scale_gen(dthird_body_dmixture_concentration(double(6.060000000000001e+24), double(-3.322), double(505427200.0), temperature, log_temperature, mixture_concentration + (double(3.0)-double(1))*species[0] + (double(1.5)-double(1))*species[3] + (double(0.0)-double(1))*species[5] + (double(7.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22] + (double(2.0)-double(1))*species[29]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_9_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_9_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_9_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),double(0),double(0),double(0),double(0),1.0*dthird_body_dmixture_concentration(double(1.0100000000000001e+23), double(-2.44), double(502916800.0), temperature, log_temperature, mixture_concentration),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0)};}
    
double
dcall_forward_reaction_10_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(637000000000000.1), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[3] + (double(14.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_10_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(637000000000000.1), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[3] + (double(14.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_10_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(0.78), double(1.0), double(14.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.9), double(3.8), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(637000000000000.1), double(-1.72), double(2196600.0), double(4650000000.000001), double(0.44), double(0.0), double(0.5), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(0.78)-double(1))*species[3] + (double(14.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_11_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3680.0000000000005), double(2.087), double(-6087720.0), temperature, log_temperature);}
    
double dcall_forward_reaction_11_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3680.0000000000005), double(2.087), double(-6087720.0), temperature, log_temperature);}
    
double dcall_forward_reaction_12_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(70800000000.00002), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_12_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(70800000000.00002), double(0.0), double(1255200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_13_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1450000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_13_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1450000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_14_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(16300000000.000002), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_14_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(16300000000.000002), double(0.0), double(-1861880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_15_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7000000000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double dcall_forward_reaction_15_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7000000000.000001), double(0.0), double(-4573112.0), temperature, log_temperature);}
    
double dcall_forward_reaction_16_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_16_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(450000000000.00006), double(0.0), double(45731120.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_17_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_lindemann_dtemperature(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_17_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_lindemann_dlog_temperature(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_17_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.5), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.9), double(3.8), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_lindemann_dmixture_concentration(double(1400000000000000.2), double(-2.1), double(23012000.0), double(10600000000.000002), double(-0.308), double(29049512.0), temperature, log_temperature, mixture_concentration + (double(2.5)-double(1))*species[0] + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.9)-double(1))*species[12] + (double(3.8)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_18_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2530000000.0000005), double(0.0), double(199576800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_18_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2530000000.0000005), double(0.0), double(199576800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_19_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(70.5), double(2.053), double(-1489504.0), temperature, log_temperature);}
    
double dcall_forward_reaction_19_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(70.5), double(2.053), double(-1489504.0), temperature, log_temperature);}
    
double dcall_forward_reaction_20_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(5760000000.000001), double(-0.664), double(1389088.0), temperature, log_temperature);}
    
double dcall_forward_reaction_20_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(5760000000.000001), double(-0.664), double(1389088.0), temperature, log_temperature);}
    
double dcall_forward_reaction_21_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(157.00000000000003), double(2.18), double(75077696.0), temperature, log_temperature);}
    
double dcall_forward_reaction_21_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(157.00000000000003), double(2.18), double(75077696.0), temperature, log_temperature);}
    
double dcall_forward_reaction_22_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(480000000000000.06), double(-1.2), double(74199056.0), temperature, log_temperature, mixture_concentration + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double dcall_forward_reaction_22_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(480000000000000.06), double(-1.2), double(74199056.0), temperature, log_temperature, mixture_concentration + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species dcall_forward_reaction_22_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(12.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};return scale_gen(dthird_body_dmixture_concentration(double(480000000000000.06), double(-1.2), double(74199056.0), temperature, log_temperature, mixture_concentration + (double(12.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]),dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_23_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(90300000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_23_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(90300000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_24_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_24_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_25_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_25_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_26_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(108000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_26_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(108000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_27_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(6920.000000000001), double(1.9), double(-5732080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_27_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(6920.000000000001), double(1.9), double(-5732080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_28_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_28_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_29_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(57000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_29_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(57000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_30_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_30_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_31_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(175000000000.00003), double(0.0), double(13890880.0), temperature, log_temperature);}
    
double dcall_forward_reaction_31_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(175000000000.00003), double(0.0), double(13890880.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_32_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(2.4300000000000004e+16), double(-1.6), double(0.0), double(51300000000.00001), double(0.15), double(0.0), double(0.514), double(22850.0), double(10350.0), double(152.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_32_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(2.4300000000000004e+16), double(-1.6), double(0.0), double(51300000000.00001), double(0.15), double(0.0), double(0.514), double(22850.0), double(10350.0), double(152.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_32_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(2.4300000000000004e+16), double(-1.6), double(0.0), double(51300000000.00001), double(0.15), double(0.0), double(0.514), double(22850.0), double(10350.0), double(152.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_33_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3430000000.0000005), double(0.0), double(-3698656.0), temperature, log_temperature);}
    
double dcall_forward_reaction_33_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3430000000.0000005), double(0.0), double(-3698656.0), temperature, log_temperature);}
    
double dcall_forward_reaction_34_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(184000.00000000003), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_34_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(184000.00000000003), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_35_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(277000.00000000006), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_35_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(277000.00000000006), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_36_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(184000.00000000003), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_36_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(184000.00000000003), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_37_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(277000.00000000006), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_37_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(277000.00000000006), double(1.43), double(5020800.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_38_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(3.2600000000000005e+18), double(-2.5), double(0.0), double(1020000000000.0001), double(-0.4), double(0.0), double(0.4), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_38_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(3.2600000000000005e+18), double(-2.5), double(0.0), double(1020000000000.0001), double(-0.4), double(0.0), double(0.4), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_38_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(3.2600000000000005e+18), double(-2.5), double(0.0), double(1020000000000.0001), double(-0.4), double(0.0), double(0.4), double(90000.0), double(90000.0), double(30.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_39_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(63800.000000000015), double(1.51), double(-2991560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_39_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(63800.000000000015), double(1.51), double(-2991560.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_40_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(1.3900000000000004e+28), double(-5.04), double(30961600.0), double(21300000000.000004), double(0.32), double(0.0), double(0.405), double(2811.0), double(9908.0), double(258.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_40_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(1.3900000000000004e+28), double(-5.04), double(30961600.0), double(21300000000.000004), double(0.32), double(0.0), double(0.405), double(2811.0), double(9908.0), double(258.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_40_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(1.3900000000000004e+28), double(-5.04), double(30961600.0), double(21300000000.000004), double(0.32), double(0.0), double(0.405), double(2811.0), double(9908.0), double(258.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_41_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(80000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_41_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(80000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_42_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(28600000000.000004), double(0.12), double(-677808.0), temperature, log_temperature);}
    
double dcall_forward_reaction_42_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(28600000000.000004), double(0.12), double(-677808.0), temperature, log_temperature);}
    
double dcall_forward_reaction_43_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(863.0000000000001), double(2.02), double(28350784.0), temperature, log_temperature);}
    
double dcall_forward_reaction_43_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(863.0000000000001), double(2.02), double(28350784.0), temperature, log_temperature);}
    
double dcall_forward_reaction_44_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_44_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_45_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(441.00000000000006), double(2.3), double(30756584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_45_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(441.00000000000006), double(2.3), double(30756584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_46_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2790000000.0000005), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_46_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2790000000.0000005), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_47_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2010000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_47_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2010000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_48_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1570000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_48_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1570000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_49_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1830000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_49_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1830000000.0000002), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_50_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(520000000.00000006), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_50_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(520000000.00000006), double(0.0), double(4184000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_51_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(40000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_51_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(40000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_52_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(200000000000.00003), double(0.0), double(45977976.0), temperature, log_temperature);}
    
double dcall_forward_reaction_52_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(200000000000.00003), double(0.0), double(45977976.0), temperature, log_temperature);}
    
double dcall_forward_reaction_53_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1600000000000.0002), double(0.0), double(49973696.0), temperature, log_temperature);}
    
double dcall_forward_reaction_53_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1600000000000.0002), double(0.0), double(49973696.0), temperature, log_temperature);}
    
double dcall_forward_reaction_54_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(12000000000.000002), double(0.0), double(1970664.0), temperature, log_temperature);}
    
double dcall_forward_reaction_54_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(12000000000.000002), double(0.0), double(1970664.0), temperature, log_temperature);}
    
double dcall_forward_reaction_55_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_55_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_56_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_56_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_57_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_57_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_58_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(68000000000.000015), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_58_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(68000000000.000015), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_59_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(31300000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_59_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(31300000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_60_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(15100000000.000002), double(0.0), double(-1803304.0), temperature, log_temperature);}
    
double dcall_forward_reaction_60_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(15100000000.000002), double(0.0), double(-1803304.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_61_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(3.3600000000000004e+19), double(-3.325), double(16526800.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(3.3600000000000004e+19), double(-3.325), double(16526800.0), temperature);
        double arrhenius_2 = arrhenius(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(3.3600000000000004e+19), double(-3.325), double(16526800.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double arrhenius_1 = arrhenius(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature);
        double arrhenius_2 = arrhenius(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature);
        double arrhenius_2 = arrhenius(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double arrhenius_1 = arrhenius(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature);
        double arrhenius_2 = arrhenius(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature);
        double arrhenius_2 = arrhenius(double(1.2700000000000004e+19), double(-3.06), double(33262800.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1.2700000000000004e+19), double(-3.06), double(33262800.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(1.2700000000000004e+19), double(-3.06), double(33262800.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_61_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(3.3600000000000004e+19), double(-3.325), double(16526800.0), temperature));
        double log_k2 = log_gen(arrhenius(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(4.8000000000000007e+20), double(-3.63), double(21840480.0), temperature));
        double log_k2 = log_gen(arrhenius(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(6.850000000000001e+20), double(-3.66), double(24350880.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(1.5300000000000005e+21), double(-3.73), double(28534880.0), temperature));
        double log_k2 = log_gen(arrhenius(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(8.750000000000003e+20), double(-3.62), double(32028520.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1.2700000000000004e+19), double(-3.06), double(33262800.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.927285833158665, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_62_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(9000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_62_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(9000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_63_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(13300000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_63_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(13300000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_64_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(6620000000.000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_64_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(6620000000.000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_65_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(4.190000000000001e+28), double(-5.533), double(25639552.0), double(186000000000.00003), double(-0.033), double(-594128.0), double(0.782), double(2755.0), double(6570.0), double(271.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_65_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(4.190000000000001e+28), double(-5.533), double(25639552.0), double(186000000000.00003), double(-0.033), double(-594128.0), double(0.782), double(2755.0), double(6570.0), double(271.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_65_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(4.190000000000001e+28), double(-5.533), double(25639552.0), double(186000000000.00003), double(-0.033), double(-594128.0), double(0.782), double(2755.0), double(6570.0), double(271.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double
dcall_forward_reaction_66_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_66_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_66_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(4.4000000000000005e+35), double(-6.1), double(393295999.99999994), double(37000000000000.0), double(0.0), double(301147584.0), double(0.932), double(1540.0), double(10300.0), double(197.00000000000003), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_67_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature);}
    
double dcall_forward_reaction_67_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(5670000000.000001), double(0.361), double(19284056.0), temperature, log_temperature);}
    
double dcall_forward_reaction_68_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_68_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_68_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),1.0*dthird_body_dmixture_concentration(double(11400000000.000002), double(0.582), double(60228680.0), temperature, log_temperature, mixture_concentration),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0)};}
    
double dcall_forward_reaction_69_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(416000000.00000006), double(0.57), double(11556208.0), temperature, log_temperature);}
    
double dcall_forward_reaction_69_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(416000000.00000006), double(0.57), double(11556208.0), temperature, log_temperature);}
    
double dcall_forward_reaction_70_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(78200.00000000001), double(1.63), double(-4414120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_70_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(78200.00000000001), double(1.63), double(-4414120.0), temperature, log_temperature);}
    
double dcall_forward_reaction_71_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(244.00000000000006), double(2.5), double(152548640.0), temperature, log_temperature);}
    
double dcall_forward_reaction_71_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(244.00000000000006), double(2.5), double(152548640.0), temperature, log_temperature);}
    
double dcall_forward_reaction_72_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(96400000000.00002), double(0.0), double(-2163128.0), temperature, log_temperature);}
    
double dcall_forward_reaction_72_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(96400000000.00002), double(0.0), double(-2163128.0), temperature, log_temperature);}
    
double dcall_forward_reaction_73_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7.400000000000001e-05), double(4.21), double(4686080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_73_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7.400000000000001e-05), double(4.21), double(4686080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_74_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(13300000000.000002), double(0.0), double(-2301200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_74_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(13300000000.000002), double(0.0), double(-2301200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_75_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(5.400000000000001), double(2.81), double(24526608.0), temperature, log_temperature);}
    
double dcall_forward_reaction_75_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(5.400000000000001), double(2.81), double(24526608.0), temperature, log_temperature);}
    
double dcall_forward_reaction_76_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(5.400000000000001), double(2.81), double(24526608.0), temperature, log_temperature);}
    
double dcall_forward_reaction_76_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(5.400000000000001), double(2.81), double(24526608.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_77_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(1.27e+30), double(-5.57), double(15974512.0), double(211000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_77_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(1.27e+30), double(-5.57), double(15974512.0), double(211000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_77_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(1.27e+30), double(-5.57), double(15974512.0), double(211000000000.00003), double(0.0), double(0.0), double(0.37), double(61.0), double(90000.0), double(3315.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_78_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(53900000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_78_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(53900000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_79_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(23100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_79_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(23100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_80_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(42.900000000000006), double(2.57), double(16727632.0), temperature, log_temperature);}
    
double dcall_forward_reaction_80_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(42.900000000000006), double(2.57), double(16727632.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_81_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(70000000000000.016), double(-1.12), double(6778080.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(70000000000000.016), double(-1.12), double(6778080.0), temperature);
        double arrhenius_2 = arrhenius(double(117000000000000.02), double(-1.162), double(11568760.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(70000000000000.016), double(-1.12), double(6778080.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(117000000000000.02), double(-1.162), double(11568760.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double arrhenius_1 = arrhenius(double(117000000000000.02), double(-1.162), double(11568760.0), temperature);
        double arrhenius_2 = arrhenius(double(14300000000000.002), double(-0.866), double(12970400.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(117000000000000.02), double(-1.162), double(11568760.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(14300000000000.002), double(-0.866), double(12970400.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(14300000000000.002), double(-0.866), double(12970400.0), temperature);
        double arrhenius_2 = arrhenius(double(200000000000.00003), double(-0.312), double(13263280.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(14300000000000.002), double(-0.866), double(12970400.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(200000000000.00003), double(-0.312), double(13263280.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double arrhenius_1 = arrhenius(double(200000000000.00003), double(-0.312), double(13263280.0), temperature);
        double arrhenius_2 = arrhenius(double(552000000.0000001), double(0.44), double(12049920.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(200000000000.00003), double(-0.312), double(13263280.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(552000000.0000001), double(0.44), double(12049920.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(552000000.0000001), double(0.44), double(12049920.0), temperature);
        double arrhenius_2 = arrhenius(double(98100000.00000001), double(0.664), double(15869912.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(552000000.0000001), double(0.44), double(12049920.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(98100000.00000001), double(0.664), double(15869912.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(98100000.00000001), double(0.664), double(15869912.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_81_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(70000000000000.016), double(-1.12), double(6778080.0), temperature));
        double log_k2 = log_gen(arrhenius(double(117000000000000.02), double(-1.162), double(11568760.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(117000000000000.02), double(-1.162), double(11568760.0), temperature));
        double log_k2 = log_gen(arrhenius(double(14300000000000.002), double(-0.866), double(12970400.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(14300000000000.002), double(-0.866), double(12970400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(200000000000.00003), double(-0.312), double(13263280.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(200000000000.00003), double(-0.312), double(13263280.0), temperature));
        double log_k2 = log_gen(arrhenius(double(552000000.0000001), double(0.44), double(12049920.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(552000000.0000001), double(0.44), double(12049920.0), temperature));
        double log_k2 = log_gen(arrhenius(double(98100000.00000001), double(0.664), double(15869912.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.927285833158665, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_82_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(370000000.00000006), double(0.142), double(-2020872.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(370000000.00000006), double(0.142), double(-2020872.0), temperature);
        double arrhenius_2 = arrhenius(double(13500000000.000002), double(-0.272), double(5372256.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(370000000.00000006), double(0.142), double(-2020872.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(13500000000.000002), double(-0.272), double(5372256.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double arrhenius_1 = arrhenius(double(13500000000.000002), double(-0.272), double(5372256.0), temperature);
        double arrhenius_2 = arrhenius(double(84200000000.00002), double(-0.473), double(10234064.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(13500000000.000002), double(-0.272), double(5372256.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(84200000000.00002), double(-0.473), double(10234064.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(84200000000.00002), double(-0.473), double(10234064.0), temperature);
        double arrhenius_2 = arrhenius(double(153000000000.00003), double(-0.51), double(15125160.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(84200000000.00002), double(-0.473), double(10234064.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(153000000000.00003), double(-0.51), double(15125160.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double arrhenius_1 = arrhenius(double(153000000000.00003), double(-0.51), double(15125160.0), temperature);
        double arrhenius_2 = arrhenius(double(10000000000.000002), double(-0.14), double(17154400.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(153000000000.00003), double(-0.51), double(15125160.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(10000000000.000002), double(-0.14), double(17154400.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(10000000000.000002), double(-0.14), double(17154400.0), temperature);
        double arrhenius_2 = arrhenius(double(18400000.000000004), double(0.68), double(16568640.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(10000000000.000002), double(-0.14), double(17154400.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(18400000.000000004), double(0.68), double(16568640.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(18400000.000000004), double(0.68), double(16568640.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_82_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(370000000.00000006), double(0.142), double(-2020872.0), temperature));
        double log_k2 = log_gen(arrhenius(double(13500000000.000002), double(-0.272), double(5372256.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(13500000000.000002), double(-0.272), double(5372256.0), temperature));
        double log_k2 = log_gen(arrhenius(double(84200000000.00002), double(-0.473), double(10234064.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(84200000000.00002), double(-0.473), double(10234064.0), temperature));
        double log_k2 = log_gen(arrhenius(double(153000000000.00003), double(-0.51), double(15125160.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(153000000000.00003), double(-0.51), double(15125160.0), temperature));
        double log_k2 = log_gen(arrhenius(double(10000000000.000002), double(-0.14), double(17154400.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(10000000000.000002), double(-0.14), double(17154400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(18400000.000000004), double(0.68), double(16568640.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.927285833158665, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_83_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(116.00000000000001), double(2.228), double(-12644048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_83_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(116.00000000000001), double(2.228), double(-12644048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_84_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(10400000000.000002), double(0.0), double(-2468560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_84_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(10400000000.000002), double(0.0), double(-2468560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_85_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7550000000.000001), double(0.0), double(118394648.0), temperature, log_temperature);}
    
double dcall_forward_reaction_85_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7550000000.000001), double(0.0), double(118394648.0), temperature, log_temperature);}
    
double dcall_forward_reaction_86_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.0686), double(2.86), double(40869312.0), temperature, log_temperature);}
    
double dcall_forward_reaction_86_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.0686), double(2.86), double(40869312.0), temperature, log_temperature);}
    
double dcall_forward_reaction_87_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_87_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_88_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(72300000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_88_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(72300000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_89_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(14000000000.000002), double(0.0), double(-2079448.0), temperature, log_temperature);}
    
double dcall_forward_reaction_89_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(14000000000.000002), double(0.0), double(-2079448.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_90_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(1.7700000000000004e+44), double(-9.67), double(26024480.0), double(21200000000000.004), double(-0.97), double(2594080.0), double(0.5325), double(1038.0), double(4970.0), double(151.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_90_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(1.7700000000000004e+44), double(-9.67), double(26024480.0), double(21200000000000.004), double(-0.97), double(2594080.0), double(0.5325), double(1038.0), double(4970.0), double(151.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_90_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(1.7700000000000004e+44), double(-9.67), double(26024480.0), double(21200000000000.004), double(-0.97), double(2594080.0), double(0.5325), double(1038.0), double(4970.0), double(151.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    

double
dcall_forward_reaction_91_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(7000000000.000001), double(0.072), double(46588840.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(7000000000.000001), double(0.072), double(46588840.0), temperature);
        double arrhenius_2 = arrhenius(double(2350000000.0000005), double(0.233), double(50208000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(7000000000.000001), double(0.072), double(46588840.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(2350000000.0000005), double(0.233), double(50208000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double arrhenius_1 = arrhenius(double(2350000000.0000005), double(0.233), double(50208000.0), temperature);
        double arrhenius_2 = arrhenius(double(131000000.00000001), double(0.604), double(51044800.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(2350000000.0000005), double(0.233), double(50208000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(131000000.00000001), double(0.604), double(51044800.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(131000000.00000001), double(0.604), double(51044800.0), temperature);
        double arrhenius_2 = arrhenius(double(533000.0000000001), double(1.294), double(50208000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(131000000.00000001), double(0.604), double(51044800.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(533000.0000000001), double(1.294), double(50208000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double arrhenius_1 = arrhenius(double(533000.0000000001), double(1.294), double(50208000.0), temperature);
        double arrhenius_2 = arrhenius(double(544.0), double(2.19), double(47697600.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(533000.0000000001), double(1.294), double(50208000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(544.0), double(2.19), double(47697600.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(544.0), double(2.19), double(47697600.0), temperature);
        double arrhenius_2 = arrhenius(double(0.10000000000000002), double(3.177), double(43932000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(544.0), double(2.19), double(47697600.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(0.10000000000000002), double(3.177), double(43932000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.927285833158665, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(0.10000000000000002), double(3.177), double(43932000.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_91_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(7000000000.000001), double(0.072), double(46588840.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2350000000.0000005), double(0.233), double(50208000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.624700740164618)
        {
        double log_k1 = log_gen(arrhenius(double(2350000000.0000005), double(0.233), double(50208000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(131000000.00000001), double(0.604), double(51044800.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.624700740164618);
        }
        else if (12.624700740164618 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(131000000.00000001), double(0.604), double(51044800.0), temperature));
        double log_k2 = log_gen(arrhenius(double(533000.0000000001), double(1.294), double(50208000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.624700740164618, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.927285833158665)
        {
        double log_k1 = log_gen(arrhenius(double(533000.0000000001), double(1.294), double(50208000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(544.0), double(2.19), double(47697600.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.927285833158665);
        }
        else if (14.927285833158665 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(544.0), double(2.19), double(47697600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(0.10000000000000002), double(3.177), double(43932000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.927285833158665, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_92_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(26200000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_92_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(26200000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_93_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.031900000000000005), double(3.36), double(18033040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_93_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.031900000000000005), double(3.36), double(18033040.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_94_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(60200000000000.01), double(-0.5468), double(75412416.0), double(11300000000.0), double(1.21), double(100729800.0), double(0.341), double(1000.0), double(2339.0), double(28.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_94_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(60200000000000.01), double(-0.5468), double(75412416.0), double(11300000000.0), double(1.21), double(100729800.0), double(0.341), double(1000.0), double(2339.0), double(28.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_94_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(60200000000000.01), double(-0.5468), double(75412416.0), double(11300000000.0), double(1.21), double(100729800.0), double(0.341), double(1000.0), double(2339.0), double(28.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_95_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(37900000000.00001), double(0.0), double(2493664.0), temperature, log_temperature);}
    
double dcall_forward_reaction_95_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(37900000000.00001), double(0.0), double(2493664.0), temperature, log_temperature);}
    
double dcall_forward_reaction_96_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(388000000000.00006), double(-0.264), double(-108784.0), temperature, log_temperature);}
    
double dcall_forward_reaction_96_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(388000000000.00006), double(-0.264), double(-108784.0), temperature, log_temperature);}
    
double dcall_forward_reaction_97_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(197000000.00000003), double(0.414), double(1016712.0), temperature, log_temperature);}
    
double dcall_forward_reaction_97_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(197000000.00000003), double(0.414), double(1016712.0), temperature, log_temperature);}
    
double dcall_forward_reaction_98_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3780000000.0000005), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_98_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3780000000.0000005), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_99_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(18100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_99_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(18100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_100_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(63200000.00000001), double(0.0), double(10890952.0), temperature, log_temperature);}
    
double dcall_forward_reaction_100_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(63200000.00000001), double(0.0), double(10890952.0), temperature, log_temperature);}
    
double dcall_forward_reaction_101_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(24000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_101_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(24000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_102_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(6000000000.000001), double(0.0), double(46024000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_102_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(6000000000.000001), double(0.0), double(46024000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_103_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(614.0000000000001), double(2.5), double(40116192.0), temperature, log_temperature);}
    
double dcall_forward_reaction_103_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(614.0000000000001), double(2.5), double(40116192.0), temperature, log_temperature);}
    
double dcall_forward_reaction_104_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(693000.0000000001), double(1.56), double(35501240.0), temperature, log_temperature);}
    
double dcall_forward_reaction_104_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(693000.0000000001), double(1.56), double(35501240.0), temperature, log_temperature);}
    
double dcall_forward_reaction_105_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1000.0000000000002), double(2.182), double(10234064.0), temperature, log_temperature);}
    
double dcall_forward_reaction_105_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1000.0000000000002), double(2.182), double(10234064.0), temperature, log_temperature);}
    
double dcall_forward_reaction_106_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(-1661048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_106_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(-1661048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_107_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2460.0000000000005), double(2.0), double(34601680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_107_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2460.0000000000005), double(2.0), double(34601680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_108_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(18700000000.000004), double(0.0), double(-2079448.0), temperature, log_temperature);}
    
double dcall_forward_reaction_108_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(18700000000.000004), double(0.0), double(-2079448.0), temperature, log_temperature);}
    
double dcall_forward_reaction_109_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(13000000000.000002), double(0.0), double(2510400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_109_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(13000000000.000002), double(0.0), double(2510400.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_110_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(3.750000000000001e+27), double(-4.8), double(7949600.0), double(22500000000.000004), double(0.32), double(0.0), double(0.646), double(1315.0), double(5566.0), double(13.2), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_110_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(3.750000000000001e+27), double(-4.8), double(7949600.0), double(22500000000.000004), double(0.32), double(0.0), double(0.646), double(1315.0), double(5566.0), double(13.2), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_110_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(3.750000000000001e+27), double(-4.8), double(7949600.0), double(22500000000.000004), double(0.32), double(0.0), double(0.646), double(1315.0), double(5566.0), double(13.2), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_111_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(54000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_111_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(54000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_112_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_112_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_113_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2110.0000000000005), double(2.32), double(3690288.0), temperature, log_temperature);}
    
double dcall_forward_reaction_113_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2110.0000000000005), double(2.32), double(3690288.0), temperature, log_temperature);}
    
double dcall_forward_reaction_114_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(163000000000.00003), double(-0.35), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_114_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(163000000000.00003), double(-0.35), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_115_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(132000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_115_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(132000000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_116_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(173000000000.00003), double(-0.112), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_116_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(173000000000.00003), double(-0.112), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_117_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(29500000000.000004), double(0.0), double(4656792.0), temperature, log_temperature);}
    
double dcall_forward_reaction_117_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(29500000000.000004), double(0.0), double(4656792.0), temperature, log_temperature);}
    
double dcall_forward_reaction_118_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1630000000.0000002), double(0.0), double(3573136.0), temperature, log_temperature);}
    
double dcall_forward_reaction_118_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1630000000.0000002), double(0.0), double(3573136.0), temperature, log_temperature);}
    
double dcall_forward_reaction_119_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(18800000000000.004), double(-0.59), double(606680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_119_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(18800000000000.004), double(-0.59), double(606680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_120_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(37900000000.00001), double(0.13), double(-899560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_120_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(37900000000.00001), double(0.13), double(-899560.0), temperature, log_temperature);}
    
double dcall_forward_reaction_121_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(50000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_121_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(50000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_122_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_122_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_123_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(10000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_123_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(10000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_124_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_lindemann_dtemperature(double(2450000000000.0005), double(-0.64), double(207944800.0), double(800000000000000.0), double(-0.52), double(212338000.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_124_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_lindemann_dlog_temperature(double(2450000000000.0005), double(-0.64), double(207944800.0), double(800000000000000.0), double(-0.52), double(212338000.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_124_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_lindemann_dmixture_concentration(double(2450000000000.0005), double(-0.64), double(207944800.0), double(800000000000000.0), double(-0.52), double(212338000.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double
dcall_forward_reaction_125_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(3.6300000000000005e+21), double(-3.38), double(3543848.0), double(554000.0000000001), double(1.64), double(8769664.0), double(0.215), double(1043.0), double(2341.0), double(10.7), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_125_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(3.6300000000000005e+21), double(-3.38), double(3543848.0), double(554000.0000000001), double(1.64), double(8769664.0), double(0.215), double(1043.0), double(2341.0), double(10.7), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_125_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(3.6300000000000005e+21), double(-3.38), double(3543848.0), double(554000.0000000001), double(1.64), double(8769664.0), double(0.215), double(1043.0), double(2341.0), double(10.7), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_126_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(939000.0000000001), double(1.4), double(9229904.0), temperature, log_temperature);}
    
double dcall_forward_reaction_126_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(939000.0000000001), double(1.4), double(9229904.0), temperature, log_temperature);}
    
double dcall_forward_reaction_127_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(235000.00000000003), double(1.4), double(9229904.0), temperature, log_temperature);}
    
double dcall_forward_reaction_127_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(235000.00000000003), double(1.4), double(9229904.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_128_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 7.837208997382573) { return darrhenius_dtemperature(double(15.200000000000001), double(2.28), double(-1221728.0), temperature); }
        else if (7.837208997382573 <= log_pressure && log_pressure < 9.223503358502464)
        {
        double arrhenius_1 = arrhenius(double(15.200000000000001), double(2.28), double(-1221728.0), temperature);
        double arrhenius_2 = arrhenius(double(302.00000000000006), double(1.92), double(2502032.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(15.200000000000001), double(2.28), double(-1221728.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(302.00000000000006), double(1.92), double(2502032.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  7.837208997382573, 9.223503358502464);
        }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(302.00000000000006), double(1.92), double(2502032.0), temperature);
        double arrhenius_2 = arrhenius(double(7530.000000000001), double(1.55), double(8811504.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(302.00000000000006), double(1.92), double(2502032.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(7530.000000000001), double(1.55), double(8811504.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(7530.000000000001), double(1.55), double(8811504.0), temperature);
        double arrhenius_2 = arrhenius(double(5100.000000000001), double(1.65), double(14225600.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(7530.000000000001), double(1.55), double(8811504.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(5100.000000000001), double(1.65), double(14225600.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(5100.000000000001), double(1.65), double(14225600.0), temperature);
        double arrhenius_2 = arrhenius(double(14.600000000000001), double(2.45), double(18731768.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(5100.000000000001), double(1.65), double(14225600.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(14.600000000000001), double(2.45), double(18731768.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(14.600000000000001), double(2.45), double(18731768.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_128_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 7.837208997382573) { return double(0); }
        else if (7.837208997382573 <= log_pressure && log_pressure < 9.223503358502464)
        {
        double log_k1 = log_gen(arrhenius(double(15.200000000000001), double(2.28), double(-1221728.0), temperature));
        double log_k2 = log_gen(arrhenius(double(302.00000000000006), double(1.92), double(2502032.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 7.837208997382573, 9.223503358502464);
        }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(302.00000000000006), double(1.92), double(2502032.0), temperature));
        double log_k2 = log_gen(arrhenius(double(7530.000000000001), double(1.55), double(8811504.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(7530.000000000001), double(1.55), double(8811504.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5100.000000000001), double(1.65), double(14225600.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(5100.000000000001), double(1.65), double(14225600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(14.600000000000001), double(2.45), double(18731768.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_129_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2630.0000000000005), double(2.14), double(71379040.0), temperature, log_temperature);}
    
double dcall_forward_reaction_129_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2630.0000000000005), double(2.14), double(71379040.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_130_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 7.837208997382573) { return darrhenius_dtemperature(double(4370.000000000001), double(1.4), double(949768.0), temperature); }
        else if (7.837208997382573 <= log_pressure && log_pressure < 9.223503358502464)
        {
        double arrhenius_1 = arrhenius(double(4370.000000000001), double(1.4), double(949768.0), temperature);
        double arrhenius_2 = arrhenius(double(76500.00000000001), double(1.05), double(4665160.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(4370.000000000001), double(1.4), double(949768.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(76500.00000000001), double(1.05), double(4665160.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  7.837208997382573, 9.223503358502464);
        }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(76500.00000000001), double(1.05), double(4665160.0), temperature);
        double arrhenius_2 = arrhenius(double(1280000.0000000002), double(0.73), double(10794720.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(76500.00000000001), double(1.05), double(4665160.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1280000.0000000002), double(0.73), double(10794720.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(1280000.0000000002), double(0.73), double(10794720.0), temperature);
        double arrhenius_2 = arrhenius(double(431000.00000000006), double(0.92), double(15631424.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1280000.0000000002), double(0.73), double(10794720.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(431000.00000000006), double(0.92), double(15631424.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(431000.00000000006), double(0.92), double(15631424.0), temperature);
        double arrhenius_2 = arrhenius(double(825.0000000000002), double(1.77), double(19664800.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(431000.00000000006), double(0.92), double(15631424.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(825.0000000000002), double(1.77), double(19664800.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(825.0000000000002), double(1.77), double(19664800.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_130_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 7.837208997382573) { return double(0); }
        else if (7.837208997382573 <= log_pressure && log_pressure < 9.223503358502464)
        {
        double log_k1 = log_gen(arrhenius(double(4370.000000000001), double(1.4), double(949768.0), temperature));
        double log_k2 = log_gen(arrhenius(double(76500.00000000001), double(1.05), double(4665160.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 7.837208997382573, 9.223503358502464);
        }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(76500.00000000001), double(1.05), double(4665160.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1280000.0000000002), double(0.73), double(10794720.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(1280000.0000000002), double(0.73), double(10794720.0), temperature));
        double log_k2 = log_gen(arrhenius(double(431000.00000000006), double(0.92), double(15631424.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(431000.00000000006), double(0.92), double(15631424.0), temperature));
        double log_k2 = log_gen(arrhenius(double(825.0000000000002), double(1.77), double(19664800.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_131_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7750.000000000001), double(1.605), double(64015200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_131_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7750.000000000001), double(1.605), double(64015200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_132_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(23200.000000000004), double(1.605), double(64015200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_132_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(23200.000000000004), double(1.605), double(64015200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_133_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(50000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_133_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(50000000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_134_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_134_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(20000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_135_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(10000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_135_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(10000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_136_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(2.6900000000000006e+27), double(-5.11), double(29685480.0), double(810000000.0000001), double(0.5), double(18869840.0), double(0.591), double(1226.0), double(5185.0), double(275.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_136_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(2.6900000000000006e+27), double(-5.11), double(29685480.0), double(810000000.0000001), double(0.5), double(18869840.0), double(0.591), double(1226.0), double(5185.0), double(275.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_136_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(2.6900000000000006e+27), double(-5.11), double(29685480.0), double(810000000.0000001), double(0.5), double(18869840.0), double(0.591), double(1226.0), double(5185.0), double(275.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_137_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(42000.00000000001), double(1.9), double(49580400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_137_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(42000.00000000001), double(1.9), double(49580400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_138_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(777000.0000000001), double(1.45), double(11631520.0), temperature, log_temperature);}
    
double dcall_forward_reaction_138_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(777000.0000000001), double(1.45), double(11631520.0), temperature, log_temperature);}
    
double dcall_forward_reaction_139_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(10000000000.000002), double(0.0), double(43095200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_139_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(10000000000.000002), double(0.0), double(43095200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_140_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1080000000.0000002), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_140_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1080000000.0000002), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_141_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(361000000.00000006), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_141_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(361000000.00000006), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_142_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(361000000.00000006), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_142_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(361000000.00000006), double(0.0), double(5652584.0), temperature, log_temperature);}
    
double dcall_forward_reaction_143_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(11.200000000000001), double(2.74), double(9288480.0), temperature, log_temperature);}
    
double dcall_forward_reaction_143_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(11.200000000000001), double(2.74), double(9288480.0), temperature, log_temperature);}
    
double dcall_forward_reaction_144_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(680000000.0000001), double(0.0), double(-4238392.0), temperature, log_temperature);}
    
double dcall_forward_reaction_144_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(680000000.0000001), double(0.0), double(-4238392.0), temperature, log_temperature);}
    
double dcall_forward_reaction_145_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1010000000.0000001), double(0.0), double(-4238392.0), temperature, log_temperature);}
    
double dcall_forward_reaction_145_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1010000000.0000001), double(0.0), double(-4238392.0), temperature, log_temperature);}
    
double dcall_forward_reaction_146_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(145000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_146_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(145000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_147_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(1.4000000000000004e+24), double(-3.86), double(13890880.0), double(38800000000.00001), double(0.2), double(0.0), double(0.782), double(2663.0), double(6095.0), double(207.49999999999997), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_147_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(1.4000000000000004e+24), double(-3.86), double(13890880.0), double(38800000000.00001), double(0.2), double(0.0), double(0.782), double(2663.0), double(6095.0), double(207.49999999999997), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_147_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(1.4000000000000004e+24), double(-3.86), double(13890880.0), double(38800000000.00001), double(0.2), double(0.0), double(0.782), double(2663.0), double(6095.0), double(207.49999999999997), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_148_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1210000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_148_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1210000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_149_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(42200000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_149_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(42200000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_150_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_150_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_151_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(21000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_151_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(21000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_152_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(16700000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_152_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(16700000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_153_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1140000000.0000002), double(0.0), double(5857599.999999999), temperature, log_temperature);}
    
double dcall_forward_reaction_153_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1140000000.0000002), double(0.0), double(5857599.999999999), temperature, log_temperature);}
    
double dcall_forward_reaction_154_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(41800000000.00001), double(0.0), double(12008080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_154_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(41800000000.00001), double(0.0), double(12008080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_155_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(286000000.00000006), double(0.0), double(4686080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_155_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(286000000.00000006), double(0.0), double(4686080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_156_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_156_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_157_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(170000000.00000003), double(0.32), double(1506240.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(170000000.00000003), double(0.32), double(1506240.0), temperature);
        double arrhenius_2 = arrhenius(double(1240000000.0000002), double(0.077), double(4267680.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(170000000.00000003), double(0.32), double(1506240.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1240000000.0000002), double(0.077), double(4267680.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(1240000000.0000002), double(0.077), double(4267680.0), temperature);
        double arrhenius_2 = arrhenius(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1240000000.0000002), double(0.077), double(4267680.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature);
        double arrhenius_2 = arrhenius(double(10800000000.000002), double(-0.16), double(10292640.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(10800000000.000002), double(-0.16), double(10292640.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(10800000000.000002), double(-0.16), double(10292640.0), temperature);
        double arrhenius_2 = arrhenius(double(8600000000.000002), double(-0.1), double(13974560.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(10800000000.000002), double(-0.16), double(10292640.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(8600000000.000002), double(-0.1), double(13974560.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(8600000000.000002), double(-0.1), double(13974560.0), temperature);
        double arrhenius_2 = arrhenius(double(332000000.00000006), double(0.34), double(15690000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(8600000000.000002), double(-0.1), double(13974560.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(332000000.00000006), double(0.34), double(15690000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(332000000.00000006), double(0.34), double(15690000.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_157_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(170000000.00000003), double(0.32), double(1506240.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1240000000.0000002), double(0.077), double(4267680.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(1240000000.0000002), double(0.077), double(4267680.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(2820000000.0000005), double(-0.02), double(6401520.0), temperature));
        double log_k2 = log_gen(arrhenius(double(10800000000.000002), double(-0.16), double(10292640.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(10800000000.000002), double(-0.16), double(10292640.0), temperature));
        double log_k2 = log_gen(arrhenius(double(8600000000.000002), double(-0.1), double(13974560.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(8600000000.000002), double(-0.1), double(13974560.0), temperature));
        double log_k2 = log_gen(arrhenius(double(332000000.00000006), double(0.34), double(15690000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_158_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(4.340000000000001), double(2.3), double(2468560.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(4.340000000000001), double(2.3), double(2468560.0), temperature);
        double arrhenius_2 = arrhenius(double(56.00000000000001), double(1.99), double(5698608.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(4.340000000000001), double(2.3), double(2468560.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(56.00000000000001), double(1.99), double(5698608.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(56.00000000000001), double(1.99), double(5698608.0), temperature);
        double arrhenius_2 = arrhenius(double(94.10000000000002), double(1.94), double(7196480.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(56.00000000000001), double(1.99), double(5698608.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(94.10000000000002), double(1.94), double(7196480.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(94.10000000000002), double(1.94), double(7196480.0), temperature);
        double arrhenius_2 = arrhenius(double(1130.0000000000002), double(1.645), double(11798880.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(94.10000000000002), double(1.94), double(7196480.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1130.0000000000002), double(1.645), double(11798880.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(1130.0000000000002), double(1.645), double(11798880.0), temperature);
        double arrhenius_2 = arrhenius(double(5000.000000000001), double(1.49), double(16631400.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1130.0000000000002), double(1.645), double(11798880.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(5000.000000000001), double(1.49), double(16631400.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(5000.000000000001), double(1.49), double(16631400.0), temperature);
        double arrhenius_2 = arrhenius(double(1570.0000000000002), double(1.67), double(20166880.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(5000.000000000001), double(1.49), double(16631400.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1570.0000000000002), double(1.67), double(20166880.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(1570.0000000000002), double(1.67), double(20166880.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_158_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(4.340000000000001), double(2.3), double(2468560.0), temperature));
        double log_k2 = log_gen(arrhenius(double(56.00000000000001), double(1.99), double(5698608.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(56.00000000000001), double(1.99), double(5698608.0), temperature));
        double log_k2 = log_gen(arrhenius(double(94.10000000000002), double(1.94), double(7196480.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(94.10000000000002), double(1.94), double(7196480.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1130.0000000000002), double(1.645), double(11798880.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(1130.0000000000002), double(1.645), double(11798880.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5000.000000000001), double(1.49), double(16631400.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(5000.000000000001), double(1.49), double(16631400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1570.0000000000002), double(1.67), double(20166880.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_159_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(46700000000000.01), double(-1.55), double(4184000.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(46700000000000.01), double(-1.55), double(4184000.0), temperature);
        double arrhenius_2 = arrhenius(double(182000000000000.03), double(-1.714), double(5819944.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(46700000000000.01), double(-1.55), double(4184000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(182000000000000.03), double(-1.714), double(5819944.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(182000000000000.03), double(-1.714), double(5819944.0), temperature);
        double arrhenius_2 = arrhenius(double(471000000000000.06), double(-1.825), double(7907760.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(182000000000000.03), double(-1.714), double(5819944.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(471000000000000.06), double(-1.825), double(7907760.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(471000000000000.06), double(-1.825), double(7907760.0), temperature);
        double arrhenius_2 = arrhenius(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(471000000000000.06), double(-1.825), double(7907760.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature);
        double arrhenius_2 = arrhenius(double(181000000000000.03), double(-1.64), double(14058240.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(181000000000000.03), double(-1.64), double(14058240.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(181000000000000.03), double(-1.64), double(14058240.0), temperature);
        double arrhenius_2 = arrhenius(double(686000000000.0001), double(-0.92), double(13807200.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(181000000000000.03), double(-1.64), double(14058240.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(686000000000.0001), double(-0.92), double(13807200.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(686000000000.0001), double(-0.92), double(13807200.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_159_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(46700000000000.01), double(-1.55), double(4184000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(182000000000000.03), double(-1.714), double(5819944.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(182000000000000.03), double(-1.714), double(5819944.0), temperature));
        double log_k2 = log_gen(arrhenius(double(471000000000000.06), double(-1.825), double(7907760.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(471000000000000.06), double(-1.825), double(7907760.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(1000000000000000.1), double(-1.89), double(11485080.0), temperature));
        double log_k2 = log_gen(arrhenius(double(181000000000000.03), double(-1.64), double(14058240.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(181000000000000.03), double(-1.64), double(14058240.0), temperature));
        double log_k2 = log_gen(arrhenius(double(686000000000.0001), double(-0.92), double(13807200.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_160_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(109000000000000.02), double(-1.55), double(4184000.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(109000000000000.02), double(-1.55), double(4184000.0), temperature);
        double arrhenius_2 = arrhenius(double(425000000000000.06), double(-1.714), double(5819944.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(109000000000000.02), double(-1.55), double(4184000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(425000000000000.06), double(-1.714), double(5819944.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(425000000000000.06), double(-1.714), double(5819944.0), temperature);
        double arrhenius_2 = arrhenius(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(425000000000000.06), double(-1.714), double(5819944.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature);
        double arrhenius_2 = arrhenius(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature);
        double arrhenius_2 = arrhenius(double(422000000000000.06), double(-1.64), double(14058240.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(422000000000000.06), double(-1.64), double(14058240.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(422000000000000.06), double(-1.64), double(14058240.0), temperature);
        double arrhenius_2 = arrhenius(double(1600000000000.0002), double(-0.92), double(13807200.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(422000000000000.06), double(-1.64), double(14058240.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1600000000000.0002), double(-0.92), double(13807200.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(1600000000000.0002), double(-0.92), double(13807200.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_160_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(109000000000000.02), double(-1.55), double(4184000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(425000000000000.06), double(-1.714), double(5819944.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(425000000000000.06), double(-1.714), double(5819944.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(1100000000000000.2), double(-1.825), double(7907760.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(2340000000000000.5), double(-1.89), double(11485080.0), temperature));
        double log_k2 = log_gen(arrhenius(double(422000000000000.06), double(-1.64), double(14058240.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(422000000000000.06), double(-1.64), double(14058240.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1600000000000.0002), double(-0.92), double(13807200.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_161_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(6560000000.000001), double(-0.47), double(188280.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(6560000000.000001), double(-0.47), double(188280.0), temperature);
        double arrhenius_2 = arrhenius(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(6560000000.000001), double(-0.47), double(188280.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature);
        double arrhenius_2 = arrhenius(double(63200000000.00001), double(-0.73), double(4037560.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(63200000000.00001), double(-0.73), double(4037560.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(63200000000.00001), double(-0.73), double(4037560.0), temperature);
        double arrhenius_2 = arrhenius(double(234000000000.00003), double(-0.88), double(8016544.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(63200000000.00001), double(-0.73), double(4037560.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(234000000000.00003), double(-0.88), double(8016544.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(234000000000.00003), double(-0.88), double(8016544.0), temperature);
        double arrhenius_2 = arrhenius(double(53600000000.00001), double(-0.65), double(10878400.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(234000000000.00003), double(-0.88), double(8016544.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(53600000000.00001), double(-0.65), double(10878400.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(53600000000.00001), double(-0.65), double(10878400.0), temperature);
        double arrhenius_2 = arrhenius(double(662000000.0000001), double(-0.074), double(11882560.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(53600000000.00001), double(-0.65), double(10878400.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(662000000.0000001), double(-0.074), double(11882560.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(662000000.0000001), double(-0.074), double(11882560.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_161_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(6560000000.000001), double(-0.47), double(188280.0), temperature));
        double log_k2 = log_gen(arrhenius(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(10000000000.000002), double(-0.511), double(987424.0000000001), temperature));
        double log_k2 = log_gen(arrhenius(double(63200000000.00001), double(-0.73), double(4037560.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(63200000000.00001), double(-0.73), double(4037560.0), temperature));
        double log_k2 = log_gen(arrhenius(double(234000000000.00003), double(-0.88), double(8016544.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(234000000000.00003), double(-0.88), double(8016544.0), temperature));
        double log_k2 = log_gen(arrhenius(double(53600000000.00001), double(-0.65), double(10878400.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(53600000000.00001), double(-0.65), double(10878400.0), temperature));
        double log_k2 = log_gen(arrhenius(double(662000000.0000001), double(-0.074), double(11882560.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_162_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(11600000.000000002), double(0.28), double(3368120.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(11600000.000000002), double(0.28), double(3368120.0), temperature);
        double arrhenius_2 = arrhenius(double(174000000.00000003), double(-0.05), double(7075144.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(11600000.000000002), double(0.28), double(3368120.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(174000000.00000003), double(-0.05), double(7075144.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(174000000.00000003), double(-0.05), double(7075144.0), temperature);
        double arrhenius_2 = arrhenius(double(940000000.0000001), double(-0.24), double(10267536.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(174000000.00000003), double(-0.05), double(7075144.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(940000000.0000001), double(-0.24), double(10267536.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(940000000.0000001), double(-0.24), double(10267536.0), temperature);
        double arrhenius_2 = arrhenius(double(17800000000.000004), double(-0.58), double(16213000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(940000000.0000001), double(-0.24), double(10267536.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(17800000000.000004), double(-0.58), double(16213000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(17800000000.000004), double(-0.58), double(16213000.0), temperature);
        double arrhenius_2 = arrhenius(double(88000000000.00002), double(-0.74), double(22593600.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(17800000000.000004), double(-0.58), double(16213000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(88000000000.00002), double(-0.74), double(22593600.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(88000000000.00002), double(-0.74), double(22593600.0), temperature);
        double arrhenius_2 = arrhenius(double(63400000000.00001), double(-0.646), double(28744080.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(88000000000.00002), double(-0.74), double(22593600.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(63400000000.00001), double(-0.646), double(28744080.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(63400000000.00001), double(-0.646), double(28744080.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_162_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(11600000.000000002), double(0.28), double(3368120.0), temperature));
        double log_k2 = log_gen(arrhenius(double(174000000.00000003), double(-0.05), double(7075144.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(174000000.00000003), double(-0.05), double(7075144.0), temperature));
        double log_k2 = log_gen(arrhenius(double(940000000.0000001), double(-0.24), double(10267536.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(940000000.0000001), double(-0.24), double(10267536.0), temperature));
        double log_k2 = log_gen(arrhenius(double(17800000000.000004), double(-0.58), double(16213000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(17800000000.000004), double(-0.58), double(16213000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(88000000000.00002), double(-0.74), double(22593600.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(88000000000.00002), double(-0.74), double(22593600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(63400000000.00001), double(-0.646), double(28744080.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    

double
dcall_forward_reaction_163_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(3900000.0000000005), double(0.28), double(3368120.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(3900000.0000000005), double(0.28), double(3368120.0), temperature);
        double arrhenius_2 = arrhenius(double(58000000.00000001), double(-0.05), double(7075144.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(3900000.0000000005), double(0.28), double(3368120.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(58000000.00000001), double(-0.05), double(7075144.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double arrhenius_1 = arrhenius(double(58000000.00000001), double(-0.05), double(7075144.0), temperature);
        double arrhenius_2 = arrhenius(double(312000000.00000006), double(-0.24), double(10267536.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(58000000.00000001), double(-0.05), double(7075144.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(312000000.00000006), double(-0.24), double(10267536.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(312000000.00000006), double(-0.24), double(10267536.0), temperature);
        double arrhenius_2 = arrhenius(double(5900000000.000001), double(-0.58), double(16213000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(312000000.00000006), double(-0.24), double(10267536.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(5900000000.000001), double(-0.58), double(16213000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double arrhenius_1 = arrhenius(double(5900000000.000001), double(-0.58), double(16213000.0), temperature);
        double arrhenius_2 = arrhenius(double(29000000000.000004), double(-0.74), double(22593600.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(5900000000.000001), double(-0.58), double(16213000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(29000000000.000004), double(-0.74), double(22593600.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(29000000000.000004), double(-0.74), double(22593600.0), temperature);
        double arrhenius_2 = arrhenius(double(21100000000.000004), double(-0.646), double(28744080.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(29000000000.000004), double(-0.74), double(22593600.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(21100000000.000004), double(-0.646), double(28744080.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  14.979245572089376, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(21100000000.000004), double(-0.646), double(28744080.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_163_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(3900000.0000000005), double(0.28), double(3368120.0), temperature));
        double log_k2 = log_gen(arrhenius(double(58000000.00000001), double(-0.05), double(7075144.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 12.67666047909533)
        {
        double log_k1 = log_gen(arrhenius(double(58000000.00000001), double(-0.05), double(7075144.0), temperature));
        double log_k2 = log_gen(arrhenius(double(312000000.00000006), double(-0.24), double(10267536.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 12.67666047909533);
        }
        else if (12.67666047909533 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(312000000.00000006), double(-0.24), double(10267536.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5900000000.000001), double(-0.58), double(16213000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 12.67666047909533, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 14.979245572089376)
        {
        double log_k1 = log_gen(arrhenius(double(5900000000.000001), double(-0.58), double(16213000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(29000000000.000004), double(-0.74), double(22593600.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 14.979245572089376);
        }
        else if (14.979245572089376 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(29000000000.000004), double(-0.74), double(22593600.0), temperature));
        double log_k2 = log_gen(arrhenius(double(21100000000.000004), double(-0.646), double(28744080.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 14.979245572089376, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_164_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(9000000000.000002), double(0.0), double(-3200760.0), temperature, log_temperature);}
    
double dcall_forward_reaction_164_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(9000000000.000002), double(0.0), double(-3200760.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_165_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(5650000000000001.0), double(-0.97), double(61023640.0), double(1070000000000.0), double(0.63), double(70688680.0), double(0.36), double(49999.99999999999), double(16935.0), double(122.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_165_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(5650000000000001.0), double(-0.97), double(61023640.0), double(1070000000000.0), double(0.63), double(70688680.0), double(0.36), double(49999.99999999999), double(16935.0), double(122.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_165_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(5650000000000001.0), double(-0.97), double(61023640.0), double(1070000000000.0), double(0.63), double(70688680.0), double(0.36), double(49999.99999999999), double(16935.0), double(122.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_166_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(454000000000.00006), double(0.0), double(8200640.0), temperature, log_temperature);}
    
double dcall_forward_reaction_166_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(454000000000.00006), double(0.0), double(8200640.0), temperature, log_temperature);}
    
double dcall_forward_reaction_167_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(4930000000.000001), double(0.0), double(15648160.0), temperature, log_temperature);}
    
double dcall_forward_reaction_167_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(4930000000.000001), double(0.0), double(15648160.0), temperature, log_temperature);}
    
double dcall_forward_reaction_168_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(52700000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_168_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(52700000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_169_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(158000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_169_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(158000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_170_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(12000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_170_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(12000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_171_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature, mixture_concentration);}
    
double dcall_forward_reaction_171_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dthird_body_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature, mixture_concentration);}
    
Species dcall_forward_reaction_171_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return {double(0),double(0),double(0),double(0),1.0*dthird_body_dmixture_concentration(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature, mixture_concentration),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0),double(0)};}
    
double dcall_forward_reaction_172_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_172_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_173_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(23000000.000000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_173_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(23000000.000000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_174_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(6080000000.000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_174_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(6080000000.000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_175_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(131000000000000.02), double(0.0), double(314117984.0), double(2940000000000000.0), double(0.0), double(360773768.0), double(0.25), double(90000.0), double(90000.0), double(50.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_175_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(131000000000000.02), double(0.0), double(314117984.0), double(2940000000000000.0), double(0.0), double(360773768.0), double(0.25), double(90000.0), double(90000.0), double(50.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_175_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(131000000000000.02), double(0.0), double(314117984.0), double(2940000000000000.0), double(0.0), double(360773768.0), double(0.25), double(90000.0), double(90000.0), double(50.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double
dcall_forward_reaction_176_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(2.900000000000001e+33), double(-6.642), double(24137496.0), double(1370000.0000000002), double(1.463), double(5669320.0), double(1.569), double(299.0), double(152.4), double(-9147.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_176_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(2.900000000000001e+33), double(-6.642), double(24137496.0), double(1370000.0000000002), double(1.463), double(5669320.0), double(1.569), double(299.0), double(152.4), double(-9147.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_176_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(2.900000000000001e+33), double(-6.642), double(24137496.0), double(1370000.0000000002), double(1.463), double(5669320.0), double(1.569), double(299.0), double(152.4), double(-9147.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_177_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.23500000000000004), double(3.62), double(47153680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_177_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.23500000000000004), double(3.62), double(47153680.0), temperature, log_temperature);}
    
double dcall_forward_reaction_178_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(8130.000000000001), double(1.88), double(765672.0), temperature, log_temperature);}
    
double dcall_forward_reaction_178_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(8130.000000000001), double(1.88), double(765672.0), temperature, log_temperature);}
    
double dcall_forward_reaction_179_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3700000.0000000005), double(0.907), double(3510376.0), temperature, log_temperature);}
    
double dcall_forward_reaction_179_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3700000.0000000005), double(0.907), double(3510376.0), temperature, log_temperature);}
    
double dcall_forward_reaction_180_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(14.000000000000002), double(2.62), double(1920456.0), temperature, log_temperature);}
    
double dcall_forward_reaction_180_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(14.000000000000002), double(2.62), double(1920456.0), temperature, log_temperature);}
    
double dcall_forward_reaction_181_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(71000000000.00002), double(0.0), double(251081840.0), temperature, log_temperature);}
    
double dcall_forward_reaction_181_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(71000000000.00002), double(0.0), double(251081840.0), temperature, log_temperature);}
    
double dcall_forward_reaction_182_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(22.300000000000004), double(2.745), double(9271744.0), temperature, log_temperature);}
    
double dcall_forward_reaction_182_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(22.300000000000004), double(2.745), double(9271744.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_183_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(0.555), double(2.36), double(-757304.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(0.555), double(2.36), double(-757304.0), temperature);
        double arrhenius_2 = arrhenius(double(178.00000000000003), double(1.68), double(8619040.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(0.555), double(2.36), double(-757304.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(178.00000000000003), double(1.68), double(8619040.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(178.00000000000003), double(1.68), double(8619040.0), temperature);
        double arrhenius_2 = arrhenius(double(2370000.0000000005), double(0.56), double(25133288.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(178.00000000000003), double(1.68), double(8619040.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(2370000.0000000005), double(0.56), double(25133288.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(2370000.0000000005), double(0.56), double(25133288.0), temperature);
        double arrhenius_2 = arrhenius(double(27600000000.000004), double(-0.5), double(47931904.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(2370000.0000000005), double(0.56), double(25133288.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(27600000000.000004), double(-0.5), double(47931904.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(27600000000.000004), double(-0.5), double(47931904.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_183_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(0.555), double(2.36), double(-757304.0), temperature));
        double log_k2 = log_gen(arrhenius(double(178.00000000000003), double(1.68), double(8619040.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(178.00000000000003), double(1.68), double(8619040.0), temperature));
        double log_k2 = log_gen(arrhenius(double(2370000.0000000005), double(0.56), double(25133288.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(2370000.0000000005), double(0.56), double(25133288.0), temperature));
        double log_k2 = log_gen(arrhenius(double(27600000000.000004), double(-0.5), double(47931904.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_184_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3790000000.0000005), double(0.0), double(74747160.0), temperature, log_temperature);}
    
double dcall_forward_reaction_184_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3790000000.0000005), double(0.0), double(74747160.0), temperature, log_temperature);}
    
double dcall_forward_reaction_185_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(60200.00000000001), double(1.56), double(69579920.0), temperature, log_temperature);}
    
double dcall_forward_reaction_185_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(60200.00000000001), double(1.56), double(69579920.0), temperature, log_temperature);}
    
double
dcall_forward_reaction_186_dtemperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dtemperature(double(1.9900000000000005e+35), double(-7.08), double(27970040.0), double(521000000000000.06), double(-0.99), double(6610720.0), double(0.842), double(2219.0), double(6882.0), double(125.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
double
dcall_forward_reaction_186_dlog_temperature(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { return dfalloff_troe_dlog_temperature(double(1.9900000000000005e+35), double(-7.08), double(27970040.0), double(521000000000000.06), double(-0.99), double(6610720.0), double(0.842), double(2219.0), double(6882.0), double(125.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]);}
    
Species
dcall_forward_reaction_186_dspecies(const Species& species, const double& temperature, const double& log_temperature, const double& mixture_concentration)  { Species dmixture_concentration_dspecies = {double(2.0), double(1.0), double(1.0), double(1.0), double(1.0), double(6.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(2.0), double(1.5), double(2.0), double(1.0), double(2.5), double(1.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(3.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0), double(1.0)};
return scale_gen(dfalloff_troe_dmixture_concentration(double(1.9900000000000005e+35), double(-7.08), double(27970040.0), double(521000000000000.06), double(-0.99), double(6610720.0), double(0.842), double(2219.0), double(6882.0), double(125.0), temperature, log_temperature, mixture_concentration + (double(2.0)-double(1))*species[0] + (double(6.0)-double(1))*species[5] + (double(2.0)-double(1))*species[11] + (double(1.5)-double(1))*species[12] + (double(2.0)-double(1))*species[13] + (double(2.5)-double(1))*species[15] + (double(3.0)-double(1))*species[18] + (double(3.0)-double(1))*species[20] + (double(3.0)-double(1))*species[22]), dmixture_concentration_dspecies);}
    
double dcall_forward_reaction_187_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1810000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_187_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1810000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_188_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(73700000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_188_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(73700000000.00002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_189_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(58900000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_189_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(58900000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_190_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(15000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_190_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(15000000000.000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_191_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1600000000000.0002), double(-0.609), double(-317984.0), temperature, log_temperature);}
    
double dcall_forward_reaction_191_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1600000000000.0002), double(-0.609), double(-317984.0), temperature, log_temperature);}
    
double dcall_forward_reaction_192_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(14100.000000000004), double(1.09), double(-8263400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_192_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(14100.000000000004), double(1.09), double(-8263400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_193_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(31000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_193_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(31000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_194_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(900000000.0000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_194_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(900000000.0000001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_195_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(5.500000000000001), double(2.81), double(24518240.0), temperature, log_temperature);}
    
double dcall_forward_reaction_195_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(5.500000000000001), double(2.81), double(24518240.0), temperature, log_temperature);}
    
double dcall_forward_reaction_196_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(115000.00000000001), double(1.9), double(31505520.0), temperature, log_temperature);}
    
double dcall_forward_reaction_196_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(115000.00000000001), double(1.9), double(31505520.0), temperature, log_temperature);}
    
double dcall_forward_reaction_197_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(181.00000000000003), double(2.8), double(24279752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_197_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(181.00000000000003), double(2.8), double(24279752.0), temperature, log_temperature);}
    
double dcall_forward_reaction_198_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(729.0000000000001), double(2.5), double(205685440.0), temperature, log_temperature);}
    
double dcall_forward_reaction_198_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(729.0000000000001), double(2.5), double(205685440.0), temperature, log_temperature);}
    
double dcall_forward_reaction_199_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(9150.000000000002), double(2.0), double(4158896.0), temperature, log_temperature);}
    
double dcall_forward_reaction_199_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(9150.000000000002), double(2.0), double(4158896.0), temperature, log_temperature);}
    
double dcall_forward_reaction_200_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(108000000000.00002), double(0.0), double(-1096208.0), temperature, log_temperature);}
    
double dcall_forward_reaction_200_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(108000000000.00002), double(0.0), double(-1096208.0), temperature, log_temperature);}
    
double dcall_forward_reaction_201_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(33000000000.000004), double(0.0), double(-2761440.0), temperature, log_temperature);}
    
double dcall_forward_reaction_201_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(33000000000.000004), double(0.0), double(-2761440.0), temperature, log_temperature);}
    
double dcall_forward_reaction_202_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.0005500000000000001), double(4.0), double(34672808.0), temperature, log_temperature);}
    
double dcall_forward_reaction_202_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.0005500000000000001), double(4.0), double(34672808.0), temperature, log_temperature);}
    
double dcall_forward_reaction_203_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(24000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_203_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(24000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_204_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(12000000000.000002), double(0.0), double(27698080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_204_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(12000000000.000002), double(0.0), double(27698080.0), temperature, log_temperature);}
    
double dcall_forward_reaction_205_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(184500000000.00003), double(-0.39), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_205_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(184500000000.00003), double(-0.39), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_206_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(10000000.000000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_206_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(10000000.000000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_207_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(139000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_207_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(139000000000.00003), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_208_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(170.00000000000003), double(1.7), double(6276000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_208_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(170.00000000000003), double(1.7), double(6276000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_209_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(54500000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_209_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(54500000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_210_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(34500000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_210_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(34500000000.00001), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_211_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(43800000000.00001), double(0.0), double(11439056.0), temperature, log_temperature);}
    
double dcall_forward_reaction_211_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(43800000000.00001), double(0.0), double(11439056.0), temperature, log_temperature);}
    
double dcall_forward_reaction_212_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2000000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_212_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2000000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_213_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2000000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_213_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2000000000.0000002), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_214_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(25000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_214_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(25000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_215_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(25000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_215_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(25000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_216_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(18100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_216_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(18100000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_217_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 8.294633844421448) { return darrhenius_dtemperature(double(3.630000000000001e+33), double(-7.36), double(25267176.0), temperature); }
        else if (8.294633844421448 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(3.630000000000001e+33), double(-7.36), double(25267176.0), temperature);
        double arrhenius_2 = arrhenius(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(3.630000000000001e+33), double(-7.36), double(25267176.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  8.294633844421448, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature);
        double arrhenius_2 = arrhenius(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature);
        double arrhenius_2 = arrhenius(double(1300000000000000.2), double(-1.25), double(6242528.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1300000000000000.2), double(-1.25), double(6242528.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(1300000000000000.2), double(-1.25), double(6242528.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_217_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 8.294633844421448) { return double(0); }
        else if (8.294633844421448 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(3.630000000000001e+33), double(-7.36), double(25267176.0), temperature));
        double log_k2 = log_gen(arrhenius(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 8.294633844421448, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(7.940000000000001e+26), double(-5.06), double(20338424.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(1.0700000000000001e+21), double(-3.15), double(13644024.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1300000000000000.2), double(-1.25), double(6242528.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_218_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_218_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(30000000000.000004), double(0.0), double(0.0), temperature, log_temperature);}
    
double dcall_forward_reaction_219_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(120000000000.00002), double(0.0), double(41074328.0), temperature, log_temperature);}
    
double dcall_forward_reaction_219_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(120000000000.00002), double(0.0), double(41074328.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_220_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 8.294633844421448) { return darrhenius_dtemperature(double(38900000.00000001), double(0.898), double(17212976.0), temperature); }
        else if (8.294633844421448 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(38900000.00000001), double(0.898), double(17212976.0), temperature);
        double arrhenius_2 = arrhenius(double(3460000000.0000005), double(0.442), double(22857192.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(38900000.00000001), double(0.898), double(17212976.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(3460000000.0000005), double(0.442), double(22857192.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  8.294633844421448, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(3460000000.0000005), double(0.442), double(22857192.0), temperature);
        double arrhenius_2 = arrhenius(double(172000000000.00003), double(-0.01), double(29848656.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(3460000000.0000005), double(0.442), double(22857192.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(172000000000.00003), double(-0.01), double(29848656.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(172000000000.00003), double(-0.01), double(29848656.0), temperature);
        double arrhenius_2 = arrhenius(double(1600000000000.0002), double(-0.24), double(37881936.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(172000000000.00003), double(-0.01), double(29848656.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(1600000000000.0002), double(-0.24), double(37881936.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(1600000000000.0002), double(-0.24), double(37881936.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_220_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 8.294633844421448) { return double(0); }
        else if (8.294633844421448 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(38900000.00000001), double(0.898), double(17212976.0), temperature));
        double log_k2 = log_gen(arrhenius(double(3460000000.0000005), double(0.442), double(22857192.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 8.294633844421448, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(3460000000.0000005), double(0.442), double(22857192.0), temperature));
        double log_k2 = log_gen(arrhenius(double(172000000000.00003), double(-0.01), double(29848656.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(172000000000.00003), double(-0.01), double(29848656.0), temperature));
        double log_k2 = log_gen(arrhenius(double(1600000000000.0002), double(-0.24), double(37881936.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

    
double dcall_forward_reaction_221_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(765000.0000000001), double(1.5), double(35982400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_221_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(765000.0000000001), double(1.5), double(35982400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_222_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(7300000000.000001), double(0.0), double(9414000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_222_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(7300000000.000001), double(0.0), double(9414000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_223_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(10000000000.000002), double(0.0), double(9414000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_223_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(10000000000.000002), double(0.0), double(9414000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_224_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1000.0000000000002), double(2.0), double(418400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_224_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1000.0000000000002), double(2.0), double(418400.0), temperature, log_temperature);}
    
double dcall_forward_reaction_225_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1560000000.0000002), double(0.0), double(-1661048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_225_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1560000000.0000002), double(0.0), double(-1661048.0), temperature, log_temperature);}
    
double dcall_forward_reaction_226_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(15000.000000000002), double(1.6), double(64015200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_226_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(15000.000000000002), double(1.6), double(64015200.0), temperature, log_temperature);}
    
double dcall_forward_reaction_227_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(0.06580000000000001), double(3.24), double(32472024.0), temperature, log_temperature);}
    
double dcall_forward_reaction_227_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(0.06580000000000001), double(3.24), double(32472024.0), temperature, log_temperature);}
    
double dcall_forward_reaction_228_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3600.0000000000005), double(2.0), double(-4987328.0), temperature, log_temperature);}
    
double dcall_forward_reaction_228_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3600.0000000000005), double(2.0), double(-4987328.0), temperature, log_temperature);}
    
double dcall_forward_reaction_229_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(3.0800000000000005), double(2.72), double(13146128.0), temperature, log_temperature);}
    
double dcall_forward_reaction_229_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(3.0800000000000005), double(2.72), double(13146128.0), temperature, log_temperature);}
    

double
dcall_forward_reaction_230_dtemperature(const double& temperature, const double& pressure) 
{
        double log_pressure = log_gen(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return darrhenius_dtemperature(double(53000000000.00001), double(-0.09), double(4698632.0), temperature); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double arrhenius_1 = arrhenius(double(53000000000.00001), double(-0.09), double(4698632.0), temperature);
        double arrhenius_2 = arrhenius(double(15000000000.000002), double(0.125), double(12552000.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(53000000000.00001), double(-0.09), double(4698632.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(15000000000.000002), double(0.125), double(12552000.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double arrhenius_1 = arrhenius(double(15000000000.000002), double(0.125), double(12552000.0), temperature);
        double arrhenius_2 = arrhenius(double(5170000.000000001), double(1.19), double(15815520.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(15000000000.000002), double(0.125), double(12552000.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(5170000.000000001), double(1.19), double(15815520.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double arrhenius_1 = arrhenius(double(5170000.000000001), double(1.19), double(15815520.0), temperature);
        double arrhenius_2 = arrhenius(double(450.00000000000006), double(2.43), double(20041360.0), temperature);
        double log_k1 = log_gen(arrhenius_1);
        double log_k2 = log_gen(arrhenius_2); 
        double dlog_k1_dtemperature = log_chain(arrhenius_1,  darrhenius_dtemperature(double(5170000.000000001), double(1.19), double(15815520.0), temperature));
        double dlog_k2_dtemperature = log_chain(arrhenius_2,  darrhenius_dtemperature(double(450.00000000000006), double(2.43), double(20041360.0), temperature)); 
        return dpressure_dependent_arrhenius_dtemperature(log_k1, dlog_k1_dtemperature, log_k2, dlog_k2_dtemperature, log_pressure,  13.828673544490554, 16.1312586374846);
        }

        else { return darrhenius_dtemperature(double(450.00000000000006), double(2.43), double(20041360.0), temperature); }
        return rate;
}

double
dcall_forward_reaction_230_dpressure(const double& temperature, const double& pressure) 
{
        double inv_universal_gas_constant_temperature = inv_gen(universal_gas_constant() * temperature); 
        double log_pressure = log_gen(pressure);
        double dlog_pressure_dpressure = dlog_da(pressure);
        double rate = double(0);
        /**/if (log_pressure < 9.223503358502464) { return double(0); }
        else if (9.223503358502464 <= log_pressure && log_pressure < 11.52608845149651)
        {
        double log_k1 = log_gen(arrhenius(double(53000000000.00001), double(-0.09), double(4698632.0), temperature));
        double log_k2 = log_gen(arrhenius(double(15000000000.000002), double(0.125), double(12552000.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 9.223503358502464, 11.52608845149651);
        }
        else if (11.52608845149651 <= log_pressure && log_pressure < 13.828673544490554)
        {
        double log_k1 = log_gen(arrhenius(double(15000000000.000002), double(0.125), double(12552000.0), temperature));
        double log_k2 = log_gen(arrhenius(double(5170000.000000001), double(1.19), double(15815520.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 11.52608845149651, 13.828673544490554);
        }
        else if (13.828673544490554 <= log_pressure && log_pressure < 16.1312586374846)
        {
        double log_k1 = log_gen(arrhenius(double(5170000.000000001), double(1.19), double(15815520.0), temperature));
        double log_k2 = log_gen(arrhenius(double(450.00000000000006), double(2.43), double(20041360.0), temperature)); 
        return dpressure_dependent_arrhenius_dpressure(log_k1, log_k2, log_pressure, dlog_pressure_dpressure, 13.828673544490554, 16.1312586374846);
        }

        else { return double(0); }
        return rate;
}

