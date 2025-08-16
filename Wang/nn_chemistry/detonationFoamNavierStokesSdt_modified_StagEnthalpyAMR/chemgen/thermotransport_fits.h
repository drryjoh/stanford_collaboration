

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(20621.187048991163), scalar(3.51967579667454e-14), scalar(-8.431675545748645e-17), scalar(6.13884396974235e-20), scalar(-2.0886987527791304e-23), scalar(3.671266389420695e-27), scalar(-3.2398539078752426e-31), scalar(1.139334147508255e-35)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(14347.174807166166), scalar(-1.0913992460258068), scalar(0.0028959961639167223), scalar(-1.3331659868590488e-06), scalar(3.104312691667141e-10), scalar(-3.991981056341427e-14), scalar(2.6988238681679044e-18), scalar(-7.517813940374993e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(1453.340976025479), scalar(-0.3764015218878948), scalar(0.00036637706517099553), scalar(-1.8236479633042422e-07), scalar(5.035676444331408e-11), scalar(-7.687705315841253e-15), scalar(6.085529577831626e-19), scalar(-1.9567731670377542e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(794.9943626577252), scalar(0.49830932383778), scalar(-0.0003043787553975861), scalar(1.1763451247594122e-07), scalar(-2.6817280987226805e-11), scalar(3.548428762305633e-15), scalar(-2.5230195655978164e-19), scalar(7.391941640834654e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(1873.0377487425126), scalar(-0.6469511081797953), scalar(0.0009701393828010816), scalar(-5.064305446504263e-07), scalar(1.3686725706943207e-10), scalar(-2.0284507124727747e-14), scalar(1.564256922046479e-18), scalar(-4.9252843998696945e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(1791.009639026644), scalar(-0.0011416578621790767), scalar(0.0009403928864220311), scalar(-5.741870707526078e-07), scalar(1.6067943093155351e-10), scalar(-2.3996473245208053e-14), scalar(1.8567010154976688e-18), scalar(-5.862323218475164e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(792.6557571451642), scalar(1.0853746095602994), scalar(-0.0006449134517275091), scalar(2.630436519007938e-07), scalar(-6.639675592412608e-11), scalar(9.623326364511453e-15), scalar(-7.333646382158162e-19), scalar(2.2863074134295395e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(825.626296065663), scalar(1.7088049577478235), scalar(-0.0009893879871766505), scalar(3.6601133674325236e-07), scalar(-8.589421542334263e-11), scalar(1.2201767948674654e-14), scalar(-9.403190170357452e-19), scalar(2.959026485155441e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{scalar(520.3042940020802), scalar(-2.286659186939056e-17), scalar(-4.43192258627888e-19), scalar(3.275586861531219e-22), scalar(-9.433544568216208e-26), scalar(1.3068518185125797e-29), scalar(-9.030235331433114e-34), scalar(2.6809088705808543e-38)})};

}


Species 
species_specific_heat_constant_pressure_mass_specific(const scalar& temperature)  
{
    return species_specific_heat_constant_pressure_mass_specific(temperature_monomial(temperature));
}


Species 
dspecies_specific_heat_constant_pressure_mass_specific_dtemperature(const scalar& temperature)  
{
    return species_specific_heat_constant_pressure_mass_specific(dtemperature_monomial_dtemperature(temperature));
}
    

Species 
species_enthalpy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(210118843.07296178), scalar(20621.187048991163), scalar(1.75983789833727e-14), scalar(-2.810558515249548e-17), scalar(1.5347109924355875e-20), scalar(-4.177397505558261e-24), scalar(6.118777315701158e-28), scalar(-4.628362725536061e-32), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-4252202.376380115), scalar(14347.174807166166), scalar(-0.5456996230129034), scalar(0.0009653320546389074), scalar(-3.332914967147622e-07), scalar(6.208625383334281e-11), scalar(-6.653301760569045e-15), scalar(3.855462668811292e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(15154842.869349869), scalar(1453.340976025479), scalar(-0.1882007609439474), scalar(0.00012212568839033185), scalar(-4.5591199082606056e-08), scalar(1.0071352888662816e-11), scalar(-1.2812842193068755e-15), scalar(8.693613682616608e-20), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-256706.70508824385), scalar(794.9943626577252), scalar(0.24915466191889), scalar(-0.00010145958513252871), scalar(2.9408628118985305e-08), scalar(-5.3634561974453606e-12), scalar(5.914047937176056e-16), scalar(-3.6043136651397374e-20), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(1655887.8115693186), scalar(1873.0377487425126), scalar(-0.32347555408989764), scalar(0.0003233797942670272), scalar(-1.2660763616260658e-07), scalar(2.7373451413886414e-11), scalar(-3.3807511874546245e-15), scalar(2.2346527457806845e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-13964700.874348365), scalar(1791.009639026644), scalar(-0.0005708289310895384), scalar(0.0003134642954740104), scalar(-1.4354676768815194e-07), scalar(3.2135886186310705e-11), scalar(-3.999412207534675e-15), scalar(2.6524300221395266e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(93173.82839498302), scalar(792.6557571451642), scalar(0.5426873047801497), scalar(-0.00021497115057583639), scalar(6.576091297519846e-08), scalar(-1.3279351184825217e-11), scalar(1.6038877274185755e-15), scalar(-1.0476637688797375e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-4308855.968629007), scalar(825.626296065663), scalar(0.8544024788739117), scalar(-0.00032979599572555016), scalar(9.150283418581309e-08), scalar(-1.7178843084668527e-11), scalar(2.0336279914457756e-15), scalar(-1.343312881479636e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-155128.7252567202), scalar(520.3042940020802), scalar(-1.143329593469528e-17), scalar(-1.4773075287596266e-19), scalar(8.188967153828048e-23), scalar(-1.8867089136432417e-26), scalar(2.178086364187633e-30), scalar(-1.2900336187761592e-34), scalar(0.0)})};

}


