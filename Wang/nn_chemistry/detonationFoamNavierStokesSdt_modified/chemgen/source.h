
        
        Species source(const Species& species, const scalar& temperature)  
        {
            Species net_production_rates = {scalar(0)};
            scalar inv_universal_gas_constant_temperature  = inv_gen(universal_gas_constant() * temperature);
            scalar log_temperature = log_gen(temperature);
            Reactions gibbs_reactions = gibbs_reaction(log_temperature);
            scalar pressure_ = pressure(species, temperature);
            scalar mixture_concentration = pressure_ * inv_universal_gas_constant_temperature;
        scalar forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        scalar forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        scalar forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        scalar forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        scalar forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        scalar forward_reaction_5 =  call_forward_reaction_5(species, temperature, log_temperature, mixture_concentration);
        scalar forward_reaction_6 =  call_forward_reaction_6(species, temperature, log_temperature, species[8]);
        scalar forward_reaction_7 =  call_forward_reaction_7(species, temperature, log_temperature, mixture_concentration);
        scalar forward_reaction_8 =  call_forward_reaction_8(species, temperature, log_temperature, species[8]);
        scalar forward_reaction_9 =  call_forward_reaction_9(species, temperature, log_temperature, mixture_concentration);
        scalar forward_reaction_10 =  call_forward_reaction_10(species, temperature, log_temperature, mixture_concentration);
        scalar forward_reaction_11 =  call_forward_reaction_11(species, temperature, log_temperature, species[5]);
        scalar forward_reaction_12 =  call_forward_reaction_12(species, temperature, log_temperature, mixture_concentration);
        scalar forward_reaction_13 = call_forward_reaction_13(temperature, log_temperature);
        scalar forward_reaction_14 = call_forward_reaction_14(temperature, log_temperature);
        scalar forward_reaction_15 = call_forward_reaction_15(temperature, log_temperature);
        scalar forward_reaction_16 = call_forward_reaction_16(temperature, log_temperature);
        scalar forward_reaction_17 = call_forward_reaction_17(temperature, log_temperature);
        scalar forward_reaction_18 = call_forward_reaction_18(temperature, log_temperature);
        scalar forward_reaction_19 = call_forward_reaction_19(temperature, log_temperature);
        scalar forward_reaction_20 = call_forward_reaction_20(temperature, log_temperature);
        scalar forward_reaction_21 =  call_forward_reaction_21(species, temperature, log_temperature, mixture_concentration);
        scalar forward_reaction_22 = call_forward_reaction_22(temperature, log_temperature);
        scalar forward_reaction_23 = call_forward_reaction_23(temperature, log_temperature);
        scalar forward_reaction_24 = call_forward_reaction_24(temperature, log_temperature);
        scalar forward_reaction_25 = call_forward_reaction_25(temperature, log_temperature);
        scalar forward_reaction_26 = call_forward_reaction_26(temperature, log_temperature);
        scalar equilibrium_constant_0 = multiply(exp_gen(-gibbs_reactions[0]), scalar(1.0));
        scalar rate_of_progress_0 = multiply(species[0] * species[3], forward_reaction_0) - multiply(species[2] * species[4], divide(forward_reaction_0, equilibrium_constant_0));
        scalar equilibrium_constant_1 = multiply(exp_gen(-gibbs_reactions[1]), scalar(1.0));
        scalar rate_of_progress_1 = multiply(species[1] * species[2], forward_reaction_1) - multiply(species[0] * species[4], divide(forward_reaction_1, equilibrium_constant_1));
        scalar equilibrium_constant_2 = multiply(exp_gen(-gibbs_reactions[2]), scalar(1.0));
        scalar rate_of_progress_2 = multiply(species[1] * species[2], forward_reaction_2) - multiply(species[0] * species[4], divide(forward_reaction_2, equilibrium_constant_2));
        scalar equilibrium_constant_3 = multiply(exp_gen(-gibbs_reactions[3]), scalar(1.0));
        scalar rate_of_progress_3 = multiply(species[1] * species[4], forward_reaction_3) - multiply(species[0] * species[5], divide(forward_reaction_3, equilibrium_constant_3));
        scalar equilibrium_constant_4 = multiply(exp_gen(-gibbs_reactions[4]), scalar(1.0));
        scalar rate_of_progress_4 = multiply(pow_gen2(species[4]), forward_reaction_4) - multiply(species[5] * species[2], divide(forward_reaction_4, equilibrium_constant_4));
        scalar equilibrium_constant_5 = multiply(exp_gen(-gibbs_reactions[5]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        scalar rate_of_progress_5 = multiply(species[1], forward_reaction_5) - multiply(pow_gen2(species[0]), divide(forward_reaction_5, equilibrium_constant_5));
        scalar equilibrium_constant_6 = multiply(exp_gen(-gibbs_reactions[6]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        scalar rate_of_progress_6 = multiply(species[1], forward_reaction_6) - multiply(pow_gen2(species[0]), divide(forward_reaction_6, equilibrium_constant_6));
        scalar equilibrium_constant_7 = multiply(exp_gen(-gibbs_reactions[7]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        scalar rate_of_progress_7 = multiply(pow_gen2(species[2]), forward_reaction_7) - multiply(species[3], divide(forward_reaction_7, equilibrium_constant_7));
        scalar equilibrium_constant_8 = multiply(exp_gen(-gibbs_reactions[8]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        scalar rate_of_progress_8 = multiply(pow_gen2(species[2]), forward_reaction_8) - multiply(species[3], divide(forward_reaction_8, equilibrium_constant_8));
        scalar equilibrium_constant_9 = multiply(exp_gen(-gibbs_reactions[9]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        scalar rate_of_progress_9 = multiply(species[0] * species[2], forward_reaction_9) - multiply(species[4], divide(forward_reaction_9, equilibrium_constant_9));
        scalar equilibrium_constant_10 = multiply(exp_gen(-gibbs_reactions[10]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        scalar rate_of_progress_10 = multiply(species[5], forward_reaction_10) - multiply(species[0] * species[4], divide(forward_reaction_10, equilibrium_constant_10));
        scalar equilibrium_constant_11 = multiply(exp_gen(-gibbs_reactions[11]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        scalar rate_of_progress_11 = multiply(species[5], forward_reaction_11) - multiply(species[0] * species[4], divide(forward_reaction_11, equilibrium_constant_11));
        scalar equilibrium_constant_12 = multiply(exp_gen(-gibbs_reactions[12]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        scalar rate_of_progress_12 = multiply(species[0] * species[3], forward_reaction_12) - multiply(species[6], divide(forward_reaction_12, equilibrium_constant_12));
        scalar equilibrium_constant_13 = multiply(exp_gen(-gibbs_reactions[13]), scalar(1.0));
        scalar rate_of_progress_13 = multiply(species[0] * species[6], forward_reaction_13) - multiply(species[1] * species[3], divide(forward_reaction_13, equilibrium_constant_13));
        scalar equilibrium_constant_14 = multiply(exp_gen(-gibbs_reactions[14]), scalar(1.0));
        scalar rate_of_progress_14 = multiply(species[0] * species[6], forward_reaction_14) - multiply(pow_gen2(species[4]), divide(forward_reaction_14, equilibrium_constant_14));
        scalar equilibrium_constant_15 = multiply(exp_gen(-gibbs_reactions[15]), scalar(1.0));
        scalar rate_of_progress_15 = multiply(species[0] * species[6], forward_reaction_15) - multiply(species[5] * species[2], divide(forward_reaction_15, equilibrium_constant_15));
        scalar equilibrium_constant_16 = multiply(exp_gen(-gibbs_reactions[16]), scalar(1.0));
        scalar rate_of_progress_16 = multiply(species[6] * species[2], forward_reaction_16) - multiply(species[3] * species[4], divide(forward_reaction_16, equilibrium_constant_16));
        scalar equilibrium_constant_17 = multiply(exp_gen(-gibbs_reactions[17]), scalar(1.0));
        scalar rate_of_progress_17 = multiply(species[6] * species[4], forward_reaction_17) - multiply(species[5] * species[3], divide(forward_reaction_17, equilibrium_constant_17));
        scalar equilibrium_constant_18 = multiply(exp_gen(-gibbs_reactions[18]), scalar(1.0));
        scalar rate_of_progress_18 = multiply(species[6] * species[4], forward_reaction_18) - multiply(species[5] * species[3], divide(forward_reaction_18, equilibrium_constant_18));
        scalar equilibrium_constant_19 = multiply(exp_gen(-gibbs_reactions[19]), scalar(1.0));
        scalar rate_of_progress_19 = multiply(pow_gen2(species[6]), forward_reaction_19) - multiply(species[7] * species[3], divide(forward_reaction_19, equilibrium_constant_19));
        scalar equilibrium_constant_20 = multiply(exp_gen(-gibbs_reactions[20]), scalar(1.0));
        scalar rate_of_progress_20 = multiply(pow_gen2(species[6]), forward_reaction_20) - multiply(species[7] * species[3], divide(forward_reaction_20, equilibrium_constant_20));
        scalar equilibrium_constant_21 = multiply(exp_gen(-gibbs_reactions[21]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        scalar rate_of_progress_21 = multiply(species[7], forward_reaction_21) - multiply(pow_gen2(species[4]), divide(forward_reaction_21, equilibrium_constant_21));
        scalar equilibrium_constant_22 = multiply(exp_gen(-gibbs_reactions[22]), scalar(1.0));
        scalar rate_of_progress_22 = multiply(species[0] * species[7], forward_reaction_22) - multiply(species[5] * species[4], divide(forward_reaction_22, equilibrium_constant_22));
        scalar equilibrium_constant_23 = multiply(exp_gen(-gibbs_reactions[23]), scalar(1.0));
        scalar rate_of_progress_23 = multiply(species[0] * species[7], forward_reaction_23) - multiply(species[1] * species[6], divide(forward_reaction_23, equilibrium_constant_23));
        scalar equilibrium_constant_24 = multiply(exp_gen(-gibbs_reactions[24]), scalar(1.0));
        scalar rate_of_progress_24 = multiply(species[7] * species[2], forward_reaction_24) - multiply(species[6] * species[4], divide(forward_reaction_24, equilibrium_constant_24));
        scalar equilibrium_constant_25 = multiply(exp_gen(-gibbs_reactions[25]), scalar(1.0));
        scalar rate_of_progress_25 = multiply(species[7] * species[4], forward_reaction_25) - multiply(species[5] * species[6], divide(forward_reaction_25, equilibrium_constant_25));
        scalar equilibrium_constant_26 = multiply(exp_gen(-gibbs_reactions[26]), scalar(1.0));
        scalar rate_of_progress_26 = multiply(species[7] * species[4], forward_reaction_26) - multiply(species[5] * species[6], divide(forward_reaction_26, equilibrium_constant_26));

        net_production_rates[0] = scalar(-1.0) * rate_of_progress_0 + scalar(1.0) * rate_of_progress_1 + scalar(1.0) * rate_of_progress_2 + scalar(1.0) * rate_of_progress_3 + scalar(2.0) * rate_of_progress_5 + scalar(2.0) * rate_of_progress_6 + scalar(-1.0) * rate_of_progress_9 + scalar(1.0) * rate_of_progress_10 + scalar(1.0) * rate_of_progress_11 + scalar(-1.0) * rate_of_progress_12 + scalar(-1.0) * rate_of_progress_13 + scalar(-1.0) * rate_of_progress_14 + scalar(-1.0) * rate_of_progress_15 + scalar(-1.0) * rate_of_progress_22 + scalar(-1.0) * rate_of_progress_23;
        net_production_rates[1] = scalar(-1.0) * rate_of_progress_1 + scalar(-1.0) * rate_of_progress_2 + scalar(-1.0) * rate_of_progress_3 + scalar(-1.0) * rate_of_progress_5 + scalar(-1.0) * rate_of_progress_6 + scalar(1.0) * rate_of_progress_13 + scalar(1.0) * rate_of_progress_23;
        net_production_rates[2] = scalar(1.0) * rate_of_progress_0 + scalar(-1.0) * rate_of_progress_1 + scalar(-1.0) * rate_of_progress_2 + scalar(1.0) * rate_of_progress_4 + scalar(-2.0) * rate_of_progress_7 + scalar(-2.0) * rate_of_progress_8 + scalar(-1.0) * rate_of_progress_9 + scalar(1.0) * rate_of_progress_15 + scalar(-1.0) * rate_of_progress_16 + scalar(-1.0) * rate_of_progress_24;
        net_production_rates[3] = scalar(-1.0) * rate_of_progress_0 + scalar(1.0) * rate_of_progress_7 + scalar(1.0) * rate_of_progress_8 + scalar(-1.0) * rate_of_progress_12 + scalar(1.0) * rate_of_progress_13 + scalar(1.0) * rate_of_progress_16 + scalar(1.0) * rate_of_progress_17 + scalar(1.0) * rate_of_progress_18 + scalar(1.0) * rate_of_progress_19 + scalar(1.0) * rate_of_progress_20;
        net_production_rates[4] = scalar(1.0) * rate_of_progress_0 + scalar(1.0) * rate_of_progress_1 + scalar(1.0) * rate_of_progress_2 + scalar(-1.0) * rate_of_progress_3 + scalar(-2.0) * rate_of_progress_4 + scalar(1.0) * rate_of_progress_9 + scalar(1.0) * rate_of_progress_10 + scalar(1.0) * rate_of_progress_11 + scalar(2.0) * rate_of_progress_14 + scalar(1.0) * rate_of_progress_16 + scalar(-1.0) * rate_of_progress_17 + scalar(-1.0) * rate_of_progress_18 + scalar(2.0) * rate_of_progress_21 + scalar(1.0) * rate_of_progress_22 + scalar(1.0) * rate_of_progress_24 + scalar(-1.0) * rate_of_progress_25 + scalar(-1.0) * rate_of_progress_26;
        net_production_rates[5] = scalar(1.0) * rate_of_progress_3 + scalar(1.0) * rate_of_progress_4 + scalar(-1.0) * rate_of_progress_10 + scalar(-1.0) * rate_of_progress_11 + scalar(1.0) * rate_of_progress_15 + scalar(1.0) * rate_of_progress_17 + scalar(1.0) * rate_of_progress_18 + scalar(1.0) * rate_of_progress_22 + scalar(1.0) * rate_of_progress_25 + scalar(1.0) * rate_of_progress_26;
        net_production_rates[6] = scalar(1.0) * rate_of_progress_12 + scalar(-1.0) * rate_of_progress_13 + scalar(-1.0) * rate_of_progress_14 + scalar(-1.0) * rate_of_progress_15 + scalar(-1.0) * rate_of_progress_16 + scalar(-1.0) * rate_of_progress_17 + scalar(-1.0) * rate_of_progress_18 + scalar(-2.0) * rate_of_progress_19 + scalar(-2.0) * rate_of_progress_20 + scalar(1.0) * rate_of_progress_23 + scalar(1.0) * rate_of_progress_24 + scalar(1.0) * rate_of_progress_25 + scalar(1.0) * rate_of_progress_26;
        net_production_rates[7] = scalar(1.0) * rate_of_progress_19 + scalar(1.0) * rate_of_progress_20 + scalar(-1.0) * rate_of_progress_21 + scalar(-1.0) * rate_of_progress_22 + scalar(-1.0) * rate_of_progress_23 + scalar(-1.0) * rate_of_progress_24 + scalar(-1.0) * rate_of_progress_25 + scalar(-1.0) * rate_of_progress_26;
        //source_8 has no production term

        return net_production_rates;
    }
    
    SpeciesJacobian source_jacobian(const Species& species, const scalar& temperature)  
    {
        Species net_production_rates = {scalar(0)};
        SpeciesJacobian jacobian_net_production_rates = {scalar(0)};
        scalar inv_universal_gas_constant_temperature  = inv_gen(universal_gas_constant() * temperature);
        scalar log_temperature = log_gen(temperature);
        scalar drate_of_progress_dspecies  = scalar(0);
        scalar equilibrium_constant  = scalar(0);
        Species drate_of_progress_dspecies_all_species  = {scalar(0)};
        
        Reactions gibbs_reactions = gibbs_reaction(log_temperature);
        Reactions dgibbs_reactions_dlog_temperature = dgibbs_reaction_dlog_temperature(log_temperature);

        
        scalar pressure_ = pressure(species, temperature);
        Species dpressure_dspecies_ = dpressure_dspecies(species, temperature); //unchecked
        
        scalar mixture_concentration = 
        multiply(pressure_,
                 inv_universal_gas_constant_temperature);
        
        Species dmixture_concentration_dspecies = Species{1}; // optimized (1/(RT))*(RT,...,RT)
        
            
        scalar forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);



        scalar forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);



        scalar forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);



        scalar forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);



        scalar forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);



        scalar forward_reaction_5 =  call_forward_reaction_5(species, temperature, log_temperature, mixture_concentration);

        Species dforward_reaction_5_dspecies = dcall_forward_reaction_5_dspecies(species,temperature,log_temperature,mixture_concentration);



        scalar forward_reaction_6 =  call_forward_reaction_6(species, temperature, log_temperature, species[8]);

        Species dforward_reaction_6_dspecies = dcall_forward_reaction_6_dspecies(species,temperature,log_temperature,species[8]);



        scalar forward_reaction_7 =  call_forward_reaction_7(species, temperature, log_temperature, mixture_concentration);

        Species dforward_reaction_7_dspecies = dcall_forward_reaction_7_dspecies(species,temperature,log_temperature,mixture_concentration);



        scalar forward_reaction_8 =  call_forward_reaction_8(species, temperature, log_temperature, species[8]);

        Species dforward_reaction_8_dspecies = dcall_forward_reaction_8_dspecies(species,temperature,log_temperature,species[8]);



        scalar forward_reaction_9 =  call_forward_reaction_9(species, temperature, log_temperature, mixture_concentration);

        Species dforward_reaction_9_dspecies = dcall_forward_reaction_9_dspecies(species,temperature,log_temperature,mixture_concentration);



        scalar forward_reaction_10 =  call_forward_reaction_10(species, temperature, log_temperature, mixture_concentration);

        Species dforward_reaction_10_dspecies = dcall_forward_reaction_10_dspecies(species,temperature,log_temperature,mixture_concentration);



        scalar forward_reaction_11 =  call_forward_reaction_11(species, temperature, log_temperature, species[5]);

        Species dforward_reaction_11_dspecies = dcall_forward_reaction_11_dspecies(species,temperature,log_temperature,species[5]);



        scalar forward_reaction_12 =  call_forward_reaction_12(species, temperature, log_temperature, mixture_concentration);

        Species dforward_reaction_12_dspecies = dcall_forward_reaction_12_dspecies(species,temperature,log_temperature,mixture_concentration);



        scalar forward_reaction_13 = call_forward_reaction_13(temperature, log_temperature);



        scalar forward_reaction_14 = call_forward_reaction_14(temperature, log_temperature);



        scalar forward_reaction_15 = call_forward_reaction_15(temperature, log_temperature);



        scalar forward_reaction_16 = call_forward_reaction_16(temperature, log_temperature);



        scalar forward_reaction_17 = call_forward_reaction_17(temperature, log_temperature);



        scalar forward_reaction_18 = call_forward_reaction_18(temperature, log_temperature);



        scalar forward_reaction_19 = call_forward_reaction_19(temperature, log_temperature);



        scalar forward_reaction_20 = call_forward_reaction_20(temperature, log_temperature);



        scalar forward_reaction_21 =  call_forward_reaction_21(species, temperature, log_temperature, mixture_concentration);

        Species dforward_reaction_21_dspecies = dcall_forward_reaction_21_dspecies(species,temperature,log_temperature,mixture_concentration);



        scalar forward_reaction_22 = call_forward_reaction_22(temperature, log_temperature);



        scalar forward_reaction_23 = call_forward_reaction_23(temperature, log_temperature);



        scalar forward_reaction_24 = call_forward_reaction_24(temperature, log_temperature);



        scalar forward_reaction_25 = call_forward_reaction_25(temperature, log_temperature);



        scalar forward_reaction_26 = call_forward_reaction_26(temperature, log_temperature);



        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[0]), scalar(1.0));
                //H + O2 <=> O + OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[0] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_0); // [0][0] +
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_0); // [0][3] +
        jacobian_net_production_rates[0][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_0, equilibrium_constant));
        jacobian_net_production_rates[0][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_0, equilibrium_constant));
        jacobian_net_production_rates[0][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[1]), scalar(1.0));
                //H2 + O <=> H + OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[1] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_1); // [1][1] +
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_1); // [1][2] +
        jacobian_net_production_rates[1][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_1, equilibrium_constant));
        jacobian_net_production_rates[1][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_1, equilibrium_constant));
        jacobian_net_production_rates[1][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[2]), scalar(1.0));
                //H2 + O <=> H + OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[2] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_2); // [2][1] +
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_2); // [2][2] +
        jacobian_net_production_rates[1][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_2, equilibrium_constant));
        jacobian_net_production_rates[1][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_2, equilibrium_constant));
        jacobian_net_production_rates[1][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[3]), scalar(1.0));
                //H2 + OH <=> H + H2O

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[3] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_3); // [3][1] +
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_3); // [3][4] +
        jacobian_net_production_rates[1][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_3, equilibrium_constant));
        jacobian_net_production_rates[1][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_3, equilibrium_constant));
        jacobian_net_production_rates[1][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[4]), scalar(1.0));
                //2 OH <=> H2O + O

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[4] = {scalar(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[4]), forward_reaction_4); // [4][4] +
        jacobian_net_production_rates[4][4] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_4, equilibrium_constant));
        jacobian_net_production_rates[4][2] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_4, equilibrium_constant));
        jacobian_net_production_rates[4][5] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[5]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
                //H2 + M <=> 2 H + M

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = forward_reaction_5;// 5 1 
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][1] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[0]), divide(forward_reaction_5, equilibrium_constant));// 5 0
        jacobian_net_production_rates[1][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += 2.0*drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[1], dforward_reaction_5_dspecies) -
        scale_gen(divide(pow_gen2(species[0]), 
                         equilibrium_constant), 
                  dforward_reaction_5_dspecies);
        jacobian_net_production_rates[1] = jacobian_net_production_rates[1] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[0] = jacobian_net_production_rates[0] + scale_gen(2.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[6]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
                //H2 + AR <=> 2 H + AR

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = forward_reaction_6;// 6 1 
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][1] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[0]), divide(forward_reaction_6, equilibrium_constant));// 6 0
        jacobian_net_production_rates[1][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += 2.0*drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[1], dforward_reaction_6_dspecies) -
        scale_gen(divide(pow_gen2(species[0]), 
                         equilibrium_constant), 
                  dforward_reaction_6_dspecies);
        jacobian_net_production_rates[1] = jacobian_net_production_rates[1] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[0] = jacobian_net_production_rates[0] + scale_gen(2.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[7]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
                //2 O + M <=> O2 + M

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[2]), forward_reaction_7);//7 2
        jacobian_net_production_rates[2][2] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_7, equilibrium_constant); //7 3
        jacobian_net_production_rates[2][3] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(pow_gen2(species[2]), dforward_reaction_7_dspecies) -
        scale_gen(divide(species[3], 
                         equilibrium_constant), 
                  dforward_reaction_7_dspecies);
        jacobian_net_production_rates[2] = jacobian_net_production_rates[2] + scale_gen(-2.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[3] = jacobian_net_production_rates[3] + scale_gen(1.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[8]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
                //2 O + AR <=> O2 + AR

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[2]), forward_reaction_8);//8 2
        jacobian_net_production_rates[2][2] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_8, equilibrium_constant); //8 3
        jacobian_net_production_rates[2][3] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(pow_gen2(species[2]), dforward_reaction_8_dspecies) -
        scale_gen(divide(species[3], 
                         equilibrium_constant), 
                  dforward_reaction_8_dspecies);
        jacobian_net_production_rates[2] = jacobian_net_production_rates[2] + scale_gen(-2.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[3] = jacobian_net_production_rates[3] + scale_gen(1.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[9]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
                //H + O + M <=> OH + M

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_9);//9 0
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_9);//9 2
        jacobian_net_production_rates[0][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_9, equilibrium_constant); //9 4
        jacobian_net_production_rates[0][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[0] * species[2], dforward_reaction_9_dspecies) -
        scale_gen(divide(species[4], 
                         equilibrium_constant), 
                  dforward_reaction_9_dspecies);
        jacobian_net_production_rates[0] = jacobian_net_production_rates[0] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[2] = jacobian_net_production_rates[2] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[4] = jacobian_net_production_rates[4] + scale_gen(1.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[10]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
                //H2O + M <=> H + OH + M

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = forward_reaction_10;// 10 5 
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_10, equilibrium_constant));// 10 0
        jacobian_net_production_rates[5][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_10, equilibrium_constant));// 10 4
        jacobian_net_production_rates[5][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[5], dforward_reaction_10_dspecies) -
        scale_gen(divide(species[0] * species[4], 
                         equilibrium_constant), 
                  dforward_reaction_10_dspecies);
        jacobian_net_production_rates[5] = jacobian_net_production_rates[5] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[0] = jacobian_net_production_rates[0] + scale_gen(1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[4] = jacobian_net_production_rates[4] + scale_gen(1.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[11]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
                //H2O + H2O <=> H + OH + H2O

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = forward_reaction_11;// 11 5 
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_11, equilibrium_constant));// 11 0
        jacobian_net_production_rates[5][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_11, equilibrium_constant));// 11 4
        jacobian_net_production_rates[5][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[0][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[5], dforward_reaction_11_dspecies) -
        scale_gen(divide(species[0] * species[4], 
                         equilibrium_constant), 
                  dforward_reaction_11_dspecies);
        jacobian_net_production_rates[5] = jacobian_net_production_rates[5] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[0] = jacobian_net_production_rates[0] + scale_gen(1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[4] = jacobian_net_production_rates[4] + scale_gen(1.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[12]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
                //H + O2 (+M) <=> HO2 (+M)

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_12);//12 0
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_12);//12 3
        jacobian_net_production_rates[0][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_12, equilibrium_constant); //12 6
        jacobian_net_production_rates[0][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[0] * species[3], dforward_reaction_12_dspecies) -
        scale_gen(divide(species[6], 
                         equilibrium_constant), 
                  dforward_reaction_12_dspecies);
        jacobian_net_production_rates[0] = jacobian_net_production_rates[0] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[3] = jacobian_net_production_rates[3] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[6] = jacobian_net_production_rates[6] + scale_gen(1.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[13]), scalar(1.0));
                //H + HO2 <=> H2 + O2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[13] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_13); // [13][0] +
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_13); // [13][6] +
        jacobian_net_production_rates[0][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_13, equilibrium_constant));
        jacobian_net_production_rates[0][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_13, equilibrium_constant));
        jacobian_net_production_rates[0][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[14]), scalar(1.0));
                //H + HO2 <=> 2 OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[14] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_14); // [14][0] +
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_14); // [14][6] +
        jacobian_net_production_rates[0][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[4]), divide(forward_reaction_14, equilibrium_constant));
        jacobian_net_production_rates[0][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += 2.0*drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[15]), scalar(1.0));
                //H + HO2 <=> H2O + O

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[15] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_15); // [15][0] +
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_15); // [15][6] +
        jacobian_net_production_rates[0][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_15, equilibrium_constant));
        jacobian_net_production_rates[0][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_15, equilibrium_constant));
        jacobian_net_production_rates[0][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[16]), scalar(1.0));
                //HO2 + O <=> O2 + OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[16] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_16); // [16][2] +
        jacobian_net_production_rates[6][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_16); // [16][6] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_16, equilibrium_constant));
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_16, equilibrium_constant));
        jacobian_net_production_rates[6][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[17]), scalar(1.0));
                //HO2 + OH <=> H2O + O2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[17] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_17); // [17][4] +
        jacobian_net_production_rates[6][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_17); // [17][6] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_17, equilibrium_constant));
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_17, equilibrium_constant));
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[18]), scalar(1.0));
                //HO2 + OH <=> H2O + O2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[18] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_18); // [18][4] +
        jacobian_net_production_rates[6][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_18); // [18][6] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_18, equilibrium_constant));
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_18, equilibrium_constant));
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[19]), scalar(1.0));
                //2 HO2 <=> H2O2 + O2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[19] = {scalar(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[6]), forward_reaction_19); // [19][6] +
        jacobian_net_production_rates[6][6] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[7], divide(forward_reaction_19, equilibrium_constant));
        jacobian_net_production_rates[6][3] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_19, equilibrium_constant));
        jacobian_net_production_rates[6][7] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][7] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[20]), scalar(1.0));
                //2 HO2 <=> H2O2 + O2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[20] = {scalar(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[6]), forward_reaction_20); // [20][6] +
        jacobian_net_production_rates[6][6] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[7], divide(forward_reaction_20, equilibrium_constant));
        jacobian_net_production_rates[6][3] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_20, equilibrium_constant));
        jacobian_net_production_rates[6][7] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][7] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[21]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
                //H2O2 (+M) <=> 2 OH (+M)

        //drate_of_progress_temperature unused
            
        drate_of_progress_dspecies = forward_reaction_21;// 21 7 
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[4]), divide(forward_reaction_21, equilibrium_constant));// 21 4
        jacobian_net_production_rates[7][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += 2.0*drate_of_progress_dspecies;


        drate_of_progress_dspecies_all_species = 
        scale_gen(species[7], dforward_reaction_21_dspecies) -
        scale_gen(divide(pow_gen2(species[4]), 
                         equilibrium_constant), 
                  dforward_reaction_21_dspecies);
        jacobian_net_production_rates[7] = jacobian_net_production_rates[7] + scale_gen(-1.0, drate_of_progress_dspecies_all_species);
        jacobian_net_production_rates[4] = jacobian_net_production_rates[4] + scale_gen(2.0, drate_of_progress_dspecies_all_species);

                                equilibrium_constant = multiply(exp_gen(-gibbs_reactions[22]), scalar(1.0));
                //H + H2O2 <=> H2O + OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[22] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_22); // [22][0] +
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_22); // [22][7] +
        jacobian_net_production_rates[0][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_22, equilibrium_constant));
        jacobian_net_production_rates[0][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_22, equilibrium_constant));
        jacobian_net_production_rates[0][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[23]), scalar(1.0));
                //H + H2O2 <=> H2 + HO2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[23] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_23); // [23][0] +
        jacobian_net_production_rates[0][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][0] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][0] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][0] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_23); // [23][7] +
        jacobian_net_production_rates[0][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_23, equilibrium_constant));
        jacobian_net_production_rates[0][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_23, equilibrium_constant));
        jacobian_net_production_rates[0][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[24]), scalar(1.0));
                //H2O2 + O <=> HO2 + OH

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[24] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_24); // [24][2] +
        jacobian_net_production_rates[7][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_24); // [24][7] +
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_24, equilibrium_constant));
        jacobian_net_production_rates[7][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_24, equilibrium_constant));
        jacobian_net_production_rates[7][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[25]), scalar(1.0));
                //H2O2 + OH <=> H2O + HO2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[25] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_25); // [25][4] +
        jacobian_net_production_rates[7][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_25); // [25][7] +
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_25, equilibrium_constant));
        jacobian_net_production_rates[7][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_25, equilibrium_constant));
        jacobian_net_production_rates[7][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += drate_of_progress_dspecies;
        equilibrium_constant = multiply(exp_gen(-gibbs_reactions[26]), scalar(1.0));
                //H2O2 + OH <=> H2O + HO2

        //drate_of_progress_temperature unused
                    //drate_of_progress_dspecies[26] = {scalar(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_26); // [26][4] +
        jacobian_net_production_rates[7][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_26); // [26][7] +
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_26, equilibrium_constant));
        jacobian_net_production_rates[7][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[5], divide(forward_reaction_26, equilibrium_constant));
        jacobian_net_production_rates[7][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += drate_of_progress_dspecies;


        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_0 = 15;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_0> coefficients_0 = {-1.0,1.0,1.0,1.0,2.0,2.0,-1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_0> idx_0 = {0,1,2,3,5,6,9,10,11,12,13,14,15,22,23};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_0; j++)
            {
                sum += coefficients_0[j] * drate_of_progress_dspecies[idx_0[j]][i];
            }
            jacobian_net_production_rates[0][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_1 = 7;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_1> coefficients_1 = {-1.0,-1.0,-1.0,-1.0,-1.0,1.0,1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_1> idx_1 = {1,2,3,5,6,13,23};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_1; j++)
            {
                sum += coefficients_1[j] * drate_of_progress_dspecies[idx_1[j]][i];
            }
            jacobian_net_production_rates[1][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_2 = 10;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_2> coefficients_2 = {1.0,-1.0,-1.0,1.0,-2.0,-2.0,-1.0,1.0,-1.0,-1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_2> idx_2 = {0,1,2,4,7,8,9,15,16,24};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_2; j++)
            {
                sum += coefficients_2[j] * drate_of_progress_dspecies[idx_2[j]][i];
            }
            jacobian_net_production_rates[2][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_3 = 10;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_3> coefficients_3 = {-1.0,1.0,1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_3> idx_3 = {0,7,8,12,13,16,17,18,19,20};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_3; j++)
            {
                sum += coefficients_3[j] * drate_of_progress_dspecies[idx_3[j]][i];
            }
            jacobian_net_production_rates[3][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_4 = 17;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_4> coefficients_4 = {1.0,1.0,1.0,-1.0,-2.0,1.0,1.0,1.0,2.0,1.0,-1.0,-1.0,2.0,1.0,1.0,-1.0,-1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_4> idx_4 = {0,1,2,3,4,9,10,11,14,16,17,18,21,22,24,25,26};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_4; j++)
            {
                sum += coefficients_4[j] * drate_of_progress_dspecies[idx_4[j]][i];
            }
            jacobian_net_production_rates[4][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_5 = 10;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_5> coefficients_5 = {1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_5> idx_5 = {3,4,10,11,15,17,18,22,25,26};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_5; j++)
            {
                sum += coefficients_5[j] * drate_of_progress_dspecies[idx_5[j]][i];
            }
            jacobian_net_production_rates[5][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_6 = 13;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_6> coefficients_6 = {1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-2.0,-2.0,1.0,1.0,1.0,1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_6> idx_6 = {12,13,14,15,16,17,18,19,20,23,24,25,26};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_6; j++)
            {
                sum += coefficients_6[j] * drate_of_progress_dspecies[idx_6[j]][i];
            }
            jacobian_net_production_rates[6][i] = sum;
        }
        */
            
        /*
                //no temperature jacobian
        
            const int n_rates_of_progres_species_jacobian_7 = 8;
            static constexpr std::array<scalar, n_rates_of_progres_species_jacobian_7> coefficients_7 = {1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0};
            static constexpr std::array<int, n_rates_of_progres_species_jacobian_7> idx_7 = {19,20,21,22,23,24,25,26};
            
        for(int i = 0; i < n_species; i++)
        {
            scalar sum = 0;
            for(int j = 0; j < n_rates_of_progres_species_jacobian_7; j++)
            {
                sum += coefficients_7[j] * drate_of_progress_dspecies[idx_7[j]][i];
            }
            jacobian_net_production_rates[7][i] = sum;
        }
        */
            
        //no species jacobian
            
        return jacobian_net_production_rates;
    }