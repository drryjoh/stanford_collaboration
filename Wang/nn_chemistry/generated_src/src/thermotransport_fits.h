

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(20621.187048991163), double(3.51967579667454e-14), double(-8.431675545748645e-17), double(6.13884396974235e-20), double(-2.0886987527791304e-23), double(3.671266389420695e-27), double(-3.2398539078752426e-31), double(1.139334147508255e-35)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(14347.174807166166), double(-1.0913992460258068), double(0.0028959961639167223), double(-1.3331659868590488e-06), double(3.104312691667141e-10), double(-3.991981056341427e-14), double(2.6988238681679044e-18), double(-7.517813940374993e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1453.340976025479), double(-0.3764015218878948), double(0.00036637706517099553), double(-1.8236479633042422e-07), double(5.035676444331408e-11), double(-7.687705315841253e-15), double(6.085529577831626e-19), double(-1.9567731670377542e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(794.9943626577252), double(0.49830932383778), double(-0.0003043787553975861), double(1.1763451247594122e-07), double(-2.6817280987226805e-11), double(3.548428762305633e-15), double(-2.5230195655978164e-19), double(7.391941640834654e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1873.0377487425126), double(-0.6469511081797953), double(0.0009701393828010816), double(-5.064305446504263e-07), double(1.3686725706943207e-10), double(-2.0284507124727747e-14), double(1.564256922046479e-18), double(-4.9252843998696945e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1791.009639026644), double(-0.0011416578621790767), double(0.0009403928864220311), double(-5.741870707526078e-07), double(1.6067943093155351e-10), double(-2.3996473245208053e-14), double(1.8567010154976688e-18), double(-5.862323218475164e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(792.6557571451642), double(1.0853746095602994), double(-0.0006449134517275091), double(2.630436519007938e-07), double(-6.639675592412608e-11), double(9.623326364511453e-15), double(-7.333646382158162e-19), double(2.2863074134295395e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(825.626296065663), double(1.7088049577478235), double(-0.0009893879871766505), double(3.6601133674325236e-07), double(-8.589421542334263e-11), double(1.2201767948674654e-14), double(-9.403190170357452e-19), double(2.959026485155441e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(520.3042940020802), double(-2.286659186939056e-17), double(-4.43192258627888e-19), double(3.275586861531219e-22), double(-9.433544568216208e-26), double(1.3068518185125797e-29), double(-9.030235331433114e-34), double(2.6809088705808543e-38)})};

}


Species 
species_specific_heat_constant_pressure_mass_specific(const double& temperature)  
{
    return species_specific_heat_constant_pressure_mass_specific(temperature_monomial(temperature));
}


Species 
dspecies_specific_heat_constant_pressure_mass_specific_dtemperature(const double& temperature)  
{
    return species_specific_heat_constant_pressure_mass_specific(dtemperature_monomial_dtemperature(temperature));
}
    

Species 
species_enthalpy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(20621.187048991163), double(1.75983789833727e-14), double(-2.810558515249548e-17), double(1.5347109924355875e-20), double(-4.177397505558261e-24), double(6.118777315701158e-28), double(-4.628362725536061e-32), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.376380115), double(14347.174807166166), double(-0.5456996230129034), double(0.0009653320546389074), double(-3.332914967147622e-07), double(6.208625383334281e-11), double(-6.653301760569045e-15), double(3.855462668811292e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869349869), double(1453.340976025479), double(-0.1882007609439474), double(0.00012212568839033185), double(-4.5591199082606056e-08), double(1.0071352888662816e-11), double(-1.2812842193068755e-15), double(8.693613682616608e-20), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70508824385), double(794.9943626577252), double(0.24915466191889), double(-0.00010145958513252871), double(2.9408628118985305e-08), double(-5.3634561974453606e-12), double(5.914047937176056e-16), double(-3.6043136651397374e-20), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.8115693186), double(1873.0377487425126), double(-0.32347555408989764), double(0.0003233797942670272), double(-1.2660763616260658e-07), double(2.7373451413886414e-11), double(-3.3807511874546245e-15), double(2.2346527457806845e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.874348365), double(1791.009639026644), double(-0.0005708289310895384), double(0.0003134642954740104), double(-1.4354676768815194e-07), double(3.2135886186310705e-11), double(-3.999412207534675e-15), double(2.6524300221395266e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82839498302), double(792.6557571451642), double(0.5426873047801497), double(-0.00021497115057583639), double(6.576091297519846e-08), double(-1.3279351184825217e-11), double(1.6038877274185755e-15), double(-1.0476637688797375e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4308855.968629007), double(825.626296065663), double(0.8544024788739117), double(-0.00032979599572555016), double(9.150283418581309e-08), double(-1.7178843084668527e-11), double(2.0336279914457756e-15), double(-1.343312881479636e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-155128.7252567202), double(520.3042940020802), double(-1.143329593469528e-17), double(-1.4773075287596266e-19), double(8.188967153828048e-23), double(-1.8867089136432417e-26), double(2.178086364187633e-30), double(-1.2900336187761592e-34), double(0.0)})};

}


