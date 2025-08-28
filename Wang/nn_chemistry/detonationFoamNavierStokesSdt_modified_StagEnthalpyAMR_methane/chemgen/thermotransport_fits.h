

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(14347.1748071665), double(-1.091399246027332), double(0.002895996163918725), double(-1.3331659868603208e-06), double(3.104312691671378e-10), double(-3.991981056349026e-14), double(2.698823868174824e-18), double(-7.517813940400042e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(20621.187048991156), double(6.582398418921332e-14), double(-9.090124827859036e-17), double(5.3561736571070523e-20), double(-1.6265832480553686e-23), double(2.6623768207979014e-27), double(-2.2294116274597625e-31), double(7.492585075460054e-36)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(794.9943626577067), double(0.4983093238378681), double(-0.00030437875539769904), double(1.1763451247601343e-07), double(-2.6817280987251326e-11), double(3.548428762310129e-15), double(-2.5230195656019976e-19), double(7.391941640850042e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1453.3409760254558), double(-0.3764015218878347), double(0.00036637706517090413), double(-1.8236479633037758e-07), double(5.03567644433033e-11), double(-7.687705315840156e-15), double(6.08552957783131e-19), double(-1.9567731670378477e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1873.0377487424917), double(-0.6469511081797913), double(0.000970139382801059), double(-5.064305446504356e-07), double(1.3686725706944512e-10), double(-2.028450712473184e-14), double(1.564256922046993e-18), double(-4.9252843998719897e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(792.6557571451518), double(1.0853746095604144), double(-0.0006449134517276417), double(2.6304365190088393e-07), double(-6.639675592415904e-11), double(9.623326364517933e-15), double(-7.333646382164539e-19), double(2.2863074134319936e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1791.009639026612), double(-0.0011416578621367796), double(0.0009403928864219442), double(-5.741870707525838e-07), double(1.6067943093155824e-10), double(-2.399647324521114e-14), double(1.856701015498132e-18), double(-5.862323218477396e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1784.5354923248483), double(2.7561824304113127), double(-0.0005924047490103493), double(-9.434690750170931e-08), double(6.486105141618283e-11), double(-1.162204244371667e-14), double(9.353840014870775e-19), double(-3.0454452751851934e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(968.2348816621175), double(4.427439689815574), double(-0.0006448097405594782), double(-3.5778786733810217e-07), double(1.7619934671719027e-10), double(-3.1301733169564516e-14), double(2.601278226581902e-18), double(-8.674323250268036e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(983.8440000320154), double(0.1380448056071741), double(0.00015218164668034267), double(-1.347143669040905e-07), double(4.365526854596915e-11), double(-7.040180469137029e-15), double(5.690165744581192e-19), double(-1.85892148190887e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(499.7810613160576), double(1.4509698170607914), double(-0.0010719236358760211), double(4.519292011665134e-07), double(-1.1291461918779647e-10), double(1.6424097823598056e-14), double(-1.2720906002853593e-18), double(4.019841055713309e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(612.8505948412084), double(2.1561259763492684), double(-0.000888903290232043), double(1.736204411554805e-07), double(-1.4163871590960333e-11), double(-7.796322866645417e-17), double(8.455912788198875e-20), double(-4.690802969079185e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1004.5620761483193), double(0.03890036930090808), double(0.00024954350531365606), double(-1.7956537214538675e-07), double(5.494811529964461e-11), double(-8.641085321240347e-15), double(6.890583381060713e-19), double(-2.2280133527013002e-23)})};

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
        contract(temperature_monomial_sequence, TemperatureMonomial{double(10222.937397368267), double(-1.091399246027332), double(0.002895996163918725), double(-1.3331659868603208e-06), double(3.104312691671378e-10), double(-3.991981056349026e-14), double(2.698823868174824e-18), double(-7.517813940400042e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(12372.712229394687), double(6.582398418921332e-14), double(-9.090124827859036e-17), double(5.3561736571070523e-20), double(-1.6265832480553686e-23), double(2.6623768207979014e-27), double(-2.2294116274597625e-31), double(7.492585075460054e-36)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(535.1511656406044), double(0.4983093238378681), double(-0.00030437875539769904), double(1.1763451247601343e-07), double(-2.6817280987251326e-11), double(3.548428762310129e-15), double(-2.5230195656019976e-19), double(7.391941640850042e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(933.6545819912511), double(-0.3764015218878347), double(0.00036637706517090413), double(-1.8236479633037758e-07), double(5.03567644433033e-11), double(-7.687705315840156e-15), double(6.08552957783131e-19), double(-1.9567731670378477e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1384.1530178579594), double(-0.6469511081797913), double(0.000970139382801059), double(-5.064305446504356e-07), double(1.3686725706944512e-10), double(-2.028450712473184e-14), double(1.564256922046993e-18), double(-4.9252843998719897e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(540.748145857712), double(1.0853746095604144), double(-0.0006449134517276417), double(2.6304365190088393e-07), double(-6.639675592415904e-11), double(9.623326364517933e-15), double(-7.333646382164539e-19), double(2.2863074134319936e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1329.4796574471925), double(-0.0011416578621367796), double(0.0009403928864219442), double(-5.741870707525838e-07), double(1.6067943093155824e-10), double(-2.399647324521114e-14), double(1.856701015498132e-18), double(-5.862323218477396e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1231.52833448293), double(2.7561824304113127), double(-0.0005924047490103493), double(-9.434690750170931e-08), double(6.486105141618283e-11), double(-1.162204244371667e-14), double(9.353840014870775e-19), double(-3.0454452751851934e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(449.973794698754), double(4.427439689815574), double(-0.0006448097405594782), double(-3.5778786733810217e-07), double(1.7619934671719027e-10), double(-3.1301733169564516e-14), double(2.601278226581902e-18), double(-8.674323250268036e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(687.0049204835241), double(0.1380448056071741), double(0.00015218164668034267), double(-1.347143669040905e-07), double(4.365526854596915e-11), double(-7.040180469137029e-15), double(5.690165744581192e-19), double(-1.85892148190887e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(310.8546458521016), double(1.4509698170607914), double(-0.0010719236358760211), double(4.519292011665134e-07), double(-1.1291461918779647e-10), double(1.6424097823598056e-14), double(-1.2720906002853593e-18), double(4.019841055713309e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(335.9418285002625), double(2.1561259763492684), double(-0.000888903290232043), double(1.736204411554805e-07), double(-1.4163871590960333e-11), double(-7.796322866645417e-17), double(8.455912788198875e-20), double(-4.690802969079185e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(707.7653809904255), double(0.03890036930090808), double(0.00024954350531365606), double(-1.7956537214538675e-07), double(5.494811529964461e-11), double(-8.641085321240347e-15), double(6.890583381060713e-19), double(-2.2280133527013002e-23)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.375795732), double(14347.1748071665), double(-0.545699623013666), double(0.000965332054639575), double(-3.332914967150802e-07), double(6.208625383342756e-11), double(-6.65330176058171e-15), double(3.855462668821177e-19), double(-9.397267425500052e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(20621.187048991156), double(3.291199209460666e-14), double(-3.0300416092863456e-17), double(1.3390434142767631e-20), double(-3.2531664961107373e-24), double(4.437294701329835e-28), double(-3.1848737535139464e-32), double(9.365731344325067e-37)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514570572), double(794.9943626577067), double(0.24915466191893404), double(-0.00010145958513256635), double(2.9408628119003357e-08), double(-5.3634561974502655e-12), double(5.914047937183548e-16), double(-3.604313665145711e-20), double(9.239927051062553e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869501993), double(1453.3409760254558), double(-0.18820076094391736), double(0.0001221256883903014), double(-4.5591199082594396e-08), double(1.007135288866066e-11), double(-1.2812842193066926e-15), double(8.693613682616156e-20), double(-2.4459664587973096e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.8119522124), double(1873.0377487424917), double(-0.32347555408989564), double(0.00032337979426701966), double(-1.266076361626089e-07), double(2.7373451413889025e-11), double(-3.3807511874553064e-15), double(2.234652745781419e-19), double(-6.156605499839987e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82821724686), double(792.6557571451518), double(0.5426873047802072), double(-0.00021497115057588057), double(6.576091297522098e-08), double(-1.3279351184831808e-11), double(1.6038877274196554e-15), double(-1.0476637688806485e-19), double(2.857884266789992e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892624), double(1791.009639026612), double(-0.0005708289310683898), double(0.0003134642954739814), double(-1.4354676768814596e-07), double(3.213588618631165e-11), double(-3.9994122075351895e-15), double(2.6524300221401887e-19), double(-7.327904023096744e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(9108049.739128247), double(1784.5354923248483), double(1.3780912152056564), double(-0.00019746824967011644), double(-2.3586726875427328e-08), double(1.2972210283236567e-11), double(-1.937007073952778e-15), double(1.3362628592672536e-19), double(-3.806806593981492e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-5129117.340336343), double(968.2348816621175), double(2.213719844907787), double(-0.00021493658018649272), double(-8.944696683452554e-08), double(3.523986934343806e-11), double(-5.216955528260753e-15), double(3.71611175225986e-19), double(-1.0842904062835044e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4246635.755496562), double(983.8440000320154), double(0.06902240280358705), double(5.072721556011422e-05), double(-3.367859172602262e-08), double(8.731053709193829e-12), double(-1.1733634115228382e-15), double(8.12880820654456e-20), double(-2.3236518523860876e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-9146400.682877216), double(499.7810613160576), double(0.7254849085303957), double(-0.00035730787862534036), double(1.1298230029162835e-07), double(-2.2582923837559295e-11), double(2.737349637266343e-15), double(-1.8172722861219417e-19), double(5.024801319641636e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-3906665.380921125), double(612.8505948412084), double(1.0780629881746342), double(-0.00029630109674401434), double(4.3405110288870124e-08), double(-2.8327743181920664e-12), double(-1.2993871444409028e-17), double(1.2079875411712679e-20), double(-5.863503711348981e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-303114.78773338697), double(1004.5620761483193), double(0.01945018465045404), double(8.318116843788536e-05), double(-4.489134303634669e-08), double(1.0989623059928923e-11), double(-1.4401808868733911e-15), double(9.843690544372447e-20), double(-2.7850166908766252e-24)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.375795732), double(10222.937397368267), double(-0.545699623013666), double(0.000965332054639575), double(-3.332914967150802e-07), double(6.208625383342756e-11), double(-6.65330176058171e-15), double(3.855462668821177e-19), double(-9.397267425500052e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(12372.712229394687), double(3.291199209460666e-14), double(-3.0300416092863456e-17), double(1.3390434142767631e-20), double(-3.2531664961107373e-24), double(4.437294701329835e-28), double(-3.1848737535139464e-32), double(9.365731344325067e-37)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514570572), double(535.1511656406044), double(0.24915466191893404), double(-0.00010145958513256635), double(2.9408628119003357e-08), double(-5.3634561974502655e-12), double(5.914047937183548e-16), double(-3.604313665145711e-20), double(9.239927051062553e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869501993), double(933.6545819912511), double(-0.18820076094391736), double(0.0001221256883903014), double(-4.5591199082594396e-08), double(1.007135288866066e-11), double(-1.2812842193066926e-15), double(8.693613682616156e-20), double(-2.4459664587973096e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.8119522124), double(1384.1530178579594), double(-0.32347555408989564), double(0.00032337979426701966), double(-1.266076361626089e-07), double(2.7373451413889025e-11), double(-3.3807511874553064e-15), double(2.234652745781419e-19), double(-6.156605499839987e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82821724686), double(540.748145857712), double(0.5426873047802072), double(-0.00021497115057588057), double(6.576091297522098e-08), double(-1.3279351184831808e-11), double(1.6038877274196554e-15), double(-1.0476637688806485e-19), double(2.857884266789992e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892624), double(1329.4796574471925), double(-0.0005708289310683898), double(0.0003134642954739814), double(-1.4354676768814596e-07), double(3.213588618631165e-11), double(-3.9994122075351895e-15), double(2.6524300221401887e-19), double(-7.327904023096744e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(9108049.739128247), double(1231.52833448293), double(1.3780912152056564), double(-0.00019746824967011644), double(-2.3586726875427328e-08), double(1.2972210283236567e-11), double(-1.937007073952778e-15), double(1.3362628592672536e-19), double(-3.806806593981492e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-5129117.340336343), double(449.973794698754), double(2.213719844907787), double(-0.00021493658018649272), double(-8.944696683452554e-08), double(3.523986934343806e-11), double(-5.216955528260753e-15), double(3.71611175225986e-19), double(-1.0842904062835044e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4246635.755496562), double(687.0049204835241), double(0.06902240280358705), double(5.072721556011422e-05), double(-3.367859172602262e-08), double(8.731053709193829e-12), double(-1.1733634115228382e-15), double(8.12880820654456e-20), double(-2.3236518523860876e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-9146400.682877216), double(310.8546458521016), double(0.7254849085303957), double(-0.00035730787862534036), double(1.1298230029162835e-07), double(-2.2582923837559295e-11), double(2.737349637266343e-15), double(-1.8172722861219417e-19), double(5.024801319641636e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-3906665.380921125), double(335.9418285002625), double(1.0780629881746342), double(-0.00029630109674401434), double(4.3405110288870124e-08), double(-2.8327743181920664e-12), double(-1.2993871444409028e-17), double(1.2079875411712679e-20), double(-5.863503711348981e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-303114.78773338697), double(707.7653809904255), double(0.01945018465045404), double(8.318116843788536e-05), double(-4.489134303634669e-08), double(1.0989623059928923e-11), double(-1.4401808868733911e-15), double(9.843690544372447e-20), double(-2.7850166908766252e-24)})};

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
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-16715.016125284143), double(-1.091399246027332), double(0.0014479980819593625), double(-4.4438866228677363e-07), double(7.760781729178445e-11), double(-7.983962112698052e-15), double(4.498039780291374e-19), double(-1.0739734200571489e-23), double(14347.1748071665)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-3684.4522405705065), double(6.582398418921332e-14), double(-4.545062413929518e-17), double(1.785391219035684e-20), double(-4.0664581201384215e-24), double(5.324753641595802e-28), double(-3.7156860457662706e-32), double(1.0703692964942934e-36), double(20621.187048991156)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1745.698195624942), double(0.4983093238378681), double(-0.00015218937769884952), double(3.921150415867114e-08), double(-6.7043202468128315e-12), double(7.096857524620258e-16), double(-4.2050326093366626e-20), double(1.0559916629785775e-24), double(794.9943626577067)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1883.7545081977478), double(-0.3764015218878347), double(0.00018318853258545207), double(-6.07882654434592e-08), double(1.2589191110825825e-11), double(-1.5375410631680312e-15), double(1.0142549296385517e-19), double(-2.7953902386254967e-24), double(1453.3409760254558)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(285.7647400407586), double(-0.6469511081797913), double(0.0004850696914005295), double(-1.688101815501452e-07), double(3.421681426736128e-11), double(-4.0569014249463676e-15), double(2.607094870078322e-19), double(-7.0361205712457e-24), double(1873.0377487424917)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(2127.9294050388844), double(1.0853746095604144), double(-0.00032245672586382086), double(8.768121730029464e-08), double(-1.659918898103976e-11), double(1.9246652729035866e-15), double(-1.2222743970274232e-19), double(3.2661534477599907e-24), double(792.6557571451518)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(240.56849277217952), double(-0.0011416578621367796), double(0.0004701964432109721), double(-1.913956902508613e-07), double(4.016985773288956e-11), double(-4.799294649042228e-15), double(3.094501692496887e-19), double(-8.374747454967707e-24), double(1791.009639026612)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1941.437683823864), double(2.7561824304113127), double(-0.00029620237450517467), double(-3.144896916723644e-08), double(1.621526285404571e-11), double(-2.324408488743334e-15), double(1.558973335811796e-19), double(-4.350636107407419e-24), double(1784.5354923248483)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(4811.738054796308), double(4.427439689815574), double(-0.0003224048702797391), double(-1.1926262244603406e-07), double(4.404983667929757e-11), double(-6.260346633912903e-15), double(4.335463710969837e-19), double(-1.2391890357525764e-23), double(968.2348816621175)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1404.2702314608605), double(0.1380448056071741), double(7.609082334017133e-05), double(-4.4904788968030164e-08), double(1.0913817136492287e-11), double(-1.4080360938274058e-15), double(9.483609574301987e-20), double(-2.6556021170126716e-24), double(983.8440000320154)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1621.4940109367594), double(1.4509698170607914), double(-0.0005359618179380106), double(1.5064306705550447e-07), double(-2.8228654796949117e-11), double(3.2848195647196113e-15), double(-2.1201510004755989e-19), double(5.742630079590441e-24), double(499.7810613160576)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(3189.159851746198), double(2.1561259763492684), double(-0.0004444516451160215), double(5.787348038516017e-08), double(-3.540967897740083e-12), double(-1.5592645733290834e-17), double(1.409318798033146e-20), double(-6.70114709868455e-25), double(612.8505948412084)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1094.944970051266), double(0.03890036930090808), double(0.00012477175265682803), double(-5.985512404846225e-08), double(1.3737028824911153e-11), double(-1.7282170642480693e-15), double(1.1484305635101187e-19), double(-3.1828762181447146e-24), double(1004.5620761483193)})};

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
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8572439.989604196), double(62621.37691982049), double(1.1001304399955507), double(-0.0009730547110766918), double(2.2397188579253386e-07), double(-3.129147193204749e-11), double(2.682611269866547e-15), double(-1.2954354567239155e-19), double(0.0), double(-28923.904411247666)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(211799793.81754547), double(24500.084403878158), double(-3.317528803136351e-14), double(1.527140971080318e-17), double(-4.499185871969923e-21), double(8.197979570199056e-25), double(-8.945586117880954e-29), double(5.350587905903429e-33), double(0.0), double(-20786.156545383084)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8214101.151252292), double(-30420.621247285595), double(-7.972450872082051), double(0.0016232519025359293), double(-3.136724275172898e-07), double(4.2904967851503386e-11), double(-3.784754117879986e-15), double(1.9221804776222077e-19), double(0.0), double(-25438.2296163213)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(242462331.0691624), double(-6886.1861012245), double(3.0110239743417337), double(-0.000976944444278216), double(2.431378647074759e-07), double(-4.028289371642047e-11), double(4.0998532449375585e-15), double(-2.318152088469598e-19), double(0.0), double(-23252.002275431267)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(28161684.01787128), double(26994.752058990376), double(5.501348748406856), double(-0.0027498600805496024), double(7.177386894058299e-07), double(-1.1638507204900264e-10), double(1.1499287089010488e-14), double(-6.334123207917432e-19), double(0.0), double(-31854.75299286356)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(3075295.37413845), double(-44072.04202238054), double(-17.91193718157552), double(0.0035476688979537573), double(-7.235015645533811e-07), double(1.0957456630163965e-10), double(-1.0587583666242635e-14), double(5.763198392612447e-19), double(0.0), double(-26162.39592033288)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-251574086.24317563), double(27931.1972497736), double(0.010283483193197043), double(-0.002823529641481888), double(8.619983399673164e-07), double(-1.4473199741160108e-10), double(1.44098821837493e-14), double(-7.963921141475917e-19), double(0.0), double(-32265.038647064415)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(136939527.82779318), double(-2359.024449187702), double(-20.719601420617042), double(0.0014844675668951005), double(1.1820881285734993e-07), double(-4.875929540211543e-11), double(5.824580271376008e-15), double(-3.3484520148471927e-19), double(0.0), double(-26830.491127104095)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-82286429.49101596), double(-61661.32140659181), double(-35.51470747185563), double(0.0017241137779659516), double(4.78332562975431e-07), double(-1.4133830596919413e-10), double(1.673912350797746e-14), double(-9.936263473584156e-19), double(0.0), double(-15533.39220650535)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-118948267.51145871), double(-11776.13874232195), double(-1.9333175025284732), double(-0.0007104346539193998), double(3.144457847486311e-07), double(-6.113920359862978e-11), double(6.573181831350943e-15), double(-3.7947986310885515e-19), double(0.0), double(-27557.47044089675)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-402523947.6527434), double(-49365.46519985746), double(-31.927865339514184), double(0.007862381215211304), double(-1.6574126845114237e-06), double(2.4846297379178666e-10), double(-2.409360403729091e-14), double(1.3329389339990087e-18), double(0.0), double(-21994.86472745838)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-117301534.72753769), double(-77356.26174782921), double(-32.36991928293157), double(0.004448368365417887), double(-4.344272805112047e-07), double(2.1264220419508744e-11), double(7.803079679796514e-17), double(-6.045172318534749e-20), double(0.0), double(-18401.45196070212)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8491457.663563102), double(-2531.9863897971472), double(-0.5448774727978195), double(-0.0011651186263094602), double(4.191953612734053e-07), double(-7.696582510021219e-11), double(8.06904547297424e-15), double(-4.5960191151674955e-19), double(0.0), double(-28141.802001219017)})};

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
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(5777.507458293009), double(-4596.608150110862), double(1634.0404124801548), double(-333.4039967906553), double(41.80953780370039), double(-3.199795920378024), double(0.1376329259946133), double(-0.0025562631925278934)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482283663992), double(-61.892081565392424), double(0.2963547951248613), double(3.7358348305228395), double(-0.8583872302425287), double(0.08961534339080018), double(-0.0046903912648148536), double(0.00010050027176841795)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482283663992), double(-61.892081565392424), double(0.2963547951248613), double(3.7358348305228395), double(-0.8583872302425287), double(0.08961534339080018), double(-0.0046903912648148536), double(0.00010050027176841795)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3821.3594948822497), double(2705.0792780217153), double(-835.4196923333136), double(144.28759117514994), double(-14.863543254955578), double(0.899784713539355), double(-0.02903492516728635), double(0.00037172443453363085)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3982.444317719738), double(2766.971359587926), double(-835.7160471287764), double(140.5517563447043), double(-14.005156024723592), double(0.8101693701494153), double(-0.02434453390251037), double(0.00027122416276596176)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(30126.33925222411), double(-22250.060887785017), double(7278.5883142668745), double(-1359.1663073429654), double(155.65415590109114), double(-10.886116450056589), double(0.4290471927064188), double(-0.0073308235757796065)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-29965.2544293834), double(22188.16880621566), double(-7278.2919594700925), double(1362.9021421731068), double(-156.51254313128126), double(10.975731793443082), double(-0.433737583971038), double(0.0074313238475442415)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.69874711556), double(-24955.140165815585), double(8114.008006603839), double(-1503.45389851895), double(170.51769915616057), double(-11.78590116360521), double(0.45808211787412334), double(-0.007702548010321264)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.69874711556), double(-24955.140165815585), double(8114.008006603839), double(-1503.45389851895), double(170.51769915616057), double(-11.78590116360521), double(0.45808211787412334), double(-0.007702548010321264)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-12953.78398718907), double(9307.914202805541), double(-2948.8299202875733), double(531.0659274017969), double(-58.42253646044759), double(3.911588164156548), double(-0.14723074601909006), double(0.002400185640090608)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17172.555265037143), double(12942.146684981408), double(-4329.758393980077), double(828.100379941343), double(-97.231619440667), double(6.974528285901921), double(-0.28181644668741257), double(0.004930637935690583)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-11233.962983908297), double(8283.646453305955), double(-2695.4216267051456), double(498.4322179812944), double(-56.28046886722111), double(3.864347708915716), double(-0.1488739119576619), double(0.0024748750149320583)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-15216.407301624513), double(11050.617812890427), double(-3531.1376738324884), double(638.9839743256695), double(-70.28562489189954), double(4.674517079061435), double(-0.17321844586000523), double(0.0027460991776947943)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17011.470442200927), double(12880.254603416432), double(-4329.462039185129), double(831.8362147719068), double(-98.09000667091519), double(7.064143629293185), double(-0.2865068379522484), double(0.005031138207459413)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.91475992091), double(15647.225963004581), double(-5165.178086314001), double(972.3879711166342), double(-112.09516269564202), double(7.8743129994428775), double(-0.31085137185477174), double(0.005302362370225624)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.91475992091), double(15647.225963004581), double(-5165.178086314001), double(972.3879711166342), double(-112.09516269564202), double(7.8743129994428775), double(-0.31085137185477174), double(0.005302362370225624)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-36761.20160659879), double(27214.11618650045), double(-8930.523946449073), double(1673.8821845620575), double(-192.4364039892267), double(13.50474291158467), double(-0.5335821660842275), double(0.009127696322352333)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-1018.4397189108843), double(429.33923016286224), double(-18.191574494233336), double(-22.42395440275998), double(5.885676945899714), double(-0.6707848022482994), double(0.037788343881961624), double(-0.0008598907177301819)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-6795.947177203351), double(5025.947380273222), double(-1652.2319869741743), double(310.98004238784443), double(-35.92386085779347), double(2.529011118129115), double(-0.09984458211262301), double(0.0016963724747971446)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-6795.947177203351), double(5025.947380273222), double(-1652.2319869741743), double(310.98004238784443), double(-35.92386085779347), double(2.529011118129115), double(-0.09984458211262301), double(0.0016963724747971446)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-18029.910161107848), double(13309.593833575436), double(-4347.653613677763), double(809.4122603687802), double(-92.20432972496526), double(6.393358827040781), double(-0.24871849407010094), double(0.004171247489725633)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(2059.852069061231), double(-1974.4591170953406), double(799.2428017384573), double(-176.65361628712128), double(22.96968132279831), double(-1.7535864609348772), double(0.07259040557403276), double(-0.0012508599813884865)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(2220.9368918980144), double(-2036.3511986608708), double(799.5391565336357), double(-172.9177814566099), double(22.111294092557227), double(-1.6639711175441856), double(0.06790001430922243), double(-0.001150359709620149)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-1761.5074258213929), double(730.6201609267299), double(-36.17689059500163), double(-32.36602511193844), double(8.106138067838266), double(-0.8538017473951611), double(0.043555480406730296), double(-0.0008791355468545486)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-32186.19132129088), double(24224.520004885675), double(-8077.831116007534), double(1535.8199236305927), double(-178.62383722395893), double(12.639702910997164), double(-0.5016375982807108), double(0.008581683557173111)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-22515.387716704947), double(17334.659452055876), double(-5939.221090292286), double(1164.9408734251886), double(-140.31879817695244), double(10.321020352029349), double(-0.4273197929597614), double(0.007655840204632464)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20174.682564811766), double(14845.519653642483), double(-4844.112312645326), double(903.4907195995258), double(-103.56255112017796), double(7.265977637045652), double(-0.2878549916748045), double(0.004950948274196062)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-19232.40733410041), double(14916.605802078759), double(-5129.001195719377), double(1004.7539962286605), double(-120.20130076349254), double(8.728114746839056), double(-0.3544068522615489), double(0.00618149791708109)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3784.096271224015), double(3430.1370991405283), double(-1356.3507575249796), double(300.47094923283095), double(-40.086723912817114), double(3.20963626749579), double(-0.14245612094610327), double(0.0026993913720148163)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(13227.37417097582), double(-9450.11750427482), double(2973.1112816597), double(-531.3652655389741), double(58.00328275808428), double(-3.854507361796281), double(0.1440507170060953), double(-0.0023317468354436396)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-16737.880258414454), double(12738.051301947375), double(-4305.180677813104), double(831.5368766347559), double(-98.50926037328242), double(7.121224431653804), double(-0.28968686696526047), double(0.005099577012106723)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(280.85308283370506), double(-514.6806813197923), double(295.8659759092142), double(-84.79653753870228), double(13.786565733997955), double(-1.3014562540505812), double(0.06687439571100331), double(-0.0014540319490494332)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(2340.7051518947233), double(-2489.1397984149035), double(1095.1087776475717), double(-261.4501538257998), double(36.75624705679288), double(-3.0550427149851718), double(0.13946480128502275), double(-0.0027048919304376528)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(2340.7051518947233), double(-2489.1397984149035), double(1095.1087776475717), double(-261.4501538257998), double(36.75624705679288), double(-3.0550427149851718), double(0.13946480128502275), double(-0.0027048919304376528)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(2340.7051518947233), double(-2489.1397984149035), double(1095.1087776475717), double(-261.4501538257998), double(36.75624705679288), double(-3.0550427149851718), double(0.13946480128502275), double(-0.0027048919304376528)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(2501.7899747311717), double(-2551.0318799801653), double(1095.4051324426566), double(-257.714318995271), double(35.89785982654996), double(-2.9654273715943757), double(0.13477441002020957), double(-0.0026043916586693007)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-1480.6543429855762), double(215.9394796049006), double(259.6890853150512), double(-117.16256265083187), double(21.89270380186226), double(-2.1552580014478613), double(0.11042987611782894), double(-0.002333167495905816)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(19513.26041693528), double(-15431.286483399732), double(5424.867171629085), double(-1089.5505337674751), double(133.98786649750576), double(-10.029571000890874), double(0.42128124797260763), double(-0.0076355298661315825)})};

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
    