Species 
species_enthalpy_mass_specific(const scalar& temperature)  
{
    return species_enthalpy_mass_specific(temperature_energy_monomial(temperature));
}


Species 
dspecies_enthalpy_mass_specific_dtemperature(const scalar& temperature)  
{
    return species_enthalpy_mass_specific(dtemperature_energy_monomial_dtemperature(temperature));
}
    

Species 
species_internal_energy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(210118843.07296178), scalar(12372.712229394694), scalar(1.75983789833727e-14), scalar(-2.810558515249548e-17), scalar(1.5347109924355875e-20), scalar(-4.177397505558261e-24), scalar(6.118777315701158e-28), scalar(-4.628362725536061e-32), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-4252202.376380115), scalar(10222.937397367932), scalar(-0.5456996230129034), scalar(0.0009653320546389074), scalar(-3.332914967147622e-07), scalar(6.208625383334281e-11), scalar(-6.653301760569045e-15), scalar(3.855462668811292e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(15154842.869349869), scalar(933.6545819912743), scalar(-0.1882007609439474), scalar(0.00012212568839033185), scalar(-4.5591199082606056e-08), scalar(1.0071352888662816e-11), scalar(-1.2812842193068755e-15), scalar(8.693613682616608e-20), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-256706.70508824385), scalar(535.1511656406228), scalar(0.24915466191889), scalar(-0.00010145958513252871), scalar(2.9408628118985305e-08), scalar(-5.3634561974453606e-12), scalar(5.914047937176056e-16), scalar(-3.6043136651397374e-20), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(1655887.8115693186), scalar(1384.1530178579803), scalar(-0.32347555408989764), scalar(0.0003233797942670272), scalar(-1.2660763616260658e-07), scalar(2.7373451413886414e-11), scalar(-3.3807511874546245e-15), scalar(2.2346527457806845e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-13964700.874348365), scalar(1329.4796574472246), scalar(-0.0005708289310895384), scalar(0.0003134642954740104), scalar(-1.4354676768815194e-07), scalar(3.2135886186310705e-11), scalar(-3.999412207534675e-15), scalar(2.6524300221395266e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(93173.82839498302), scalar(540.7481458577244), scalar(0.5426873047801497), scalar(-0.00021497115057583639), scalar(6.576091297519846e-08), scalar(-1.3279351184825217e-11), scalar(1.6038877274185755e-15), scalar(-1.0476637688797375e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-4308855.968629007), scalar(581.1839306233969), scalar(0.8544024788739117), scalar(-0.00032979599572555016), scalar(9.150283418581309e-08), scalar(-1.7178843084668527e-11), scalar(2.0336279914457756e-15), scalar(-1.343312881479636e-19), scalar(0.0)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{scalar(-155128.7252567202), scalar(312.1825764012481), scalar(-1.143329593469528e-17), scalar(-1.4773075287596266e-19), scalar(8.188967153828048e-23), scalar(-1.8867089136432417e-26), scalar(2.178086364187633e-30), scalar(-1.2900336187761592e-34), scalar(0.0)})};

}