Species 
species_enthalpy_mass_specific(const double& temperature)  
{
    return species_enthalpy_mass_specific(temperature_energy_monomial(temperature));
}


Species 
dspecies_enthalpy_mass_specific_dtemperature(const double& temperature)  
{
    return species_enthalpy_mass_specific(dtemperature_energy_monomial_dtemperature(temperature));
}
    

Species 
species_internal_energy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(12372.712229394694), double(1.75983789833727e-14), double(-2.810558515249548e-17), double(1.5347109924355875e-20), double(-4.177397505558261e-24), double(6.118777315701158e-28), double(-4.628362725536061e-32), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.376380115), double(10222.937397367932), double(-0.5456996230129034), double(0.0009653320546389074), double(-3.332914967147622e-07), double(6.208625383334281e-11), double(-6.653301760569045e-15), double(3.855462668811292e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869349869), double(933.6545819912743), double(-0.1882007609439474), double(0.00012212568839033185), double(-4.5591199082606056e-08), double(1.0071352888662816e-11), double(-1.2812842193068755e-15), double(8.693613682616608e-20), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70508824385), double(535.1511656406228), double(0.24915466191889), double(-0.00010145958513252871), double(2.9408628118985305e-08), double(-5.3634561974453606e-12), double(5.914047937176056e-16), double(-3.6043136651397374e-20), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.8115693186), double(1384.1530178579803), double(-0.32347555408989764), double(0.0003233797942670272), double(-1.2660763616260658e-07), double(2.7373451413886414e-11), double(-3.3807511874546245e-15), double(2.2346527457806845e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.874348365), double(1329.4796574472246), double(-0.0005708289310895384), double(0.0003134642954740104), double(-1.4354676768815194e-07), double(3.2135886186310705e-11), double(-3.999412207534675e-15), double(2.6524300221395266e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82839498302), double(540.7481458577244), double(0.5426873047801497), double(-0.00021497115057583639), double(6.576091297519846e-08), double(-1.3279351184825217e-11), double(1.6038877274185755e-15), double(-1.0476637688797375e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4308855.968629007), double(581.1839306233969), double(0.8544024788739117), double(-0.00032979599572555016), double(9.150283418581309e-08), double(-1.7178843084668527e-11), double(2.0336279914457756e-15), double(-1.343312881479636e-19), double(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-155128.7252567202), double(312.1825764012481), double(-1.143329593469528e-17), double(-1.4773075287596266e-19), double(8.188967153828048e-23), double(-1.8867089136432417e-26), double(2.178086364187633e-30), double(-1.2900336187761592e-34), double(0.0)})};

}


Species 
species_internal_energy_mass_specific(const double& temperature)  
{
    return species_internal_energy_mass_specific(temperature_energy_monomial(temperature));
}


Species 
dspecies_internal_energy_mass_specific_dtemperature(const double& temperature)  
{
    return species_internal_energy_mass_specific(dtemperature_energy_monomial_dtemperature(temperature));
}
    

