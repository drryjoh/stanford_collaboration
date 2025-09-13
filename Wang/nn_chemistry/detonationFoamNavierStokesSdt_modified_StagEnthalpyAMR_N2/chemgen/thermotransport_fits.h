

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1004.5620761483457), double(0.03890036930083176), double(0.0002495435053137401), double(-1.795653721454253e-07), double(5.494811529965266e-11), double(-8.641085321241019e-15), double(6.890583381060699e-19), double(-2.2280133527010924e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(20621.187048991156), double(4.133891519035494e-14), double(-8.11281489112005e-17), double(5.734312912051656e-20), double(-1.923726674616406e-23), double(3.344299217942466e-27), double(-2.92177084122131e-31), double(1.0183314316733606e-35)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(14347.174807167461), double(-1.0913992460317072), double(0.002895996163924696), double(-1.3331659868639612e-06), double(3.104312691682796e-10), double(-3.991981056368183e-14), double(2.698823868191159e-18), double(-7.51781394045563e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1453.3409760254585), double(-0.3764015218878215), double(0.00036637706517086884), double(-1.823647963303426e-07), double(5.035676444328799e-11), double(-7.687705315836865e-15), double(6.085529577827876e-19), double(-1.9567731670364638e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(794.9943626576553), double(0.49830932383810217), double(-0.0003043787553980158), double(1.1763451247620463e-07), double(-2.6817280987310553e-11), double(3.5484287623199257e-15), double(-2.5230195656102213e-19), double(7.39194164087757e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1873.037748742536), double(-0.6469511081801261), double(0.0009701393828014659), double(-5.064305446506564e-07), double(1.368672570695053e-10), double(-2.0284507124740416e-14), double(1.564256922047593e-18), double(-4.9252843998735684e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1791.0096390267026), double(-0.0011416578624864413), double(0.0009403928864223657), double(-5.741870707528069e-07), double(1.6067943093161772e-10), double(-2.3996473245219352e-14), double(1.85670101549868e-18), double(-5.862323218478725e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(792.6557571450785), double(1.0853746095607695), double(-0.0006449134517281142), double(2.63043651901163e-07), double(-6.639675592424366e-11), double(9.623326364531604e-15), double(-7.333646382175725e-19), double(2.2863074134356315e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(825.6262960655588), double(1.708804957748262), double(-0.0009893879871771985), double(3.66011336743584e-07), double(-8.589421542344794e-11), double(1.2201767948692703e-14), double(-9.40319017037319e-19), double(2.9590264851608975e-23)})};

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
species_specific_heat_constant_volume_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(707.7653809904518), double(0.03890036930083176), double(0.0002495435053137401), double(-1.795653721454253e-07), double(5.494811529965266e-11), double(-8.641085321241019e-15), double(6.890583381060699e-19), double(-2.2280133527010924e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(12372.712229394687), double(4.133891519035494e-14), double(-8.11281489112005e-17), double(5.734312912051656e-20), double(-1.923726674616406e-23), double(3.344299217942466e-27), double(-2.92177084122131e-31), double(1.0183314316733606e-35)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(10222.937397369227), double(-1.0913992460317072), double(0.002895996163924696), double(-1.3331659868639612e-06), double(3.104312691682796e-10), double(-3.991981056368183e-14), double(2.698823868191159e-18), double(-7.51781394045563e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(933.6545819912538), double(-0.3764015218878215), double(0.00036637706517086884), double(-1.823647963303426e-07), double(5.035676444328799e-11), double(-7.687705315836865e-15), double(6.085529577827876e-19), double(-1.9567731670364638e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(535.151165640553), double(0.49830932383810217), double(-0.0003043787553980158), double(1.1763451247620463e-07), double(-2.6817280987310553e-11), double(3.5484287623199257e-15), double(-2.5230195656102213e-19), double(7.39194164087757e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1384.1530178580038), double(-0.6469511081801261), double(0.0009701393828014659), double(-5.064305446506564e-07), double(1.368672570695053e-10), double(-2.0284507124740416e-14), double(1.564256922047593e-18), double(-4.9252843998735684e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1329.4796574472832), double(-0.0011416578624864413), double(0.0009403928864223657), double(-5.741870707528069e-07), double(1.6067943093161772e-10), double(-2.3996473245219352e-14), double(1.85670101549868e-18), double(-5.862323218478725e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(540.7481458576386), double(1.0853746095607695), double(-0.0006449134517281142), double(2.63043651901163e-07), double(-6.639675592424366e-11), double(9.623326364531604e-15), double(-7.333646382175725e-19), double(2.2863074134356315e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(581.1839306232927), double(1.708804957748262), double(-0.0009893879871771985), double(3.66011336743584e-07), double(-8.589421542344794e-11), double(1.2201767948692703e-14), double(-9.40319017037319e-19), double(2.9590264851608975e-23)})};

}


Species 
species_specific_heat_constant_volume_mass_specific(const double& temperature)  
{
    return species_specific_heat_constant_volume_mass_specific(temperature_monomial(temperature));
}


Species 
dspecies_specific_heat_constant_volume_mass_specific_dtemperature(const double& temperature)  
{
    return species_specific_heat_constant_volume_mass_specific(dtemperature_monomial_dtemperature(temperature));
}
    

Species 
species_enthalpy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-303114.78773339203), double(1004.5620761483457), double(0.01945018465041588), double(8.318116843791336e-05), double(-4.489134303635632e-08), double(1.0989623059930532e-11), double(-1.4401808868735031e-15), double(9.843690544372428e-20), double(-2.7850166908763655e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(20621.187048991156), double(2.066945759517747e-14), double(-2.70427163037335e-17), double(1.433578228012914e-20), double(-3.8474533492328125e-24), double(5.573832029904109e-28), double(-4.1739583446018713e-32), double(1.2729142895917008e-36)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.375795871), double(14347.174807167461), double(-0.5456996230158536), double(0.0009653320546415653), double(-3.332914967159903e-07), double(6.208625383365593e-11), double(-6.653301760613639e-15), double(3.8554626688445126e-19), double(-9.397267425569537e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869501991), double(1453.3409760254585), double(-0.18820076094391075), double(0.00012212568839028962), double(-4.559119908258565e-08), double(1.0071352888657599e-11), double(-1.2812842193061442e-15), double(8.693613682611251e-20), double(-2.4459664587955798e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514569845), double(794.9943626576553), double(0.24915466191905108), double(-0.00010145958513267194), double(2.940862811905116e-08), double(-5.363456197462111e-12), double(5.914047937199876e-16), double(-3.604313665157459e-20), double(9.239927051096962e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.811952211), double(1873.037748742536), double(-0.32347555409006307), double(0.0003233797942671553), double(-1.266076361626641e-07), double(2.737345141390106e-11), double(-3.380751187456736e-15), double(2.234652745782276e-19), double(-6.1566054998419605e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892639), double(1791.0096390267026), double(-0.0005708289312432207), double(0.0003134642954741219), double(-1.4354676768820173e-07), double(3.2135886186323546e-11), double(-3.999412207536559e-15), double(2.652430022140971e-19), double(-7.327904023098406e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82821725664), double(792.6557571450785), double(0.5426873047803847), double(-0.00021497115057603807), double(6.576091297529076e-08), double(-1.3279351184848732e-11), double(1.6038877274219339e-15), double(-1.0476637688822464e-19), double(2.8578842667945393e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4308855.968859025), double(825.6262960655588), double(0.854402478874131), double(-0.00032979599572573285), double(9.1502834185896e-08), double(-1.7178843084689588e-11), double(2.033627991448784e-15), double(-1.3433128814818845e-19), double(3.698783106451122e-24)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-303114.78773339203), double(707.7653809904518), double(0.01945018465041588), double(8.318116843791336e-05), double(-4.489134303635632e-08), double(1.0989623059930532e-11), double(-1.4401808868735031e-15), double(9.843690544372428e-20), double(-2.7850166908763655e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(12372.712229394687), double(2.066945759517747e-14), double(-2.70427163037335e-17), double(1.433578228012914e-20), double(-3.8474533492328125e-24), double(5.573832029904109e-28), double(-4.1739583446018713e-32), double(1.2729142895917008e-36)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.375795871), double(10222.937397369227), double(-0.5456996230158536), double(0.0009653320546415653), double(-3.332914967159903e-07), double(6.208625383365593e-11), double(-6.653301760613639e-15), double(3.8554626688445126e-19), double(-9.397267425569537e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869501991), double(933.6545819912538), double(-0.18820076094391075), double(0.00012212568839028962), double(-4.559119908258565e-08), double(1.0071352888657599e-11), double(-1.2812842193061442e-15), double(8.693613682611251e-20), double(-2.4459664587955798e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514569845), double(535.151165640553), double(0.24915466191905108), double(-0.00010145958513267194), double(2.940862811905116e-08), double(-5.363456197462111e-12), double(5.914047937199876e-16), double(-3.604313665157459e-20), double(9.239927051096962e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.811952211), double(1384.1530178580038), double(-0.32347555409006307), double(0.0003233797942671553), double(-1.266076361626641e-07), double(2.737345141390106e-11), double(-3.380751187456736e-15), double(2.234652745782276e-19), double(-6.1566054998419605e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892639), double(1329.4796574472832), double(-0.0005708289312432207), double(0.0003134642954741219), double(-1.4354676768820173e-07), double(3.2135886186323546e-11), double(-3.999412207536559e-15), double(2.652430022140971e-19), double(-7.327904023098406e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82821725664), double(540.7481458576386), double(0.5426873047803847), double(-0.00021497115057603807), double(6.576091297529076e-08), double(-1.3279351184848732e-11), double(1.6038877274219339e-15), double(-1.0476637688822464e-19), double(2.8578842667945393e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4308855.968859025), double(581.1839306232927), double(0.854402478874131), double(-0.00032979599572573285), double(9.1502834185896e-08), double(-1.7178843084689588e-11), double(2.033627991448784e-15), double(-1.3433128814818845e-19), double(3.698783106451122e-24)})};

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
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1094.944970051136), double(0.03890036930083176), double(0.00012477175265687004), double(-5.98551240484751e-08), double(1.3737028824913164e-11), double(-1.7282170642482038e-15), double(1.1484305635101165e-19), double(-3.1828762181444178e-24), double(1004.5620761483457)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-3684.4522405705065), double(4.133891519035494e-14), double(-4.056407445560025e-17), double(1.911437637350552e-20), double(-4.809316686541015e-24), double(6.688598435884931e-28), double(-4.8696180687021834e-32), double(1.454759188104801e-36), double(20621.187048991156)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-16715.016125288545), double(-1.0913992460317072), double(0.001447998081962348), double(-4.4438866228798706e-07), double(7.76078172920699e-11), double(-7.983962112736367e-15), double(4.498039780318598e-19), double(-1.0739734200650899e-23), double(14347.174807167461)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1883.7545081977287), double(-0.3764015218878215), double(0.00018318853258543442), double(-6.078826544344753e-08), double(1.2589191110821998e-11), double(-1.5375410631673731e-15), double(1.0142549296379793e-19), double(-2.7953902386235197e-24), double(1453.3409760254585)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1745.6981956251775), double(0.49830932383810217), double(-0.0001521893776990079), double(3.9211504158734876e-08), double(-6.704320246827638e-12), double(7.096857524639851e-16), double(-4.2050326093503686e-20), double(1.05599166298251e-24), double(794.9943626576553)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(285.7647400405913), double(-0.6469511081801261), double(0.00048506969140073297), double(-1.688101815502188e-07), double(3.4216814267376325e-11), double(-4.056901424948083e-15), double(2.607094870079322e-19), double(-7.036120571247954e-24), double(1873.037748742536)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(240.56849277175024), double(-0.0011416578624864413), double(0.00047019644321118285), double(-1.9139569025093564e-07), double(4.016985773290443e-11), double(-4.7992946490438705e-15), double(3.0945016924977997e-19), double(-8.374747454969607e-24), double(1791.0096390267026)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(2127.9294050392155), double(1.0853746095607695), double(-0.0003224567258640571), double(8.768121730038767e-08), double(-1.6599188981060915e-11), double(1.9246652729063208e-15), double(-1.2222743970292875e-19), double(3.266153447765188e-24), double(792.6557571450785)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1722.7598255015846), double(1.708804957748262), double(-0.0004946939935885992), double(1.22003778914528e-07), double(-2.1473553855861986e-11), double(2.4403535897385404e-15), double(-1.5671983617288652e-19), double(4.227180693086996e-24), double(825.6262960655588)})};

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
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8491457.663563244), double(-2531.986389792765), double(-0.5448774727967505), double(-0.0011651186263098526), double(4.191953612734953e-07), double(-7.696582510022346e-11), double(8.069045472974869e-15), double(-4.596019115167486e-19), double(0.0), double(-28141.802001219756)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(211799793.81754547), double(24500.084403878158), double(-2.083481325593889e-14), double(1.3629529017081685e-17), double(-4.81682284612339e-21), double(9.695582440066684e-25), double(-1.1236845372286692e-28), double(7.012250018931144e-33), double(0.0), double(-20786.156545383084)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8572439.989604477), double(62621.3769198313), double(1.100130439999961), double(-0.000973054711078698), double(2.2397188579314542e-07), double(-3.129147193216258e-11), double(2.682611269879421e-15), double(-1.2954354567317562e-19), double(0.0), double(-28923.9044112496)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(242462331.06916237), double(-6886.186101224151), double(3.011023974341628), double(-0.0009769444442781219), double(2.431378647074292e-07), double(-4.028289371640822e-11), double(4.099853244935803e-15), double(-2.31815208846829e-19), double(0.0), double(-23252.00227543131)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8214101.151252059), double(-30420.621247294777), double(-7.972450872085797), double(0.0016232519025376182), double(-3.136724275177996e-07), double(4.2904967851598144e-11), double(-3.784754117890435e-15), double(1.9221804776284728e-19), double(0.0), double(-25438.229616319655)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(28161684.017871253), double(26994.752058993978), double(5.501348748409703), double(-0.002749860080550756), double(7.177386894061427e-07), double(-1.1638507204905382e-10), double(1.1499287089015349e-14), double(-6.33412320791986e-19), double(0.0), double(-31854.752992864313)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-251574086.2431759), double(27931.19724978297), double(0.01028348319634662), double(-0.0028235296414831535), double(8.619983399676512e-07), double(-1.4473199741165464e-10), double(1.440988218375423e-14), double(-7.963921141478266e-19), double(0.0), double(-32265.03864706605)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(3075295.3741387725), double(-44072.042022393885), double(-17.91193718158138), double(0.0035476688979563568), double(-7.235015645541487e-07), double(1.0957456630177928e-10), double(-1.0587583666257677e-14), double(5.763198392621237e-19), double(0.0), double(-26162.395920330462)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-146561426.9247709), double(-30515.099870236983), double(-29.061645916424695), double(0.005608840499307539), double(-1.0374591339996887e-06), double(1.460802921706579e-10), double(-1.3834364500227796e-14), double(7.615240725120803e-19), double(0.0), double(-28082.85283437392)})};

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
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(5777.507445722326), double(-4596.608137861095), double(1634.040407388708), double(-333.4039956205059), double(41.809537643082635), double(-3.19979590720935), double(0.13763292539742855), double(-0.0025562631809711587)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482310891063), double(-61.892081832066765), double(0.29635490651693625), double(3.735834804797536), double(-0.8583872266946929), double(0.08961534309858284), double(-0.004690391251503927), double(0.00010050027150970926)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482310891063), double(-61.892081832066765), double(0.29635490651693625), double(3.735834804797536), double(-0.8583872266946929), double(0.08961534309858284), double(-0.004690391251503927), double(0.00010050027150970926)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3821.3594919476373), double(2705.0792752010916), double(-835.419691176937), double(144.28759091298838), double(-14.863543219455273), double(0.8997847106676252), double(-0.02903492503877682), double(0.0003717244320791551)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3982.4443150573584), double(2766.9713570339554), double(-835.7160460837866), double(140.55175610826745), double(-14.005155992771108), double(0.8101693675699059), double(-0.024344533787312064), double(0.0002712241605702038)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(30126.33920239763), double(-22250.06083921155), double(7278.588294070216), double(-1359.1663026994845), double(155.65415526347886), double(-10.88611639776134), double(0.4290471903340505), double(-0.0073308235298536195)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-35742.76182501787), double(26784.77689524712), double(-8912.33234655511), double(1696.3061331254069), double(-198.32208013334093), double(14.175527648076192), double(-0.5713705069832955), double(0.009987586982340521)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-29965.254379296413), double(22188.168757386953), double(-7278.291939166773), double(1362.9021375049813), double(-156.5125424902686), double(10.97573174086764), double(-0.4337375815859014), double(0.00743132380136999)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.6986943496), double(-24955.140114416794), double(8114.007985248866), double(-1503.453893612865), double(170.51769848298773), double(-11.785901108433334), double(0.45808211537302446), double(-0.007702547961936567)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.6986943496), double(-24955.140114416794), double(8114.007985248866), double(-1503.453893612865), double(170.51769848298773), double(-11.785901108433334), double(0.45808211537302446), double(-0.007702547961936567)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-12953.783971696683), double(9307.914187771901), double(-2948.829914064903), double(531.0659259774936), double(-58.42253626572797), double(3.911588148254794), double(-0.14723074530074562), double(0.0024001856262416492)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17172.55523070933), double(12942.146651447769), double(-4329.758380008658), double(828.1003767227534), double(-97.23161899785477), double(6.974528249514993), double(-0.28181644503368514), double(0.004930637903619276)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-11233.962961876081), double(8283.646431752628), double(-2695.421617712622), double(498.43221590686176), double(-56.28046858144201), double(3.8643476854022247), double(-0.14887391088767132), double(0.0024748749941561213)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-15216.407276938451), double(11050.617788791416), double(-3531.137663798409), double(638.9839720155868), double(-70.28562457427569), double(4.67451705297724), double(-0.1732184446752142), double(0.0027460991547307756)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17011.47040759973), double(12880.254569615006), double(-4329.462025101862), double(831.8362115274882), double(-98.09000622454097), double(7.064143592612893), double(-0.28650683628515866), double(0.005031138175128398)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.91472265714), double(15647.225926649087), double(-5165.178071185709), double(972.387967635772), double(-112.09516221731472), double(7.874312960183047), double(-0.31085137007248315), double(0.00530236233569887)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.91472265714), double(15647.225926649087), double(-5165.178071185709), double(972.387967635772), double(-112.09516221731472), double(7.874312960183047), double(-0.31085137007248315), double(0.00530236233569887)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-13622.630433887862), double(10659.529159738644), double(-3706.066576535577), double(735.9764217949644), double(-89.50021152410329), double(6.624478559878592), double(-0.2749773751366884), double(0.0049189543539316545)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-13622.630433887862), double(10659.529159738644), double(-3706.066576535577), double(735.9764217949644), double(-89.50021152410329), double(6.624478559878592), double(-0.2749773751366884), double(0.0049189543539316545)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(15342.451443703925), double(-11683.796915753464), double(3959.4748728860077), double(-768.6101318651719), double(91.64227920833116), double(-6.671719022726412), double(0.2733342095495479), double(-0.0048442649860130456)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-18605.2472506453), double(13271.343198662986), double(-4154.5331123627175), double(734.8437617476607), double(-78.8754192746521), double(5.114182085706557), double(-0.18474790582346007), double(0.00285828297592321)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3549.9247968226364), double(2282.617491710258), double(-623.6918034735675), double(92.12395492790411), double(-7.731407473767643), double(0.35004968963775884), double(-0.006839069897059649), double(1.1683549688856898e-05)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3388.839973712653), double(2220.725409877137), double(-623.3954485666104), double(95.85978973260016), double(-8.589794700448362), double(0.4396650327351932), double(-0.011529461148511413), double(0.00011218382119755564)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-7371.284288769209), double(4987.696766910296), double(-1459.1114946500622), double(236.41154584079004), double(-22.594950693208744), double(1.2498344003042134), double(-0.03587399493578303), double(0.0003834079817669704)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-7371.284288769209), double(4987.696766910296), double(-1459.1114946500622), double(236.41154584079004), double(-22.594950693208744), double(1.2498344003042134), double(-0.03587399493578303), double(0.0003834079817669704)})};

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
    