Species 
species_internal_energy_mass_specific(const scalar& temperature)  
{
    return species_internal_energy_mass_specific(temperature_energy_monomial(temperature));
}


Species 
dspecies_internal_energy_mass_specific_dtemperature(const scalar& temperature)  
{
    return species_internal_energy_mass_specific(dtemperature_energy_monomial_dtemperature(temperature));
}
    

Species 
species_entropy_mass_specific(const TemperatureEnergyMonomial& temperature_entropy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(-3684.4522405705357), scalar(3.51967579667454e-14), scalar(-4.2158377728743223e-17), scalar(2.04628132324745e-20), scalar(-5.221746881947826e-24), scalar(7.34253277884139e-28), scalar(-5.399756513125404e-32), scalar(1.6276202107260787e-36), scalar(20621.187048991163)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(-16715.016125282615), scalar(-1.0913992460258068), scalar(0.0014479980819583611), scalar(-4.443886622863496e-07), scalar(7.760781729167852e-11), scalar(-7.983962112682854e-15), scalar(4.498039780279841e-19), scalar(-1.0739734200535705e-23), scalar(14347.174807166166)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(1883.7545081976286), scalar(-0.3764015218878948), scalar(0.00018318853258549777), scalar(-6.078826544347474e-08), scalar(1.258919111082852e-11), scalar(-1.5375410631682505e-15), scalar(1.0142549296386043e-19), scalar(-2.7953902386253634e-24), scalar(1453.340976025479)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(1745.6981956248583), scalar(0.49830932383778), scalar(-0.00015218937769879306), scalar(3.9211504158647075e-08), scalar(-6.704320246806701e-12), scalar(7.096857524611266e-16), scalar(-4.205032609329694e-20), scalar(1.055991662976379e-24), scalar(794.9943626577252)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(285.7647400406404), scalar(-0.6469511081797953), scalar(0.0004850696914005408), scalar(-1.688101815501421e-07), scalar(3.421681426735802e-11), scalar(-4.0569014249455495e-15), scalar(2.6070948700774653e-19), scalar(-7.03612057124242e-24), scalar(1873.0377487425126)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(240.5684927720049), scalar(-0.0011416578621790767), scalar(0.00047019644321101556), scalar(-1.9139569025086926e-07), scalar(4.016985773288838e-11), scalar(-4.7992946490416104e-15), scalar(3.0945016924961145e-19), scalar(-8.37474745496452e-24), scalar(1791.009639026644)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(2127.9294050388435), scalar(1.0853746095602994), scalar(-0.00032245672586375456), scalar(8.768121730026461e-08), scalar(-1.659918898103152e-11), scalar(1.9246652729022905e-15), scalar(-1.2222743970263603e-19), scalar(3.2661534477564848e-24), scalar(792.6557571451642)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(1722.759825501099), scalar(1.7088049577478235), scalar(-0.0004946939935883253), scalar(1.2200377891441746e-07), scalar(-2.1473553855835658e-11), scalar(2.4403535897349306e-15), scalar(-1.567198361726242e-19), scalar(4.227180693079201e-24), scalar(825.626296065663)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{scalar(911.5054648024693), scalar(-2.286659186939056e-17), scalar(-2.21596129313944e-19), scalar(1.091862287177073e-22), scalar(-2.358386142054052e-26), scalar(2.6137036370251595e-30), scalar(-1.505039221905519e-34), scalar(3.829869815115506e-39), scalar(520.3042940020802)})};

}