Species 
species_entropy_mass_specific(const TemperatureEnergyMonomial& temperature_entropy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-3684.4522405705357), double(3.51967579667454e-14), double(-4.2158377728743223e-17), double(2.04628132324745e-20), double(-5.221746881947826e-24), double(7.34253277884139e-28), double(-5.399756513125404e-32), double(1.6276202107260787e-36), double(20621.187048991163)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-16715.016125282615), double(-1.0913992460258068), double(0.0014479980819583611), double(-4.443886622863496e-07), double(7.760781729167852e-11), double(-7.983962112682854e-15), double(4.498039780279841e-19), double(-1.0739734200535705e-23), double(14347.174807166166)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1883.7545081976286), double(-0.3764015218878948), double(0.00018318853258549777), double(-6.078826544347474e-08), double(1.258919111082852e-11), double(-1.5375410631682505e-15), double(1.0142549296386043e-19), double(-2.7953902386253634e-24), double(1453.340976025479)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1745.6981956248583), double(0.49830932383778), double(-0.00015218937769879306), double(3.9211504158647075e-08), double(-6.704320246806701e-12), double(7.096857524611266e-16), double(-4.205032609329694e-20), double(1.055991662976379e-24), double(794.9943626577252)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(285.7647400406404), double(-0.6469511081797953), double(0.0004850696914005408), double(-1.688101815501421e-07), double(3.421681426735802e-11), double(-4.0569014249455495e-15), double(2.6070948700774653e-19), double(-7.03612057124242e-24), double(1873.0377487425126)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(240.5684927720049), double(-0.0011416578621790767), double(0.00047019644321101556), double(-1.9139569025086926e-07), double(4.016985773288838e-11), double(-4.7992946490416104e-15), double(3.0945016924961145e-19), double(-8.37474745496452e-24), double(1791.009639026644)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(2127.9294050388435), double(1.0853746095602994), double(-0.00032245672586375456), double(8.768121730026461e-08), double(-1.659918898103152e-11), double(1.9246652729022905e-15), double(-1.2222743970263603e-19), double(3.2661534477564848e-24), double(792.6557571451642)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1722.759825501099), double(1.7088049577478235), double(-0.0004946939935883253), double(1.2200377891441746e-07), double(-2.1473553855835658e-11), double(2.4403535897349306e-15), double(-1.567198361726242e-19), double(4.227180693079201e-24), double(825.626296065663)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(911.5054648024693), double(-2.286659186939056e-17), double(-2.21596129313944e-19), double(1.091862287177073e-22), double(-2.358386142054052e-26), double(2.6137036370251595e-30), double(-1.505039221905519e-34), double(3.829869815115506e-39), double(520.3042940020802)})};

}


Species 
species_entropy_mass_specific(const double& temperature)  
{
    return species_entropy_mass_specific(temperature_entropy_monomial(temperature));
}


Species 
dspecies_entropy_mass_specific_dtemperature(const double& temperature)  
{
    return species_entropy_mass_specific(dtemperature_entropy_monomial_dtemperature(temperature));
}
    