Species 
species_entropy_mass_specific(const scalar& temperature)  
{
    return species_entropy_mass_specific(temperature_entropy_monomial(temperature));
}


Species 
dspecies_entropy_mass_specific_dtemperature(const scalar& temperature)  
{
    return species_entropy_mass_specific(dtemperature_entropy_monomial_dtemperature(temperature));
}
    

Species 
species_gibbs_energy_mole_specific(const TemperatureGibbsMonomial& temperature_gibbs_monomial_sequence)  
{
        return
        Species{
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(211799793.81754547), scalar(24500.084403878194), scalar(-1.7739166015239683e-14), scalar(1.4165214916857724e-17), scalar(-5.1566289345835724e-21), scalar(1.0527041714006817e-24), scalar(-1.2335455068453541e-28), scalar(7.775649378900583e-33), scalar(0.0), scalar(-20786.15654538309)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(-8572439.990782311), scalar(62621.376919816736), scalar(1.1001304399940133), scalar(-0.0009730547110760188), scalar(2.2397188579232015e-07), scalar(-3.129147193200477e-11), scalar(2.6826112698614403e-15), scalar(-1.295435456720594e-19), scalar(0.0), scalar(-28923.90441124699)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(242462331.06672856), scalar(-6886.1861012222225), scalar(3.0110239743422142), scalar(-0.0009769444442784597), scalar(2.4313786470753803e-07), scalar(-4.028289371642909e-11), scalar(4.099853244938143e-15), scalar(-2.318152088469718e-19), scalar(0.0), scalar(-23252.002275431638)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(-8214101.149413627), scalar(-30420.621247282324), scalar(-7.972450872080643), scalar(0.0016232519025353269), scalar(-3.136724275170972e-07), scalar(4.290496785146416e-11), scalar(-3.784754117875191e-15), scalar(1.922180477619022e-19), scalar(0.0), scalar(-25438.229616321893)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(28161684.011359405), scalar(26994.75205899274), scalar(5.5013487484068895), scalar(-0.0027498600805496666), scalar(7.177386894058165e-07), scalar(-1.1638507204899154e-10), scalar(1.1499287089008169e-14), scalar(-6.33412320791535e-19), scalar(0.0), scalar(-31854.752992863912)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(-251574086.2513858), scalar(27931.197249777324), scalar(0.010283483193578033), scalar(-0.0028235296414821486), scalar(8.619983399673523e-07), scalar(-1.4473199741159678e-10), scalar(1.4409882183747444e-14), scalar(-7.963921141473929e-19), scalar(0.0), scalar(-32265.038647064994)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(3075295.3800048097), scalar(-44072.04202237878), scalar(-17.91193718157362), scalar(0.0035476688979530283), scalar(-7.235015645531333e-07), scalar(1.0957456630158525e-10), scalar(-1.0587583666235507e-14), scalar(5.763198392607435e-19), scalar(0.0), scalar(-26162.39592033329)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(-146561426.91694707), scalar(-30515.09987021692), scalar(-29.061645916417238), scalar(0.005608840499304433), scalar(-1.0374591339987487e-06), scalar(1.460802921704788e-10), scalar(-1.3834364500207331e-14), scalar(7.615240725108057e-19), scalar(0.0), scalar(-28082.852834377463)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{scalar(-6197392.574005973), scalar(-15628.486773475548), scalar(4.567601725910765e-16), scalar(2.9509217886973545e-18), scalar(-1.0904974593181016e-21), scalar(1.8843505275011873e-25), scalar(-1.7402910049859197e-29), scalar(8.589473845017928e-34), scalar(0.0), scalar(-20786.156545383103)})};

}