Species 
species_gibbs_energy_mole_specific(const TemperatureGibbsMonomial& temperature_gibbs_monomial_sequence)  
{
        return
        Species{
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(211799793.81754547), double(24500.084403878194), double(-1.7739166015239683e-14), double(1.4165214916857724e-17), double(-5.1566289345835724e-21), double(1.0527041714006817e-24), double(-1.2335455068453541e-28), double(7.775649378900583e-33), double(0.0), double(-20786.15654538309)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8572439.990782311), double(62621.376919816736), double(1.1001304399940133), double(-0.0009730547110760188), double(2.2397188579232015e-07), double(-3.129147193200477e-11), double(2.6826112698614403e-15), double(-1.295435456720594e-19), double(0.0), double(-28923.90441124699)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(242462331.06672856), double(-6886.1861012222225), double(3.0110239743422142), double(-0.0009769444442784597), double(2.4313786470753803e-07), double(-4.028289371642909e-11), double(4.099853244938143e-15), double(-2.318152088469718e-19), double(0.0), double(-23252.002275431638)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8214101.149413627), double(-30420.621247282324), double(-7.972450872080643), double(0.0016232519025353269), double(-3.136724275170972e-07), double(4.290496785146416e-11), double(-3.784754117875191e-15), double(1.922180477619022e-19), double(0.0), double(-25438.229616321893)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(28161684.011359405), double(26994.75205899274), double(5.5013487484068895), double(-0.0027498600805496666), double(7.177386894058165e-07), double(-1.1638507204899154e-10), double(1.1499287089008169e-14), double(-6.33412320791535e-19), double(0.0), double(-31854.752992863912)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-251574086.2513858), double(27931.197249777324), double(0.010283483193578033), double(-0.0028235296414821486), double(8.619983399673523e-07), double(-1.4473199741159678e-10), double(1.4409882183747444e-14), double(-7.963921141473929e-19), double(0.0), double(-32265.038647064994)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(3075295.3800048097), double(-44072.04202237878), double(-17.91193718157362), double(0.0035476688979530283), double(-7.235015645531333e-07), double(1.0957456630158525e-10), double(-1.0587583666235507e-14), double(5.763198392607435e-19), double(0.0), double(-26162.39592033329)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-146561426.91694707), double(-30515.09987021692), double(-29.061645916417238), double(0.005608840499304433), double(-1.0374591339987487e-06), double(1.460802921704788e-10), double(-1.3834364500207331e-14), double(7.615240725108057e-19), double(0.0), double(-28082.852834377463)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-6197392.574005973), double(-15628.486773475548), double(4.567601725910765e-16), double(2.9509217886973545e-18), double(-1.0904974593181016e-21), double(1.8843505275011873e-25), double(-1.7402910049859197e-29), double(8.589473845017928e-34), double(0.0), double(-20786.156545383103)})};

}


Species 
species_gibbs_energy_mole_specific(const double& temperature)  
{
    return species_gibbs_energy_mole_specific(temperature_gibbs_monomial(temperature));
}


Species 
dspecies_gibbs_energy_mole_specific_dtemperature(const double& temperature)  
{
    return species_gibbs_energy_mole_specific(temperature_gibbs_monomial(temperature));
}
    

Reactions 
gibbs_reaction(const TemperatureMonomial& log_temperature_monomial_sequence)  
{
        return
        Reactions{
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(5777.507448604752), double(-4596.608140645166), double(1634.0404085357816), double(-333.4039958818644), double(41.80953767865211), double(-3.199795910101025), double(0.13763292552746523), double(-0.0025562631834667162)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482303203039), double(-61.89208175680219), double(0.296354875094822), double(3.735834812050131), double(-0.858387227694292), double(0.08961534318085926), double(-0.0046903912552490315), double(0.00010050027158244314)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482303203039), double(-61.89208175680219), double(0.296354875094822), double(3.735834812050131), double(-0.858387227694292), double(0.08961534318085926), double(-0.0046903912552490315), double(0.00010050027158244314)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3821.3594924857257), double(2705.07927570485), double(-835.4196913779341), double(144.28759095729785), double(-14.863543225284262), double(0.899784711125229), double(-0.02903492505862701), double(0.00037172443244621055)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3982.444315517886), double(2766.9713574617917), double(-835.7160462530896), double(140.55175614526223), double(-14.005155997592038), double(0.8101693679445447), double(-0.024344533803386144), double(0.00027122416086393077)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(30126.33921348568), double(-22250.06084991872), double(7278.588298480849), double(-1359.166303704272), double(155.6541554002057), double(-10.886116408875399), double(0.42904719083378884), double(-0.00733082353944326)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(30126.33921348568), double(-22250.06084991872), double(7278.588298480849), double(-1359.166303704272), double(155.6541554002057), double(-10.886116408875399), double(0.42904719083378884), double(-0.00733082353944326)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-35742.76183906085), double(26784.77690880958), double(-8912.332352142581), double(1696.3061343984255), double(-198.3220803065846), double(14.175527662159936), double(-0.5713705076166228), double(0.009987586994494714)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-35742.76183906085), double(26784.77690880958), double(-8912.332352142581), double(1696.3061343984255), double(-198.3220803065846), double(14.175527662159936), double(-0.5713705076166228), double(0.009987586994494714)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-29965.254390452897), double(22188.16876816122), double(-7278.291943605448), double(1362.9021385162482), double(-156.51254262788947), double(10.975731752055365), double(-0.43373758208899615), double(0.007431323811024882)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.69870597341), double(-24955.140125625603), double(8114.007989859621), double(-1503.4538946617602), double(170.51769862551578), double(-11.785901120002723), double(0.45808211589250974), double(-0.007702547971891276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.69870597341), double(-24955.140125625603), double(8114.007989859621), double(-1503.4538946617602), double(170.51769862551578), double(-11.785901120002723), double(0.45808211589250974), double(-0.007702547971891276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-12953.783975062475), double(9307.914190996255), double(-2948.8299153824714), double(531.065926275231), double(-58.42253630591505), double(3.911588151494956), double(-0.14723074544525144), double(0.0024001856289919713)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17172.555238425608), double(12942.146658924945), double(-4329.758383099399), double(828.1003774292723), double(-97.23161909432183), double(6.974528257382962), double(-0.28181644538864997), double(0.004930637910453441)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-11233.962966788906), double(8283.646436522988), double(-2695.421619688529), double(498.43221635946094), double(-56.28046864336467), double(3.8643476904628695), double(-0.14887391111643808), double(0.002474874998569264)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-15216.407282307497), double(11050.617793985475), double(-3531.137665941904), double(638.9839725047882), double(-70.28562464096561), double(4.6745170584081395), double(-0.1732184449198568), double(0.0027460991594338287)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17011.470415391952), double(12880.25457716647), double(-4329.46202822361), double(831.8362122411637), double(-98.09000632199447), double(7.064143600562057), double(-0.28650683664381976), double(0.00503113818203435)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.914730909644), double(15647.225934628153), double(-5165.178074476659), double(972.3879683864185), double(-112.09516231958573), double(7.874312968506554), double(-0.31085137044720446), double(0.005302362342898276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.914730909644), double(15647.225934628153), double(-5165.178074476659), double(972.3879683864185), double(-112.09516231958573), double(7.874312968506554), double(-0.31085137044720446), double(0.005302362342898276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-13622.630441757958), double(10659.529167388904), double(-3706.0665797077277), double(735.9764225223262), double(-89.50021162371773), double(6.624478568027556), double(-0.2749773755054135), double(0.0049189543610513526)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-13622.630441757958), double(10659.529167388904), double(-3706.0665797077277), double(735.9764225223262), double(-89.50021162371773), double(6.624478568027556), double(-0.2749773755054135), double(0.0049189543610513526)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(15342.451450031465), double(-11683.796921862133), double(3959.4748754016673), double(-768.6101324380969), double(91.64227928626838), double(-6.671719029059683), double(0.2733342098342297), double(-0.004844264991474125)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-18605.24725594532), double(13271.34320376678), double(-4154.533114459331), double(734.8437622239796), double(-78.87541933929079), double(5.1141820909465965), double(-0.18474790605844169), double(0.002858282980420273)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3549.924796667556), double(2282.617491535857), double(-623.6918033915961), double(92.1239549069313), double(-7.731407470602465), double(0.3500496893552991), double(-0.006839069883232896), double(1.1683549402042662e-05)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3388.8399736350166), double(2220.7254097785367), double(-623.3954485162781), double(95.85978971892837), double(-8.58979469828923), double(0.4396650325355216), double(-0.011529461138452173), double(0.00011218382098389261)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-7371.2842891519895), double(4987.696767239427), double(-1459.1114947689898), double(236.4115458641031), double(-22.594950695869166), double(1.2498344004790674), double(-0.035873994941792796), double(0.00038340798184693746)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-7371.284289152474), double(4987.696767239912), double(-1459.1114947691926), double(236.4115458641498), double(-22.594950695875575), double(1.2498344004795934), double(-0.035873994941816666), double(0.00038340798184740107)})};

}


Reactions 
gibbs_reaction(const double& log_temperature)  
{
    return gibbs_reaction(temperature_monomial(log_temperature));
}


Reactions 
dgibbs_reaction_dlog_temperature(const double& log_temperature)  
{
    return gibbs_reaction(dtemperature_monomial_dtemperature(log_temperature)); //functionality is the same
}
    