Species 
species_gibbs_energy_mole_specific(const scalar& temperature)  
{
    return species_gibbs_energy_mole_specific(temperature_gibbs_monomial(temperature));
}


Species 
dspecies_gibbs_energy_mole_specific_dtemperature(const scalar& temperature)  
{
    return species_gibbs_energy_mole_specific(temperature_gibbs_monomial(temperature));
}
    

Reactions 
gibbs_reaction(const TemperatureMonomial& log_temperature_monomial_sequence)  
{
        return
        Reactions{
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(5777.507448604752), scalar(-4596.608140645166), scalar(1634.0404085357816), scalar(-333.4039958818644), scalar(41.80953767865211), scalar(-3.199795910101025), scalar(0.13763292552746523), scalar(-0.0025562631834667162)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(161.08482303203039), scalar(-61.89208175680219), scalar(0.296354875094822), scalar(3.735834812050131), scalar(-0.858387227694292), scalar(0.08961534318085926), scalar(-0.0046903912552490315), scalar(0.00010050027158244314)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(161.08482303203039), scalar(-61.89208175680219), scalar(0.296354875094822), scalar(3.735834812050131), scalar(-0.858387227694292), scalar(0.08961534318085926), scalar(-0.0046903912552490315), scalar(0.00010050027158244314)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-3821.3594924857257), scalar(2705.07927570485), scalar(-835.4196913779341), scalar(144.28759095729785), scalar(-14.863543225284262), scalar(0.899784711125229), scalar(-0.02903492505862701), scalar(0.00037172443244621055)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-3982.444315517886), scalar(2766.9713574617917), scalar(-835.7160462530896), scalar(140.55175614526223), scalar(-14.005155997592038), scalar(0.8101693679445447), scalar(-0.024344533803386144), scalar(0.00027122416086393077)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(30126.33921348568), scalar(-22250.06084991872), scalar(7278.588298480849), scalar(-1359.166303704272), scalar(155.6541554002057), scalar(-10.886116408875399), scalar(0.42904719083378884), scalar(-0.00733082353944326)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(30126.33921348568), scalar(-22250.06084991872), scalar(7278.588298480849), scalar(-1359.166303704272), scalar(155.6541554002057), scalar(-10.886116408875399), scalar(0.42904719083378884), scalar(-0.00733082353944326)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-35742.76183906085), scalar(26784.77690880958), scalar(-8912.332352142581), scalar(1696.3061343984255), scalar(-198.3220803065846), scalar(14.175527662159936), scalar(-0.5713705076166228), scalar(0.009987586994494714)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-35742.76183906085), scalar(26784.77690880958), scalar(-8912.332352142581), scalar(1696.3061343984255), scalar(-198.3220803065846), scalar(14.175527662159936), scalar(-0.5713705076166228), scalar(0.009987586994494714)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-29965.254390452897), scalar(22188.16876816122), scalar(-7278.291943605448), scalar(1362.9021385162482), scalar(-156.51254262788947), scalar(10.975731752055365), scalar(-0.43373758208899615), scalar(0.007431323811024882)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(33947.69870597341), scalar(-24955.140125625603), scalar(8114.007989859621), scalar(-1503.4538946617602), scalar(170.51769862551578), scalar(-11.785901120002723), scalar(0.45808211589250974), scalar(-0.007702547971891276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(33947.69870597341), scalar(-24955.140125625603), scalar(8114.007989859621), scalar(-1503.4538946617602), scalar(170.51769862551578), scalar(-11.785901120002723), scalar(0.45808211589250974), scalar(-0.007702547971891276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-12953.783975062475), scalar(9307.914190996255), scalar(-2948.8299153824714), scalar(531.065926275231), scalar(-58.42253630591505), scalar(3.911588151494956), scalar(-0.14723074544525144), scalar(0.0024001856289919713)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-17172.555238425608), scalar(12942.146658924945), scalar(-4329.758383099399), scalar(828.1003774292723), scalar(-97.23161909432183), scalar(6.974528257382962), scalar(-0.28181644538864997), scalar(0.004930637910453441)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-11233.962966788906), scalar(8283.646436522988), scalar(-2695.421619688529), scalar(498.43221635946094), scalar(-56.28046864336467), scalar(3.8643476904628695), scalar(-0.14887391111643808), scalar(0.002474874998569264)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-15216.407282307497), scalar(11050.617793985475), scalar(-3531.137665941904), scalar(638.9839725047882), scalar(-70.28562464096561), scalar(4.6745170584081395), scalar(-0.1732184449198568), scalar(0.0027460991594338287)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-17011.470415391952), scalar(12880.25457716647), scalar(-4329.46202822361), scalar(831.8362122411637), scalar(-98.09000632199447), scalar(7.064143600562057), scalar(-0.28650683664381976), scalar(0.00503113818203435)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-20993.914730909644), scalar(15647.225934628153), scalar(-5165.178074476659), scalar(972.3879683864185), scalar(-112.09516231958573), scalar(7.874312968506554), scalar(-0.31085137044720446), scalar(0.005302362342898276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-20993.914730909644), scalar(15647.225934628153), scalar(-5165.178074476659), scalar(972.3879683864185), scalar(-112.09516231958573), scalar(7.874312968506554), scalar(-0.31085137044720446), scalar(0.005302362342898276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-13622.630441757958), scalar(10659.529167388904), scalar(-3706.0665797077277), scalar(735.9764225223262), scalar(-89.50021162371773), scalar(6.624478568027556), scalar(-0.2749773755054135), scalar(0.0049189543610513526)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-13622.630441757958), scalar(10659.529167388904), scalar(-3706.0665797077277), scalar(735.9764225223262), scalar(-89.50021162371773), scalar(6.624478568027556), scalar(-0.2749773755054135), scalar(0.0049189543610513526)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(15342.451450031465), scalar(-11683.796921862133), scalar(3959.4748754016673), scalar(-768.6101324380969), scalar(91.64227928626838), scalar(-6.671719029059683), scalar(0.2733342098342297), scalar(-0.004844264991474125)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-18605.24725594532), scalar(13271.34320376678), scalar(-4154.533114459331), scalar(734.8437622239796), scalar(-78.87541933929079), scalar(5.1141820909465965), scalar(-0.18474790605844169), scalar(0.002858282980420273)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-3549.924796667556), scalar(2282.617491535857), scalar(-623.6918033915961), scalar(92.1239549069313), scalar(-7.731407470602465), scalar(0.3500496893552991), scalar(-0.006839069883232896), scalar(1.1683549402042662e-05)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-3388.8399736350166), scalar(2220.7254097785367), scalar(-623.3954485162781), scalar(95.85978971892837), scalar(-8.58979469828923), scalar(0.4396650325355216), scalar(-0.011529461138452173), scalar(0.00011218382098389261)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-7371.2842891519895), scalar(4987.696767239427), scalar(-1459.1114947689898), scalar(236.4115458641031), scalar(-22.594950695869166), scalar(1.2498344004790674), scalar(-0.035873994941792796), scalar(0.00038340798184693746)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{scalar(-7371.284289152474), scalar(4987.696767239912), scalar(-1459.1114947691926), scalar(236.4115458641498), scalar(-22.594950695875575), scalar(1.2498344004795934), scalar(-0.035873994941816666), scalar(0.00038340798184740107)})};

}


Reactions 
gibbs_reaction(const scalar& log_temperature)  
{
    return gibbs_reaction(temperature_monomial(log_temperature));
}


Reactions 
dgibbs_reaction_dlog_temperature(const scalar& log_temperature)  
{
    return gibbs_reaction(dtemperature_monomial_dtemperature(log_temperature)); //functionality is the same
}
    