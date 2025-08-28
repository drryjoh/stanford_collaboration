
        
        Species source_species(const Species& species, const double& temperature) 
        {
            Species net_production_rates = {double(0)};
            double inv_universal_gas_constant_temperature  = inv_gen(universal_gas_constant() * temperature);
            double log_temperature = log_gen(temperature);
            Reactions gibbs_reactions = gibbs_reaction(log_temperature);
            double pressure_ = pressure(species, temperature);
            double mixture_concentration = pressure_ * inv_universal_gas_constant_temperature;
        double forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        double forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        double forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        double forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        double forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        double forward_reaction_5 =  call_forward_reaction_5(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_6 =  call_forward_reaction_6(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_7 =  call_forward_reaction_7(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_8 =  call_forward_reaction_8(species, temperature, log_temperature, species[6]);
        double forward_reaction_9 =  call_forward_reaction_9(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_10 = call_forward_reaction_10(temperature, log_temperature);
        double forward_reaction_11 = call_forward_reaction_11(temperature, log_temperature);
        double forward_reaction_12 = call_forward_reaction_12(temperature, log_temperature);
        double forward_reaction_13 = call_forward_reaction_13(temperature, log_temperature);
        double forward_reaction_14 = call_forward_reaction_14(temperature, log_temperature);
        double forward_reaction_15 = call_forward_reaction_15(temperature, log_temperature);
        double forward_reaction_16 =  call_forward_reaction_16(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_17 = call_forward_reaction_17(temperature, log_temperature);
        double forward_reaction_18 = call_forward_reaction_18(temperature, log_temperature);
        double forward_reaction_19 = call_forward_reaction_19(temperature, log_temperature);
        double forward_reaction_20 = call_forward_reaction_20(temperature, log_temperature);
        double forward_reaction_21 = call_forward_reaction_21(temperature, log_temperature);
        double forward_reaction_22 = call_forward_reaction_22(temperature, log_temperature);
        double forward_reaction_23 = call_forward_reaction_23(temperature, log_temperature);
        double forward_reaction_24 =  call_forward_reaction_24(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_25 = call_forward_reaction_25(temperature, log_temperature);
        double forward_reaction_26 = call_forward_reaction_26(temperature, log_temperature);
        double forward_reaction_27 = call_forward_reaction_27(temperature, log_temperature);
        double forward_reaction_28 = call_forward_reaction_28(temperature, log_temperature);
        double forward_reaction_29 = call_forward_reaction_29(temperature, log_temperature);
        double forward_reaction_30 = call_forward_reaction_30(temperature, log_temperature);
        double forward_reaction_31 = call_forward_reaction_31(temperature, log_temperature);
        double forward_reaction_32 =  call_forward_reaction_32(species, temperature, log_temperature, mixture_concentration);
        double forward_reaction_33 =  call_forward_reaction_33(species, temperature, log_temperature, species[1]);
        double forward_reaction_34 =  call_forward_reaction_34(species, temperature, log_temperature, species[1]);
        double forward_reaction_35 = call_forward_reaction_35(temperature, log_temperature);
        double forward_reaction_36 = call_forward_reaction_36(temperature, log_temperature);
        double forward_reaction_37 = call_forward_reaction_37(temperature, log_temperature);
        double equilibrium_constant_0 = multiply(exp_gen(-gibbs_reactions[0]), double(1.0));
        double rate_of_progress_0 = multiply(species[1] * species[2], forward_reaction_0) - multiply(species[3] * species[4], divide(forward_reaction_0, equilibrium_constant_0));
        double equilibrium_constant_1 = multiply(exp_gen(-gibbs_reactions[1]), double(1.0));
        double rate_of_progress_1 = multiply(species[0] * species[3], forward_reaction_1) - multiply(species[1] * species[4], divide(forward_reaction_1, equilibrium_constant_1));
        double equilibrium_constant_2 = multiply(exp_gen(-gibbs_reactions[2]), double(1.0));
        double rate_of_progress_2 = multiply(species[0] * species[3], forward_reaction_2) - multiply(species[1] * species[4], divide(forward_reaction_2, equilibrium_constant_2));
        double equilibrium_constant_3 = multiply(exp_gen(-gibbs_reactions[3]), double(1.0));
        double rate_of_progress_3 = multiply(species[0] * species[4], forward_reaction_3) - multiply(species[1] * species[6], divide(forward_reaction_3, equilibrium_constant_3));
        double equilibrium_constant_4 = multiply(exp_gen(-gibbs_reactions[4]), double(1.0));
        double rate_of_progress_4 = multiply(pow_gen2(species[4]), forward_reaction_4) - multiply(species[6] * species[3], divide(forward_reaction_4, equilibrium_constant_4));
        double equilibrium_constant_5 = multiply(exp_gen(-gibbs_reactions[5]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double rate_of_progress_5 = multiply(species[0], forward_reaction_5) - multiply(pow_gen2(species[1]), divide(forward_reaction_5, equilibrium_constant_5));
        double equilibrium_constant_6 = multiply(exp_gen(-gibbs_reactions[6]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double rate_of_progress_6 = multiply(species[1] * species[3], forward_reaction_6) - multiply(species[4], divide(forward_reaction_6, equilibrium_constant_6));
        double equilibrium_constant_7 = multiply(exp_gen(-gibbs_reactions[7]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double rate_of_progress_7 = multiply(species[6], forward_reaction_7) - multiply(species[1] * species[4], divide(forward_reaction_7, equilibrium_constant_7));
        double equilibrium_constant_8 = multiply(exp_gen(-gibbs_reactions[8]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double rate_of_progress_8 = multiply(species[6], forward_reaction_8) - multiply(species[1] * species[4], divide(forward_reaction_8, equilibrium_constant_8));
        double equilibrium_constant_9 = multiply(exp_gen(-gibbs_reactions[9]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double rate_of_progress_9 = multiply(species[1] * species[2], forward_reaction_9) - multiply(species[5], divide(forward_reaction_9, equilibrium_constant_9));
        double equilibrium_constant_10 = multiply(exp_gen(-gibbs_reactions[10]), double(1.0));
        double rate_of_progress_10 = multiply(species[1] * species[5], forward_reaction_10) - multiply(species[0] * species[2], divide(forward_reaction_10, equilibrium_constant_10));
        double equilibrium_constant_11 = multiply(exp_gen(-gibbs_reactions[11]), double(1.0));
        double rate_of_progress_11 = multiply(species[1] * species[5], forward_reaction_11) - multiply(pow_gen2(species[4]), divide(forward_reaction_11, equilibrium_constant_11));
        double equilibrium_constant_12 = multiply(exp_gen(-gibbs_reactions[12]), double(1.0));
        double rate_of_progress_12 = multiply(species[1] * species[5], forward_reaction_12) - multiply(species[6] * species[3], divide(forward_reaction_12, equilibrium_constant_12));
        double equilibrium_constant_13 = multiply(exp_gen(-gibbs_reactions[13]), double(1.0));
        double rate_of_progress_13 = multiply(species[5] * species[3], forward_reaction_13) - multiply(species[2] * species[4], divide(forward_reaction_13, equilibrium_constant_13));
        double equilibrium_constant_14 = multiply(exp_gen(-gibbs_reactions[14]), double(1.0));
        double rate_of_progress_14 = multiply(species[5] * species[4], forward_reaction_14) - multiply(species[6] * species[2], divide(forward_reaction_14, equilibrium_constant_14));
        double equilibrium_constant_15 = multiply(exp_gen(-gibbs_reactions[15]), double(1.0));
        double rate_of_progress_15 = multiply(species[5] * species[4], forward_reaction_15) - multiply(species[6] * species[2], divide(forward_reaction_15, equilibrium_constant_15));
        double equilibrium_constant_16 = multiply(exp_gen(-gibbs_reactions[16]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double rate_of_progress_16 = multiply(species[9] * species[3], forward_reaction_16) - multiply(species[10], divide(forward_reaction_16, equilibrium_constant_16));
        double equilibrium_constant_17 = multiply(exp_gen(-gibbs_reactions[17]), double(1.0));
        double rate_of_progress_17 = multiply(species[9] * species[2], forward_reaction_17) - multiply(species[10] * species[3], divide(forward_reaction_17, equilibrium_constant_17));
        double equilibrium_constant_18 = multiply(exp_gen(-gibbs_reactions[18]), double(1.0));
        double rate_of_progress_18 = multiply(species[9] * species[4], forward_reaction_18) - multiply(species[10] * species[1], divide(forward_reaction_18, equilibrium_constant_18));
        double equilibrium_constant_19 = multiply(exp_gen(-gibbs_reactions[19]), double(1.0));
        double rate_of_progress_19 = multiply(species[9] * species[4], forward_reaction_19) - multiply(species[10] * species[1], divide(forward_reaction_19, equilibrium_constant_19));
        double equilibrium_constant_20 = multiply(exp_gen(-gibbs_reactions[20]), double(1.0));
        double rate_of_progress_20 = multiply(species[9] * species[5], forward_reaction_20) - multiply(species[10] * species[4], divide(forward_reaction_20, equilibrium_constant_20));
        double equilibrium_constant_21 = multiply(exp_gen(-gibbs_reactions[21]), double(1.0));
        double rate_of_progress_21 = multiply(species[8] * species[1], forward_reaction_21) - multiply(species[7] * species[0], divide(forward_reaction_21, equilibrium_constant_21));
        double equilibrium_constant_22 = multiply(exp_gen(-gibbs_reactions[22]), double(1.0));
        double rate_of_progress_22 = multiply(species[8] * species[3], forward_reaction_22) - multiply(species[7] * species[4], divide(forward_reaction_22, equilibrium_constant_22));
        double equilibrium_constant_23 = multiply(exp_gen(-gibbs_reactions[23]), double(1.0));
        double rate_of_progress_23 = multiply(species[8] * species[4], forward_reaction_23) - multiply(species[7] * species[6], divide(forward_reaction_23, equilibrium_constant_23));
        double equilibrium_constant_24 = multiply(exp_gen(-gibbs_reactions[24]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double rate_of_progress_24 = multiply(species[7] * species[1], forward_reaction_24) - multiply(species[8], divide(forward_reaction_24, equilibrium_constant_24));
        double equilibrium_constant_25 = multiply(exp_gen(-gibbs_reactions[25]), double(1.0));
        double rate_of_progress_25 = multiply(species[7] * species[3], forward_reaction_25) - multiply(species[11] * species[1], divide(forward_reaction_25, equilibrium_constant_25));
        double rate_of_progress_26 = multiply(species[7] * species[3], forward_reaction_26);
        double equilibrium_constant_27 = multiply(exp_gen(-gibbs_reactions[27]), double(1.0));
        double rate_of_progress_27 = multiply(species[7] * species[5], forward_reaction_27) - multiply(species[8] * species[2], divide(forward_reaction_27, equilibrium_constant_27));
        double rate_of_progress_28 = multiply(species[7] * species[5], forward_reaction_28);
        double rate_of_progress_29 = multiply(species[7] * species[2], forward_reaction_29);
        double equilibrium_constant_30 = multiply(exp_gen(-gibbs_reactions[30]), double(1.0));
        double rate_of_progress_30 = multiply(species[7] * species[2], forward_reaction_30) - multiply(species[11] * species[4], divide(forward_reaction_30, equilibrium_constant_30));
        double rate_of_progress_31 = multiply(species[11] * species[7], forward_reaction_31);
        double equilibrium_constant_32 = multiply(exp_gen(-gibbs_reactions[32]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double rate_of_progress_32 = multiply(species[11], forward_reaction_32) - multiply(species[9] * species[0], divide(forward_reaction_32, equilibrium_constant_32));
        double rate_of_progress_33 = multiply(species[11], forward_reaction_33);
        double rate_of_progress_34 = multiply(species[11], forward_reaction_34);
        double rate_of_progress_35 = multiply(species[11] * species[3], forward_reaction_35);
        double rate_of_progress_36 = multiply(species[11] * species[4], forward_reaction_36);
        double rate_of_progress_37 = multiply(species[11] * species[2], forward_reaction_37);

        net_production_rates[0] = double(-1.0) * rate_of_progress_1 + double(-1.0) * rate_of_progress_2 + double(-1.0) * rate_of_progress_3 + double(-1.0) * rate_of_progress_5 + double(1.0) * rate_of_progress_10 + double(1.0) * rate_of_progress_21 + double(1.0) * rate_of_progress_26 + double(1.0) * rate_of_progress_32 + double(1.0) * rate_of_progress_33 + double(1.0) * rate_of_progress_34;
        net_production_rates[1] = double(-1.0) * rate_of_progress_0 + double(1.0) * rate_of_progress_1 + double(1.0) * rate_of_progress_2 + double(1.0) * rate_of_progress_3 + double(2.0) * rate_of_progress_5 + double(-1.0) * rate_of_progress_6 + double(1.0) * rate_of_progress_7 + double(1.0) * rate_of_progress_8 + double(-1.0) * rate_of_progress_9 + double(-1.0) * rate_of_progress_10 + double(-1.0) * rate_of_progress_11 + double(-1.0) * rate_of_progress_12 + double(1.0) * rate_of_progress_18 + double(1.0) * rate_of_progress_19 + double(-1.0) * rate_of_progress_21 + double(-1.0) * rate_of_progress_24 + double(1.0) * rate_of_progress_25 + double(1.0) * rate_of_progress_26 + double(1.0) * rate_of_progress_28 + double(1.0) * rate_of_progress_29 + double(1.0) * rate_of_progress_31 + double(1.0) * rate_of_progress_35 + double(1.0) * rate_of_progress_36 + double(1.0) * rate_of_progress_37;
        net_production_rates[2] = double(-1.0) * rate_of_progress_0 + double(-1.0) * rate_of_progress_9 + double(1.0) * rate_of_progress_10 + double(1.0) * rate_of_progress_13 + double(1.0) * rate_of_progress_14 + double(1.0) * rate_of_progress_15 + double(-1.0) * rate_of_progress_17 + double(1.0) * rate_of_progress_27 + double(-1.0) * rate_of_progress_29 + double(-1.0) * rate_of_progress_30 + double(-1.0) * rate_of_progress_37;
        net_production_rates[3] = double(1.0) * rate_of_progress_0 + double(-1.0) * rate_of_progress_1 + double(-1.0) * rate_of_progress_2 + double(1.0) * rate_of_progress_4 + double(-1.0) * rate_of_progress_6 + double(1.0) * rate_of_progress_12 + double(-1.0) * rate_of_progress_13 + double(-1.0) * rate_of_progress_16 + double(1.0) * rate_of_progress_17 + double(-1.0) * rate_of_progress_22 + double(-1.0) * rate_of_progress_25 + double(-1.0) * rate_of_progress_26 + double(1.0) * rate_of_progress_29 + double(-1.0) * rate_of_progress_35;
        net_production_rates[4] = double(1.0) * rate_of_progress_0 + double(1.0) * rate_of_progress_1 + double(1.0) * rate_of_progress_2 + double(-1.0) * rate_of_progress_3 + double(-2.0) * rate_of_progress_4 + double(1.0) * rate_of_progress_6 + double(1.0) * rate_of_progress_7 + double(1.0) * rate_of_progress_8 + double(2.0) * rate_of_progress_11 + double(1.0) * rate_of_progress_13 + double(-1.0) * rate_of_progress_14 + double(-1.0) * rate_of_progress_15 + double(-1.0) * rate_of_progress_18 + double(-1.0) * rate_of_progress_19 + double(1.0) * rate_of_progress_20 + double(1.0) * rate_of_progress_22 + double(-1.0) * rate_of_progress_23 + double(1.0) * rate_of_progress_28 + double(1.0) * rate_of_progress_30 + double(1.0) * rate_of_progress_35 + double(-1.0) * rate_of_progress_36;
        net_production_rates[5] = double(1.0) * rate_of_progress_9 + double(-1.0) * rate_of_progress_10 + double(-1.0) * rate_of_progress_11 + double(-1.0) * rate_of_progress_12 + double(-1.0) * rate_of_progress_13 + double(-1.0) * rate_of_progress_14 + double(-1.0) * rate_of_progress_15 + double(-1.0) * rate_of_progress_20 + double(-1.0) * rate_of_progress_27 + double(-1.0) * rate_of_progress_28 + double(1.0) * rate_of_progress_37;
        net_production_rates[6] = double(1.0) * rate_of_progress_3 + double(1.0) * rate_of_progress_4 + double(-1.0) * rate_of_progress_7 + double(-1.0) * rate_of_progress_8 + double(1.0) * rate_of_progress_12 + double(1.0) * rate_of_progress_14 + double(1.0) * rate_of_progress_15 + double(1.0) * rate_of_progress_23 + double(1.0) * rate_of_progress_36;
        net_production_rates[7] = double(1.0) * rate_of_progress_21 + double(1.0) * rate_of_progress_22 + double(1.0) * rate_of_progress_23 + double(-1.0) * rate_of_progress_24 + double(-1.0) * rate_of_progress_25 + double(-1.0) * rate_of_progress_26 + double(-1.0) * rate_of_progress_27 + double(-1.0) * rate_of_progress_28 + double(-1.0) * rate_of_progress_29 + double(-1.0) * rate_of_progress_30 + double(-1.0) * rate_of_progress_31;
        net_production_rates[8] = double(-1.0) * rate_of_progress_21 + double(-1.0) * rate_of_progress_22 + double(-1.0) * rate_of_progress_23 + double(1.0) * rate_of_progress_24 + double(1.0) * rate_of_progress_27 + double(1.0) * rate_of_progress_31;
        net_production_rates[9] = double(-1.0) * rate_of_progress_16 + double(-1.0) * rate_of_progress_17 + double(-1.0) * rate_of_progress_18 + double(-1.0) * rate_of_progress_19 + double(-1.0) * rate_of_progress_20 + double(1.0) * rate_of_progress_26 + double(1.0) * rate_of_progress_31 + double(1.0) * rate_of_progress_32 + double(1.0) * rate_of_progress_33 + double(1.0) * rate_of_progress_34 + double(1.0) * rate_of_progress_35 + double(1.0) * rate_of_progress_36 + double(1.0) * rate_of_progress_37;
        net_production_rates[10] = double(1.0) * rate_of_progress_16 + double(1.0) * rate_of_progress_17 + double(1.0) * rate_of_progress_18 + double(1.0) * rate_of_progress_19 + double(1.0) * rate_of_progress_20;
        net_production_rates[11] = double(1.0) * rate_of_progress_25 + double(1.0) * rate_of_progress_28 + double(1.0) * rate_of_progress_29 + double(1.0) * rate_of_progress_30 + double(-1.0) * rate_of_progress_31 + double(-1.0) * rate_of_progress_32 + double(-1.0) * rate_of_progress_33 + double(-1.0) * rate_of_progress_34 + double(-1.0) * rate_of_progress_35 + double(-1.0) * rate_of_progress_36 + double(-1.0) * rate_of_progress_37;
        //source_12 has no production term

        return net_production_rates;
    }
            
            double source_energy(const Species& species, const double& temperature) 
            {
                return double(0);
            }
        
        ChemicalState source(const Species& species, const double& temperature) 
        {
            return set_chemical_state(source_energy(species, temperature), source_species(species, temperature));
        }

        void update_dsource_species_dtemperature_reaction_0(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_0,
                                                           const double& dequilibrium_constant_0_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        double dforward_reaction_0_dtemperature = dcall_forward_reaction_0_dtemperature(temperature,log_temperature);

        dforward_reaction_0_dtemperature += dcall_forward_reaction_0_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 0: H + O2 <=> O + OH

        double drate_of_progress_0_dtemperature =
        multiply(species[1] * species[2], dforward_reaction_0_dtemperature)
        -
        multiply(species[3] * species[4],
                 divide_chain(forward_reaction_0,
                              dforward_reaction_0_dtemperature,
                              equilibrium_constant_0,
                              dequilibrium_constant_0_dtemperature));

        dsource_species_dtemperature_[1] += -drate_of_progress_0_dtemperature;
        dsource_species_dtemperature_[2] += -drate_of_progress_0_dtemperature;
        dsource_species_dtemperature_[3] += drate_of_progress_0_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_0_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_1(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_1,
                                                           const double& dequilibrium_constant_1_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        double dforward_reaction_1_dtemperature = dcall_forward_reaction_1_dtemperature(temperature,log_temperature);

        dforward_reaction_1_dtemperature += dcall_forward_reaction_1_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 1: H2 + O <=> H + OH

        double drate_of_progress_1_dtemperature =
        multiply(species[0] * species[3], dforward_reaction_1_dtemperature)
        -
        multiply(species[1] * species[4],
                 divide_chain(forward_reaction_1,
                              dforward_reaction_1_dtemperature,
                              equilibrium_constant_1,
                              dequilibrium_constant_1_dtemperature));

        dsource_species_dtemperature_[0] += -drate_of_progress_1_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_1_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_1_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_1_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_2(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_2,
                                                           const double& dequilibrium_constant_2_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        double dforward_reaction_2_dtemperature = dcall_forward_reaction_2_dtemperature(temperature,log_temperature);

        dforward_reaction_2_dtemperature += dcall_forward_reaction_2_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 2: H2 + O <=> H + OH

        double drate_of_progress_2_dtemperature =
        multiply(species[0] * species[3], dforward_reaction_2_dtemperature)
        -
        multiply(species[1] * species[4],
                 divide_chain(forward_reaction_2,
                              dforward_reaction_2_dtemperature,
                              equilibrium_constant_2,
                              dequilibrium_constant_2_dtemperature));

        dsource_species_dtemperature_[0] += -drate_of_progress_2_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_2_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_2_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_2_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_3(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_3,
                                                           const double& dequilibrium_constant_3_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        double dforward_reaction_3_dtemperature = dcall_forward_reaction_3_dtemperature(temperature,log_temperature);

        dforward_reaction_3_dtemperature += dcall_forward_reaction_3_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 3: H2 + OH <=> H + H2O

        double drate_of_progress_3_dtemperature =
        multiply(species[0] * species[4], dforward_reaction_3_dtemperature)
        -
        multiply(species[1] * species[6],
                 divide_chain(forward_reaction_3,
                              dforward_reaction_3_dtemperature,
                              equilibrium_constant_3,
                              dequilibrium_constant_3_dtemperature));

        dsource_species_dtemperature_[0] += -drate_of_progress_3_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_3_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_3_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_3_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_4(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_4,
                                                           const double& dequilibrium_constant_4_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        double dforward_reaction_4_dtemperature = dcall_forward_reaction_4_dtemperature(temperature,log_temperature);

        dforward_reaction_4_dtemperature += dcall_forward_reaction_4_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 4: 2 OH <=> H2O + O

        double drate_of_progress_4_dtemperature =
        multiply(pow_gen2(species[4]), dforward_reaction_4_dtemperature)
        -
        multiply(species[6] * species[3],
                 divide_chain(forward_reaction_4,
                              dforward_reaction_4_dtemperature,
                              equilibrium_constant_4,
                              dequilibrium_constant_4_dtemperature));

        dsource_species_dtemperature_[4] += -2.0*drate_of_progress_4_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_4_dtemperature;
        dsource_species_dtemperature_[3] += drate_of_progress_4_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_5(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_5,
                                                           const double& dequilibrium_constant_5_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_5 =  call_forward_reaction_5(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_5_dtemperature = dcall_forward_reaction_5_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_5_dtemperature += dcall_forward_reaction_5_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 5: H2 + M <=> 2 H + M

        double drate_of_progress_5_dtemperature =
        multiply(species[0], dforward_reaction_5_dtemperature)
        -
        multiply(pow_gen2(species[1]),
                 divide_chain(forward_reaction_5,
                              dforward_reaction_5_dtemperature,
                              equilibrium_constant_5,
                              dequilibrium_constant_5_dtemperature));

        dsource_species_dtemperature_[0] += -drate_of_progress_5_dtemperature;
        dsource_species_dtemperature_[1] += 2.0*drate_of_progress_5_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_6(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_6,
                                                           const double& dequilibrium_constant_6_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_6 =  call_forward_reaction_6(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_6_dtemperature = dcall_forward_reaction_6_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_6_dtemperature += dcall_forward_reaction_6_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 6: H + O + M <=> OH + M

        double drate_of_progress_6_dtemperature =
        multiply(species[1] * species[3], dforward_reaction_6_dtemperature)
        -
        multiply(species[4],
                 divide_chain(forward_reaction_6,
                              dforward_reaction_6_dtemperature,
                              equilibrium_constant_6,
                              dequilibrium_constant_6_dtemperature));

        dsource_species_dtemperature_[1] += -drate_of_progress_6_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_6_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_6_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_7(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_7,
                                                           const double& dequilibrium_constant_7_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_7 =  call_forward_reaction_7(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_7_dtemperature = dcall_forward_reaction_7_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_7_dtemperature += dcall_forward_reaction_7_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 7: H2O + M <=> H + OH + M

        double drate_of_progress_7_dtemperature =
        multiply(species[6], dforward_reaction_7_dtemperature)
        -
        multiply(species[1] * species[4],
                 divide_chain(forward_reaction_7,
                              dforward_reaction_7_dtemperature,
                              equilibrium_constant_7,
                              dequilibrium_constant_7_dtemperature));

        dsource_species_dtemperature_[6] += -drate_of_progress_7_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_7_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_7_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_8(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_8,
                                                           const double& dequilibrium_constant_8_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_8 =  call_forward_reaction_8(species, temperature, log_temperature, species[6]);
        double dforward_reaction_8_dtemperature = dcall_forward_reaction_8_dtemperature(species,temperature,log_temperature,species[6]);


        dforward_reaction_8_dtemperature += dcall_forward_reaction_8_dlog_temperature(species,temperature,log_temperature,species[6]) * dlog_temperature_dtemperature;


        

        // Reaction 8: H2O + H2O <=> H + OH + H2O

        double drate_of_progress_8_dtemperature =
        multiply(species[6], dforward_reaction_8_dtemperature)
        -
        multiply(species[1] * species[4],
                 divide_chain(forward_reaction_8,
                              dforward_reaction_8_dtemperature,
                              equilibrium_constant_8,
                              dequilibrium_constant_8_dtemperature));

        dsource_species_dtemperature_[6] += -drate_of_progress_8_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_8_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_8_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_9(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_9,
                                                           const double& dequilibrium_constant_9_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_9 =  call_forward_reaction_9(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_9_dtemperature = dcall_forward_reaction_9_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_9_dtemperature += dcall_forward_reaction_9_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 9: H + O2 (+M) <=> HO2 (+M)

        double drate_of_progress_9_dtemperature =
        multiply(species[1] * species[2], dforward_reaction_9_dtemperature)
        -
        multiply(species[5],
                 divide_chain(forward_reaction_9,
                              dforward_reaction_9_dtemperature,
                              equilibrium_constant_9,
                              dequilibrium_constant_9_dtemperature));

        dsource_species_dtemperature_[1] += -drate_of_progress_9_dtemperature;
        dsource_species_dtemperature_[2] += -drate_of_progress_9_dtemperature;
        dsource_species_dtemperature_[5] += drate_of_progress_9_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_10(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_10,
                                                           const double& dequilibrium_constant_10_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_10 = call_forward_reaction_10(temperature, log_temperature);
        double dforward_reaction_10_dtemperature = dcall_forward_reaction_10_dtemperature(temperature,log_temperature);

        dforward_reaction_10_dtemperature += dcall_forward_reaction_10_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 10: H + HO2 <=> H2 + O2

        double drate_of_progress_10_dtemperature =
        multiply(species[1] * species[5], dforward_reaction_10_dtemperature)
        -
        multiply(species[0] * species[2],
                 divide_chain(forward_reaction_10,
                              dforward_reaction_10_dtemperature,
                              equilibrium_constant_10,
                              dequilibrium_constant_10_dtemperature));

        dsource_species_dtemperature_[1] += -drate_of_progress_10_dtemperature;
        dsource_species_dtemperature_[5] += -drate_of_progress_10_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_10_dtemperature;
        dsource_species_dtemperature_[2] += drate_of_progress_10_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_11(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_11,
                                                           const double& dequilibrium_constant_11_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_11 = call_forward_reaction_11(temperature, log_temperature);
        double dforward_reaction_11_dtemperature = dcall_forward_reaction_11_dtemperature(temperature,log_temperature);

        dforward_reaction_11_dtemperature += dcall_forward_reaction_11_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 11: H + HO2 <=> 2 OH

        double drate_of_progress_11_dtemperature =
        multiply(species[1] * species[5], dforward_reaction_11_dtemperature)
        -
        multiply(pow_gen2(species[4]),
                 divide_chain(forward_reaction_11,
                              dforward_reaction_11_dtemperature,
                              equilibrium_constant_11,
                              dequilibrium_constant_11_dtemperature));

        dsource_species_dtemperature_[1] += -drate_of_progress_11_dtemperature;
        dsource_species_dtemperature_[5] += -drate_of_progress_11_dtemperature;
        dsource_species_dtemperature_[4] += 2.0*drate_of_progress_11_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_12(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_12,
                                                           const double& dequilibrium_constant_12_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_12 = call_forward_reaction_12(temperature, log_temperature);
        double dforward_reaction_12_dtemperature = dcall_forward_reaction_12_dtemperature(temperature,log_temperature);

        dforward_reaction_12_dtemperature += dcall_forward_reaction_12_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 12: H + HO2 <=> H2O + O

        double drate_of_progress_12_dtemperature =
        multiply(species[1] * species[5], dforward_reaction_12_dtemperature)
        -
        multiply(species[6] * species[3],
                 divide_chain(forward_reaction_12,
                              dforward_reaction_12_dtemperature,
                              equilibrium_constant_12,
                              dequilibrium_constant_12_dtemperature));

        dsource_species_dtemperature_[1] += -drate_of_progress_12_dtemperature;
        dsource_species_dtemperature_[5] += -drate_of_progress_12_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_12_dtemperature;
        dsource_species_dtemperature_[3] += drate_of_progress_12_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_13(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_13,
                                                           const double& dequilibrium_constant_13_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_13 = call_forward_reaction_13(temperature, log_temperature);
        double dforward_reaction_13_dtemperature = dcall_forward_reaction_13_dtemperature(temperature,log_temperature);

        dforward_reaction_13_dtemperature += dcall_forward_reaction_13_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 13: HO2 + O <=> O2 + OH

        double drate_of_progress_13_dtemperature =
        multiply(species[5] * species[3], dforward_reaction_13_dtemperature)
        -
        multiply(species[2] * species[4],
                 divide_chain(forward_reaction_13,
                              dforward_reaction_13_dtemperature,
                              equilibrium_constant_13,
                              dequilibrium_constant_13_dtemperature));

        dsource_species_dtemperature_[5] += -drate_of_progress_13_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_13_dtemperature;
        dsource_species_dtemperature_[2] += drate_of_progress_13_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_13_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_14(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_14,
                                                           const double& dequilibrium_constant_14_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_14 = call_forward_reaction_14(temperature, log_temperature);
        double dforward_reaction_14_dtemperature = dcall_forward_reaction_14_dtemperature(temperature,log_temperature);

        dforward_reaction_14_dtemperature += dcall_forward_reaction_14_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 14: HO2 + OH <=> H2O + O2

        double drate_of_progress_14_dtemperature =
        multiply(species[5] * species[4], dforward_reaction_14_dtemperature)
        -
        multiply(species[6] * species[2],
                 divide_chain(forward_reaction_14,
                              dforward_reaction_14_dtemperature,
                              equilibrium_constant_14,
                              dequilibrium_constant_14_dtemperature));

        dsource_species_dtemperature_[5] += -drate_of_progress_14_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_14_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_14_dtemperature;
        dsource_species_dtemperature_[2] += drate_of_progress_14_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_15(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_15,
                                                           const double& dequilibrium_constant_15_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_15 = call_forward_reaction_15(temperature, log_temperature);
        double dforward_reaction_15_dtemperature = dcall_forward_reaction_15_dtemperature(temperature,log_temperature);

        dforward_reaction_15_dtemperature += dcall_forward_reaction_15_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 15: HO2 + OH <=> H2O + O2

        double drate_of_progress_15_dtemperature =
        multiply(species[5] * species[4], dforward_reaction_15_dtemperature)
        -
        multiply(species[6] * species[2],
                 divide_chain(forward_reaction_15,
                              dforward_reaction_15_dtemperature,
                              equilibrium_constant_15,
                              dequilibrium_constant_15_dtemperature));

        dsource_species_dtemperature_[5] += -drate_of_progress_15_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_15_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_15_dtemperature;
        dsource_species_dtemperature_[2] += drate_of_progress_15_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_16(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_16,
                                                           const double& dequilibrium_constant_16_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_16 =  call_forward_reaction_16(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_16_dtemperature = dcall_forward_reaction_16_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_16_dtemperature += dcall_forward_reaction_16_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 16: CO + O (+M) <=> CO2 (+M)

        double drate_of_progress_16_dtemperature =
        multiply(species[9] * species[3], dforward_reaction_16_dtemperature)
        -
        multiply(species[10],
                 divide_chain(forward_reaction_16,
                              dforward_reaction_16_dtemperature,
                              equilibrium_constant_16,
                              dequilibrium_constant_16_dtemperature));

        dsource_species_dtemperature_[9] += -drate_of_progress_16_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_16_dtemperature;
        dsource_species_dtemperature_[10] += drate_of_progress_16_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_17(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_17,
                                                           const double& dequilibrium_constant_17_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_17 = call_forward_reaction_17(temperature, log_temperature);
        double dforward_reaction_17_dtemperature = dcall_forward_reaction_17_dtemperature(temperature,log_temperature);

        dforward_reaction_17_dtemperature += dcall_forward_reaction_17_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 17: CO + O2 <=> CO2 + O

        double drate_of_progress_17_dtemperature =
        multiply(species[9] * species[2], dforward_reaction_17_dtemperature)
        -
        multiply(species[10] * species[3],
                 divide_chain(forward_reaction_17,
                              dforward_reaction_17_dtemperature,
                              equilibrium_constant_17,
                              dequilibrium_constant_17_dtemperature));

        dsource_species_dtemperature_[9] += -drate_of_progress_17_dtemperature;
        dsource_species_dtemperature_[2] += -drate_of_progress_17_dtemperature;
        dsource_species_dtemperature_[10] += drate_of_progress_17_dtemperature;
        dsource_species_dtemperature_[3] += drate_of_progress_17_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_18(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_18,
                                                           const double& dequilibrium_constant_18_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_18 = call_forward_reaction_18(temperature, log_temperature);
        double dforward_reaction_18_dtemperature = dcall_forward_reaction_18_dtemperature(temperature,log_temperature);

        dforward_reaction_18_dtemperature += dcall_forward_reaction_18_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 18: CO + OH <=> CO2 + H

        double drate_of_progress_18_dtemperature =
        multiply(species[9] * species[4], dforward_reaction_18_dtemperature)
        -
        multiply(species[10] * species[1],
                 divide_chain(forward_reaction_18,
                              dforward_reaction_18_dtemperature,
                              equilibrium_constant_18,
                              dequilibrium_constant_18_dtemperature));

        dsource_species_dtemperature_[9] += -drate_of_progress_18_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_18_dtemperature;
        dsource_species_dtemperature_[10] += drate_of_progress_18_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_18_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_19(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_19,
                                                           const double& dequilibrium_constant_19_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_19 = call_forward_reaction_19(temperature, log_temperature);
        double dforward_reaction_19_dtemperature = dcall_forward_reaction_19_dtemperature(temperature,log_temperature);

        dforward_reaction_19_dtemperature += dcall_forward_reaction_19_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 19: CO + OH <=> CO2 + H

        double drate_of_progress_19_dtemperature =
        multiply(species[9] * species[4], dforward_reaction_19_dtemperature)
        -
        multiply(species[10] * species[1],
                 divide_chain(forward_reaction_19,
                              dforward_reaction_19_dtemperature,
                              equilibrium_constant_19,
                              dequilibrium_constant_19_dtemperature));

        dsource_species_dtemperature_[9] += -drate_of_progress_19_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_19_dtemperature;
        dsource_species_dtemperature_[10] += drate_of_progress_19_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_19_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_20(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_20,
                                                           const double& dequilibrium_constant_20_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_20 = call_forward_reaction_20(temperature, log_temperature);
        double dforward_reaction_20_dtemperature = dcall_forward_reaction_20_dtemperature(temperature,log_temperature);

        dforward_reaction_20_dtemperature += dcall_forward_reaction_20_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 20: CO + HO2 <=> CO2 + OH

        double drate_of_progress_20_dtemperature =
        multiply(species[9] * species[5], dforward_reaction_20_dtemperature)
        -
        multiply(species[10] * species[4],
                 divide_chain(forward_reaction_20,
                              dforward_reaction_20_dtemperature,
                              equilibrium_constant_20,
                              dequilibrium_constant_20_dtemperature));

        dsource_species_dtemperature_[9] += -drate_of_progress_20_dtemperature;
        dsource_species_dtemperature_[5] += -drate_of_progress_20_dtemperature;
        dsource_species_dtemperature_[10] += drate_of_progress_20_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_20_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_21(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_21,
                                                           const double& dequilibrium_constant_21_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_21 = call_forward_reaction_21(temperature, log_temperature);
        double dforward_reaction_21_dtemperature = dcall_forward_reaction_21_dtemperature(temperature,log_temperature);

        dforward_reaction_21_dtemperature += dcall_forward_reaction_21_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 21: CH4 + H <=> CH3 + H2

        double drate_of_progress_21_dtemperature =
        multiply(species[8] * species[1], dforward_reaction_21_dtemperature)
        -
        multiply(species[7] * species[0],
                 divide_chain(forward_reaction_21,
                              dforward_reaction_21_dtemperature,
                              equilibrium_constant_21,
                              dequilibrium_constant_21_dtemperature));

        dsource_species_dtemperature_[8] += -drate_of_progress_21_dtemperature;
        dsource_species_dtemperature_[1] += -drate_of_progress_21_dtemperature;
        dsource_species_dtemperature_[7] += drate_of_progress_21_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_21_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_22(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_22,
                                                           const double& dequilibrium_constant_22_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_22 = call_forward_reaction_22(temperature, log_temperature);
        double dforward_reaction_22_dtemperature = dcall_forward_reaction_22_dtemperature(temperature,log_temperature);

        dforward_reaction_22_dtemperature += dcall_forward_reaction_22_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 22: CH4 + O <=> CH3 + OH

        double drate_of_progress_22_dtemperature =
        multiply(species[8] * species[3], dforward_reaction_22_dtemperature)
        -
        multiply(species[7] * species[4],
                 divide_chain(forward_reaction_22,
                              dforward_reaction_22_dtemperature,
                              equilibrium_constant_22,
                              dequilibrium_constant_22_dtemperature));

        dsource_species_dtemperature_[8] += -drate_of_progress_22_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_22_dtemperature;
        dsource_species_dtemperature_[7] += drate_of_progress_22_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_22_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_23(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_23,
                                                           const double& dequilibrium_constant_23_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_23 = call_forward_reaction_23(temperature, log_temperature);
        double dforward_reaction_23_dtemperature = dcall_forward_reaction_23_dtemperature(temperature,log_temperature);

        dforward_reaction_23_dtemperature += dcall_forward_reaction_23_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 23: CH4 + OH <=> CH3 + H2O

        double drate_of_progress_23_dtemperature =
        multiply(species[8] * species[4], dforward_reaction_23_dtemperature)
        -
        multiply(species[7] * species[6],
                 divide_chain(forward_reaction_23,
                              dforward_reaction_23_dtemperature,
                              equilibrium_constant_23,
                              dequilibrium_constant_23_dtemperature));

        dsource_species_dtemperature_[8] += -drate_of_progress_23_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_23_dtemperature;
        dsource_species_dtemperature_[7] += drate_of_progress_23_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_23_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_24(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_24,
                                                           const double& dequilibrium_constant_24_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_24 =  call_forward_reaction_24(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_24_dtemperature = dcall_forward_reaction_24_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_24_dtemperature += dcall_forward_reaction_24_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 24: CH3 + H (+M) <=> CH4 (+M)

        double drate_of_progress_24_dtemperature =
        multiply(species[7] * species[1], dforward_reaction_24_dtemperature)
        -
        multiply(species[8],
                 divide_chain(forward_reaction_24,
                              dforward_reaction_24_dtemperature,
                              equilibrium_constant_24,
                              dequilibrium_constant_24_dtemperature));

        dsource_species_dtemperature_[7] += -drate_of_progress_24_dtemperature;
        dsource_species_dtemperature_[1] += -drate_of_progress_24_dtemperature;
        dsource_species_dtemperature_[8] += drate_of_progress_24_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_25(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_25,
                                                           const double& dequilibrium_constant_25_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_25 = call_forward_reaction_25(temperature, log_temperature);
        double dforward_reaction_25_dtemperature = dcall_forward_reaction_25_dtemperature(temperature,log_temperature);

        dforward_reaction_25_dtemperature += dcall_forward_reaction_25_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 25: CH3 + O <=> CH2O + H

        double drate_of_progress_25_dtemperature =
        multiply(species[7] * species[3], dforward_reaction_25_dtemperature)
        -
        multiply(species[11] * species[1],
                 divide_chain(forward_reaction_25,
                              dforward_reaction_25_dtemperature,
                              equilibrium_constant_25,
                              dequilibrium_constant_25_dtemperature));

        dsource_species_dtemperature_[7] += -drate_of_progress_25_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_25_dtemperature;
        dsource_species_dtemperature_[11] += drate_of_progress_25_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_25_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_26(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_26 = call_forward_reaction_26(temperature, log_temperature);
        double dforward_reaction_26_dtemperature = dcall_forward_reaction_26_dtemperature(temperature,log_temperature);

        dforward_reaction_26_dtemperature += dcall_forward_reaction_26_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 26: CH3 + O => CO + H + H2

        double drate_of_progress_26_dtemperature =  multiply(species[7] * species[3], dforward_reaction_26_dtemperature);
        dsource_species_dtemperature_[7] += -drate_of_progress_26_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_26_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_26_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_26_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_26_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_27(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_27,
                                                           const double& dequilibrium_constant_27_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_27 = call_forward_reaction_27(temperature, log_temperature);
        double dforward_reaction_27_dtemperature = dcall_forward_reaction_27_dtemperature(temperature,log_temperature);

        dforward_reaction_27_dtemperature += dcall_forward_reaction_27_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 27: CH3 + HO2 <=> CH4 + O2

        double drate_of_progress_27_dtemperature =
        multiply(species[7] * species[5], dforward_reaction_27_dtemperature)
        -
        multiply(species[8] * species[2],
                 divide_chain(forward_reaction_27,
                              dforward_reaction_27_dtemperature,
                              equilibrium_constant_27,
                              dequilibrium_constant_27_dtemperature));

        dsource_species_dtemperature_[7] += -drate_of_progress_27_dtemperature;
        dsource_species_dtemperature_[5] += -drate_of_progress_27_dtemperature;
        dsource_species_dtemperature_[8] += drate_of_progress_27_dtemperature;
        dsource_species_dtemperature_[2] += drate_of_progress_27_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_28(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_28 = call_forward_reaction_28(temperature, log_temperature);
        double dforward_reaction_28_dtemperature = dcall_forward_reaction_28_dtemperature(temperature,log_temperature);

        dforward_reaction_28_dtemperature += dcall_forward_reaction_28_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 28: CH3 + HO2 => CH2O + H + OH

        double drate_of_progress_28_dtemperature =  multiply(species[7] * species[5], dforward_reaction_28_dtemperature);
        dsource_species_dtemperature_[7] += -drate_of_progress_28_dtemperature;
        dsource_species_dtemperature_[5] += -drate_of_progress_28_dtemperature;
        dsource_species_dtemperature_[11] += drate_of_progress_28_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_28_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_28_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_29(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_29 = call_forward_reaction_29(temperature, log_temperature);
        double dforward_reaction_29_dtemperature = dcall_forward_reaction_29_dtemperature(temperature,log_temperature);

        dforward_reaction_29_dtemperature += dcall_forward_reaction_29_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 29: CH3 + O2 => CH2O + H + O

        double drate_of_progress_29_dtemperature =  multiply(species[7] * species[2], dforward_reaction_29_dtemperature);
        dsource_species_dtemperature_[7] += -drate_of_progress_29_dtemperature;
        dsource_species_dtemperature_[2] += -drate_of_progress_29_dtemperature;
        dsource_species_dtemperature_[11] += drate_of_progress_29_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_29_dtemperature;
        dsource_species_dtemperature_[3] += drate_of_progress_29_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_30(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_30,
                                                           const double& dequilibrium_constant_30_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_30 = call_forward_reaction_30(temperature, log_temperature);
        double dforward_reaction_30_dtemperature = dcall_forward_reaction_30_dtemperature(temperature,log_temperature);

        dforward_reaction_30_dtemperature += dcall_forward_reaction_30_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 30: CH3 + O2 <=> CH2O + OH

        double drate_of_progress_30_dtemperature =
        multiply(species[7] * species[2], dforward_reaction_30_dtemperature)
        -
        multiply(species[11] * species[4],
                 divide_chain(forward_reaction_30,
                              dforward_reaction_30_dtemperature,
                              equilibrium_constant_30,
                              dequilibrium_constant_30_dtemperature));

        dsource_species_dtemperature_[7] += -drate_of_progress_30_dtemperature;
        dsource_species_dtemperature_[2] += -drate_of_progress_30_dtemperature;
        dsource_species_dtemperature_[11] += drate_of_progress_30_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_30_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_31(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_31 = call_forward_reaction_31(temperature, log_temperature);
        double dforward_reaction_31_dtemperature = dcall_forward_reaction_31_dtemperature(temperature,log_temperature);

        dforward_reaction_31_dtemperature += dcall_forward_reaction_31_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 31: CH2O + CH3 => CH4 + CO + H

        double drate_of_progress_31_dtemperature =  multiply(species[11] * species[7], dforward_reaction_31_dtemperature);
        dsource_species_dtemperature_[11] += -drate_of_progress_31_dtemperature;
        dsource_species_dtemperature_[7] += -drate_of_progress_31_dtemperature;
        dsource_species_dtemperature_[8] += drate_of_progress_31_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_31_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_31_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_32(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_32,
                                                           const double& dequilibrium_constant_32_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_32 =  call_forward_reaction_32(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_32_dtemperature = dcall_forward_reaction_32_dtemperature(species,temperature,log_temperature,mixture_concentration);


        dforward_reaction_32_dtemperature += dcall_forward_reaction_32_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


        

        // Reaction 32: CH2O (+M) <=> CO + H2 (+M)

        double drate_of_progress_32_dtemperature =
        multiply(species[11], dforward_reaction_32_dtemperature)
        -
        multiply(species[9] * species[0],
                 divide_chain(forward_reaction_32,
                              dforward_reaction_32_dtemperature,
                              equilibrium_constant_32,
                              dequilibrium_constant_32_dtemperature));

        dsource_species_dtemperature_[11] += -drate_of_progress_32_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_32_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_32_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_33(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_33 =  call_forward_reaction_33(species, temperature, log_temperature, species[1]);
        double dforward_reaction_33_dtemperature = dcall_forward_reaction_33_dtemperature(species,temperature,log_temperature,species[1]);


        dforward_reaction_33_dtemperature += dcall_forward_reaction_33_dlog_temperature(species,temperature,log_temperature,species[1]) * dlog_temperature_dtemperature;


        

        // Reaction 33: CH2O + H => CO + H2 + H

        double drate_of_progress_33_dtemperature =  multiply(species[11], dforward_reaction_33_dtemperature);
        dsource_species_dtemperature_[11] += -drate_of_progress_33_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_33_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_33_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_34(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_34 =  call_forward_reaction_34(species, temperature, log_temperature, species[1]);
        double dforward_reaction_34_dtemperature = dcall_forward_reaction_34_dtemperature(species,temperature,log_temperature,species[1]);


        dforward_reaction_34_dtemperature += dcall_forward_reaction_34_dlog_temperature(species,temperature,log_temperature,species[1]) * dlog_temperature_dtemperature;


        

        // Reaction 34: CH2O + H => CO + H2 + H

        double drate_of_progress_34_dtemperature =  multiply(species[11], dforward_reaction_34_dtemperature);
        dsource_species_dtemperature_[11] += -drate_of_progress_34_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_34_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_34_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_35(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_35 = call_forward_reaction_35(temperature, log_temperature);
        double dforward_reaction_35_dtemperature = dcall_forward_reaction_35_dtemperature(temperature,log_temperature);

        dforward_reaction_35_dtemperature += dcall_forward_reaction_35_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 35: CH2O + O => CO + H + OH

        double drate_of_progress_35_dtemperature =  multiply(species[11] * species[3], dforward_reaction_35_dtemperature);
        dsource_species_dtemperature_[11] += -drate_of_progress_35_dtemperature;
        dsource_species_dtemperature_[3] += -drate_of_progress_35_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_35_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_35_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_35_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_36(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_36 = call_forward_reaction_36(temperature, log_temperature);
        double dforward_reaction_36_dtemperature = dcall_forward_reaction_36_dtemperature(temperature,log_temperature);

        dforward_reaction_36_dtemperature += dcall_forward_reaction_36_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 36: CH2O + OH => CO + H + H2O

        double drate_of_progress_36_dtemperature =  multiply(species[11] * species[4], dforward_reaction_36_dtemperature);
        dsource_species_dtemperature_[11] += -drate_of_progress_36_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_36_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_36_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_36_dtemperature;
        dsource_species_dtemperature_[6] += drate_of_progress_36_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_37(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_37 = call_forward_reaction_37(temperature, log_temperature);
        double dforward_reaction_37_dtemperature = dcall_forward_reaction_37_dtemperature(temperature,log_temperature);

        dforward_reaction_37_dtemperature += dcall_forward_reaction_37_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 37: CH2O + O2 => CO + H + HO2

        double drate_of_progress_37_dtemperature =  multiply(species[11] * species[2], dforward_reaction_37_dtemperature);
        dsource_species_dtemperature_[11] += -drate_of_progress_37_dtemperature;
        dsource_species_dtemperature_[2] += -drate_of_progress_37_dtemperature;
        dsource_species_dtemperature_[9] += drate_of_progress_37_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_37_dtemperature;
        dsource_species_dtemperature_[5] += drate_of_progress_37_dtemperature;
}


void update_jacobian_reaction_0(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_0,
                                               const double& dequilibrium_constant_0_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        double dforward_reaction_0_dtemperature = dcall_forward_reaction_0_dtemperature(temperature,log_temperature);

        dforward_reaction_0_dtemperature += dcall_forward_reaction_0_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_0 = multiply(species[1] * species[2], forward_reaction_0) - multiply(species[3] * species[4], divide(forward_reaction_0, equilibrium_constant_0));
        

        //drate_of_progress_dspecies[0] = {double(0)};
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_0); // [0][1] +
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_0); // [0][2] +
        jacobian_net_production_rates[2][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_0, equilibrium_constant_0));
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_0, equilibrium_constant_0));
        jacobian_net_production_rates[2][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_1(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_1,
                                               const double& dequilibrium_constant_1_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        double dforward_reaction_1_dtemperature = dcall_forward_reaction_1_dtemperature(temperature,log_temperature);

        dforward_reaction_1_dtemperature += dcall_forward_reaction_1_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_1 = multiply(species[0] * species[3], forward_reaction_1) - multiply(species[1] * species[4], divide(forward_reaction_1, equilibrium_constant_1));
        

        //drate_of_progress_dspecies[1] = {double(0)};
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_1); // [1][0] +
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_1); // [1][3] +
        jacobian_net_production_rates[1][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_1, equilibrium_constant_1));
        jacobian_net_production_rates[1][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_1, equilibrium_constant_1));
        jacobian_net_production_rates[1][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_2(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_2,
                                               const double& dequilibrium_constant_2_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        double dforward_reaction_2_dtemperature = dcall_forward_reaction_2_dtemperature(temperature,log_temperature);

        dforward_reaction_2_dtemperature += dcall_forward_reaction_2_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_2 = multiply(species[0] * species[3], forward_reaction_2) - multiply(species[1] * species[4], divide(forward_reaction_2, equilibrium_constant_2));
        

        //drate_of_progress_dspecies[2] = {double(0)};
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_2); // [2][0] +
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_2); // [2][3] +
        jacobian_net_production_rates[1][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_2, equilibrium_constant_2));
        jacobian_net_production_rates[1][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_2, equilibrium_constant_2));
        jacobian_net_production_rates[1][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_3(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_3,
                                               const double& dequilibrium_constant_3_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        double dforward_reaction_3_dtemperature = dcall_forward_reaction_3_dtemperature(temperature,log_temperature);

        dforward_reaction_3_dtemperature += dcall_forward_reaction_3_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_3 = multiply(species[0] * species[4], forward_reaction_3) - multiply(species[1] * species[6], divide(forward_reaction_3, equilibrium_constant_3));
        

        //drate_of_progress_dspecies[3] = {double(0)};
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_3); // [3][0] +
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[0], forward_reaction_3); // [3][4] +
        jacobian_net_production_rates[1][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_3, equilibrium_constant_3));
        jacobian_net_production_rates[1][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_3, equilibrium_constant_3));
        jacobian_net_production_rates[1][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_4(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_4,
                                               const double& dequilibrium_constant_4_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        double dforward_reaction_4_dtemperature = dcall_forward_reaction_4_dtemperature(temperature,log_temperature);

        dforward_reaction_4_dtemperature += dcall_forward_reaction_4_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_4 = multiply(pow_gen2(species[4]), forward_reaction_4) - multiply(species[6] * species[3], divide(forward_reaction_4, equilibrium_constant_4));
        

        //drate_of_progress_dspecies[4] = {double(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[4]), forward_reaction_4); // [4][4] +
        jacobian_net_production_rates[5][5] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_4, equilibrium_constant_4));
        jacobian_net_production_rates[5][4] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_4, equilibrium_constant_4));
        jacobian_net_production_rates[5][7] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_5(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_5,
                                               const double& dequilibrium_constant_5_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_5 =  call_forward_reaction_5(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_5_dtemperature = dcall_forward_reaction_5_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_5_dspecies = dcall_forward_reaction_5_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_5_dtemperature += dcall_forward_reaction_5_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_5 = multiply(species[0], forward_reaction_5) - multiply(pow_gen2(species[1]), divide(forward_reaction_5, equilibrium_constant_5));
        


        drate_of_progress_dspecies = forward_reaction_5;// 5 0 
        jacobian_net_production_rates[1][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[1]), divide(forward_reaction_5, equilibrium_constant_5));// 5 1
        jacobian_net_production_rates[1][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += 2.0*drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[0] - divide(pow_gen2(species[1]), equilibrium_constant_5),
                  dforward_reaction_5_dspecies);
        jacobian_net_production_rates[1] = add_species_to_chemical_state(jacobian_net_production_rates[1], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[2] = add_species_to_chemical_state(jacobian_net_production_rates[2], scale_gen(2.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_6(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_6,
                                               const double& dequilibrium_constant_6_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_6 =  call_forward_reaction_6(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_6_dtemperature = dcall_forward_reaction_6_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_6_dspecies = dcall_forward_reaction_6_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_6_dtemperature += dcall_forward_reaction_6_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_6 = multiply(species[1] * species[3], forward_reaction_6) - multiply(species[4], divide(forward_reaction_6, equilibrium_constant_6));
        


        drate_of_progress_dspecies = multiply(species[3], forward_reaction_6);//6 1
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_6);//6 3
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_6, equilibrium_constant_6); //6 4
        jacobian_net_production_rates[2][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[1] * species[3] - divide(species[4], equilibrium_constant_6),
                  dforward_reaction_6_dspecies);
        jacobian_net_production_rates[2] = add_species_to_chemical_state(jacobian_net_production_rates[2], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[4] = add_species_to_chemical_state(jacobian_net_production_rates[4], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[5] = add_species_to_chemical_state(jacobian_net_production_rates[5], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_7(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_7,
                                               const double& dequilibrium_constant_7_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_7 =  call_forward_reaction_7(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_7_dtemperature = dcall_forward_reaction_7_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_7_dspecies = dcall_forward_reaction_7_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_7_dtemperature += dcall_forward_reaction_7_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_7 = multiply(species[6], forward_reaction_7) - multiply(species[1] * species[4], divide(forward_reaction_7, equilibrium_constant_7));
        


        drate_of_progress_dspecies = forward_reaction_7;// 7 6 
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_7, equilibrium_constant_7));// 7 1
        jacobian_net_production_rates[7][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_7, equilibrium_constant_7));// 7 4
        jacobian_net_production_rates[7][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[6] - divide(species[1] * species[4], equilibrium_constant_7),
                  dforward_reaction_7_dspecies);
        jacobian_net_production_rates[7] = add_species_to_chemical_state(jacobian_net_production_rates[7], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[2] = add_species_to_chemical_state(jacobian_net_production_rates[2], scale_gen(1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[5] = add_species_to_chemical_state(jacobian_net_production_rates[5], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_8(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_8,
                                               const double& dequilibrium_constant_8_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_8 =  call_forward_reaction_8(species, temperature, log_temperature, species[6]);
        double dforward_reaction_8_dtemperature = dcall_forward_reaction_8_dtemperature(species,temperature,log_temperature,species[6]);

        Species dforward_reaction_8_dspecies = dcall_forward_reaction_8_dspecies(species,temperature,log_temperature,species[6]);

        dforward_reaction_8_dtemperature += dcall_forward_reaction_8_dlog_temperature(species,temperature,log_temperature,species[6]) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_8 = multiply(species[6], forward_reaction_8) - multiply(species[1] * species[4], divide(forward_reaction_8, equilibrium_constant_8));
        


        drate_of_progress_dspecies = forward_reaction_8;// 8 6 
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_8, equilibrium_constant_8));// 8 1
        jacobian_net_production_rates[7][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_8, equilibrium_constant_8));// 8 4
        jacobian_net_production_rates[7][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[6] - divide(species[1] * species[4], equilibrium_constant_8),
                  dforward_reaction_8_dspecies);
        jacobian_net_production_rates[7] = add_species_to_chemical_state(jacobian_net_production_rates[7], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[2] = add_species_to_chemical_state(jacobian_net_production_rates[2], scale_gen(1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[5] = add_species_to_chemical_state(jacobian_net_production_rates[5], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_9(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_9,
                                               const double& dequilibrium_constant_9_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_9 =  call_forward_reaction_9(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_9_dtemperature = dcall_forward_reaction_9_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_9_dspecies = dcall_forward_reaction_9_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_9_dtemperature += dcall_forward_reaction_9_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_9 = multiply(species[1] * species[2], forward_reaction_9) - multiply(species[5], divide(forward_reaction_9, equilibrium_constant_9));
        


        drate_of_progress_dspecies = multiply(species[2], forward_reaction_9);//9 1
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_9);//9 2
        jacobian_net_production_rates[2][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_9, equilibrium_constant_9); //9 5
        jacobian_net_production_rates[2][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[1] * species[2] - divide(species[5], equilibrium_constant_9),
                  dforward_reaction_9_dspecies);
        jacobian_net_production_rates[2] = add_species_to_chemical_state(jacobian_net_production_rates[2], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[3] = add_species_to_chemical_state(jacobian_net_production_rates[3], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[6] = add_species_to_chemical_state(jacobian_net_production_rates[6], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_10(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_10,
                                               const double& dequilibrium_constant_10_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_10 = call_forward_reaction_10(temperature, log_temperature);
        double dforward_reaction_10_dtemperature = dcall_forward_reaction_10_dtemperature(temperature,log_temperature);

        dforward_reaction_10_dtemperature += dcall_forward_reaction_10_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_10 = multiply(species[1] * species[5], forward_reaction_10) - multiply(species[0] * species[2], divide(forward_reaction_10, equilibrium_constant_10));
        

        //drate_of_progress_dspecies[10] = {double(0)};
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_10); // [10][1] +
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_10); // [10][5] +
        jacobian_net_production_rates[2][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_10, equilibrium_constant_10));
        jacobian_net_production_rates[2][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_10, equilibrium_constant_10));
        jacobian_net_production_rates[2][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[1][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_11(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_11,
                                               const double& dequilibrium_constant_11_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_11 = call_forward_reaction_11(temperature, log_temperature);
        double dforward_reaction_11_dtemperature = dcall_forward_reaction_11_dtemperature(temperature,log_temperature);

        dforward_reaction_11_dtemperature += dcall_forward_reaction_11_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_11 = multiply(species[1] * species[5], forward_reaction_11) - multiply(pow_gen2(species[4]), divide(forward_reaction_11, equilibrium_constant_11));
        

        //drate_of_progress_dspecies[11] = {double(0)};
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_11); // [11][1] +
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_11); // [11][5] +
        jacobian_net_production_rates[2][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[4]), divide(forward_reaction_11, equilibrium_constant_11));
        jacobian_net_production_rates[2][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += 2.0*drate_of_progress_dspecies;
}


void update_jacobian_reaction_12(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_12,
                                               const double& dequilibrium_constant_12_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_12 = call_forward_reaction_12(temperature, log_temperature);
        double dforward_reaction_12_dtemperature = dcall_forward_reaction_12_dtemperature(temperature,log_temperature);

        dforward_reaction_12_dtemperature += dcall_forward_reaction_12_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_12 = multiply(species[1] * species[5], forward_reaction_12) - multiply(species[6] * species[3], divide(forward_reaction_12, equilibrium_constant_12));
        

        //drate_of_progress_dspecies[12] = {double(0)};
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_12); // [12][1] +
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_12); // [12][5] +
        jacobian_net_production_rates[2][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_12, equilibrium_constant_12));
        jacobian_net_production_rates[2][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_12, equilibrium_constant_12));
        jacobian_net_production_rates[2][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][7] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_13(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_13,
                                               const double& dequilibrium_constant_13_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_13 = call_forward_reaction_13(temperature, log_temperature);
        double dforward_reaction_13_dtemperature = dcall_forward_reaction_13_dtemperature(temperature,log_temperature);

        dforward_reaction_13_dtemperature += dcall_forward_reaction_13_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_13 = multiply(species[5] * species[3], forward_reaction_13) - multiply(species[2] * species[4], divide(forward_reaction_13, equilibrium_constant_13));
        

        //drate_of_progress_dspecies[13] = {double(0)};
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_13); // [13][3] +
        jacobian_net_production_rates[6][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_13); // [13][5] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_13, equilibrium_constant_13));
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_13, equilibrium_constant_13));
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_14(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_14,
                                               const double& dequilibrium_constant_14_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_14 = call_forward_reaction_14(temperature, log_temperature);
        double dforward_reaction_14_dtemperature = dcall_forward_reaction_14_dtemperature(temperature,log_temperature);

        dforward_reaction_14_dtemperature += dcall_forward_reaction_14_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_14 = multiply(species[5] * species[4], forward_reaction_14) - multiply(species[6] * species[2], divide(forward_reaction_14, equilibrium_constant_14));
        

        //drate_of_progress_dspecies[14] = {double(0)};
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_14); // [14][4] +
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_14); // [14][5] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_14, equilibrium_constant_14));
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_14, equilibrium_constant_14));
        jacobian_net_production_rates[6][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][7] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_15(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_15,
                                               const double& dequilibrium_constant_15_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_15 = call_forward_reaction_15(temperature, log_temperature);
        double dforward_reaction_15_dtemperature = dcall_forward_reaction_15_dtemperature(temperature,log_temperature);

        dforward_reaction_15_dtemperature += dcall_forward_reaction_15_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_15 = multiply(species[5] * species[4], forward_reaction_15) - multiply(species[6] * species[2], divide(forward_reaction_15, equilibrium_constant_15));
        

        //drate_of_progress_dspecies[15] = {double(0)};
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_15); // [15][4] +
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_15); // [15][5] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_15, equilibrium_constant_15));
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_15, equilibrium_constant_15));
        jacobian_net_production_rates[6][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][7] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_16(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_16,
                                               const double& dequilibrium_constant_16_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_16 =  call_forward_reaction_16(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_16_dtemperature = dcall_forward_reaction_16_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_16_dspecies = dcall_forward_reaction_16_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_16_dtemperature += dcall_forward_reaction_16_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_16 = multiply(species[9] * species[3], forward_reaction_16) - multiply(species[10], divide(forward_reaction_16, equilibrium_constant_16));
        


        drate_of_progress_dspecies = multiply(species[9], forward_reaction_16);//16 3
        jacobian_net_production_rates[10][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_16);//16 9
        jacobian_net_production_rates[10][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][10] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_16, equilibrium_constant_16); //16 10
        jacobian_net_production_rates[10][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][11] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[9] * species[3] - divide(species[10], equilibrium_constant_16),
                  dforward_reaction_16_dspecies);
        jacobian_net_production_rates[10] = add_species_to_chemical_state(jacobian_net_production_rates[10], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[4] = add_species_to_chemical_state(jacobian_net_production_rates[4], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[11] = add_species_to_chemical_state(jacobian_net_production_rates[11], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_17(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_17,
                                               const double& dequilibrium_constant_17_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_17 = call_forward_reaction_17(temperature, log_temperature);
        double dforward_reaction_17_dtemperature = dcall_forward_reaction_17_dtemperature(temperature,log_temperature);

        dforward_reaction_17_dtemperature += dcall_forward_reaction_17_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_17 = multiply(species[9] * species[2], forward_reaction_17) - multiply(species[10] * species[3], divide(forward_reaction_17, equilibrium_constant_17));
        

        //drate_of_progress_dspecies[17] = {double(0)};
        drate_of_progress_dspecies = multiply(species[9], forward_reaction_17); // [17][2] +
        jacobian_net_production_rates[10][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_17); // [17][9] +
        jacobian_net_production_rates[10][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][10] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][10] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[10], divide(forward_reaction_17, equilibrium_constant_17));
        jacobian_net_production_rates[10][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[3], divide(forward_reaction_17, equilibrium_constant_17));
        jacobian_net_production_rates[10][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][11] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][11] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_18(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_18,
                                               const double& dequilibrium_constant_18_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_18 = call_forward_reaction_18(temperature, log_temperature);
        double dforward_reaction_18_dtemperature = dcall_forward_reaction_18_dtemperature(temperature,log_temperature);

        dforward_reaction_18_dtemperature += dcall_forward_reaction_18_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_18 = multiply(species[9] * species[4], forward_reaction_18) - multiply(species[10] * species[1], divide(forward_reaction_18, equilibrium_constant_18));
        

        //drate_of_progress_dspecies[18] = {double(0)};
        drate_of_progress_dspecies = multiply(species[9], forward_reaction_18); // [18][4] +
        jacobian_net_production_rates[10][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_18); // [18][9] +
        jacobian_net_production_rates[10][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][10] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][10] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[10], divide(forward_reaction_18, equilibrium_constant_18));
        jacobian_net_production_rates[10][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_18, equilibrium_constant_18));
        jacobian_net_production_rates[10][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][11] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][11] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_19(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_19,
                                               const double& dequilibrium_constant_19_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_19 = call_forward_reaction_19(temperature, log_temperature);
        double dforward_reaction_19_dtemperature = dcall_forward_reaction_19_dtemperature(temperature,log_temperature);

        dforward_reaction_19_dtemperature += dcall_forward_reaction_19_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_19 = multiply(species[9] * species[4], forward_reaction_19) - multiply(species[10] * species[1], divide(forward_reaction_19, equilibrium_constant_19));
        

        //drate_of_progress_dspecies[19] = {double(0)};
        drate_of_progress_dspecies = multiply(species[9], forward_reaction_19); // [19][4] +
        jacobian_net_production_rates[10][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_19); // [19][9] +
        jacobian_net_production_rates[10][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][10] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][10] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[10], divide(forward_reaction_19, equilibrium_constant_19));
        jacobian_net_production_rates[10][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_19, equilibrium_constant_19));
        jacobian_net_production_rates[10][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][11] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][11] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_20(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_20,
                                               const double& dequilibrium_constant_20_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_20 = call_forward_reaction_20(temperature, log_temperature);
        double dforward_reaction_20_dtemperature = dcall_forward_reaction_20_dtemperature(temperature,log_temperature);

        dforward_reaction_20_dtemperature += dcall_forward_reaction_20_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_20 = multiply(species[9] * species[5], forward_reaction_20) - multiply(species[10] * species[4], divide(forward_reaction_20, equilibrium_constant_20));
        

        //drate_of_progress_dspecies[20] = {double(0)};
        drate_of_progress_dspecies = multiply(species[9], forward_reaction_20); // [20][5] +
        jacobian_net_production_rates[10][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_20); // [20][9] +
        jacobian_net_production_rates[10][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][10] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][10] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[10], divide(forward_reaction_20, equilibrium_constant_20));
        jacobian_net_production_rates[10][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_20, equilibrium_constant_20));
        jacobian_net_production_rates[10][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][11] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[11][11] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][11] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_21(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_21,
                                               const double& dequilibrium_constant_21_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_21 = call_forward_reaction_21(temperature, log_temperature);
        double dforward_reaction_21_dtemperature = dcall_forward_reaction_21_dtemperature(temperature,log_temperature);

        dforward_reaction_21_dtemperature += dcall_forward_reaction_21_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_21 = multiply(species[8] * species[1], forward_reaction_21) - multiply(species[7] * species[0], divide(forward_reaction_21, equilibrium_constant_21));
        

        //drate_of_progress_dspecies[21] = {double(0)};
        drate_of_progress_dspecies = multiply(species[8], forward_reaction_21); // [21][1] +
        jacobian_net_production_rates[9][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_21); // [21][8] +
        jacobian_net_production_rates[9][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][9] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][9] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[7], divide(forward_reaction_21, equilibrium_constant_21));
        jacobian_net_production_rates[9][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_21, equilibrium_constant_21));
        jacobian_net_production_rates[9][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_22(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_22,
                                               const double& dequilibrium_constant_22_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_22 = call_forward_reaction_22(temperature, log_temperature);
        double dforward_reaction_22_dtemperature = dcall_forward_reaction_22_dtemperature(temperature,log_temperature);

        dforward_reaction_22_dtemperature += dcall_forward_reaction_22_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_22 = multiply(species[8] * species[3], forward_reaction_22) - multiply(species[7] * species[4], divide(forward_reaction_22, equilibrium_constant_22));
        

        //drate_of_progress_dspecies[22] = {double(0)};
        drate_of_progress_dspecies = multiply(species[8], forward_reaction_22); // [22][3] +
        jacobian_net_production_rates[9][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_22); // [22][8] +
        jacobian_net_production_rates[9][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][9] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][9] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[7], divide(forward_reaction_22, equilibrium_constant_22));
        jacobian_net_production_rates[9][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_22, equilibrium_constant_22));
        jacobian_net_production_rates[9][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_23(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_23,
                                               const double& dequilibrium_constant_23_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_23 = call_forward_reaction_23(temperature, log_temperature);
        double dforward_reaction_23_dtemperature = dcall_forward_reaction_23_dtemperature(temperature,log_temperature);

        dforward_reaction_23_dtemperature += dcall_forward_reaction_23_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_23 = multiply(species[8] * species[4], forward_reaction_23) - multiply(species[7] * species[6], divide(forward_reaction_23, equilibrium_constant_23));
        

        //drate_of_progress_dspecies[23] = {double(0)};
        drate_of_progress_dspecies = multiply(species[8], forward_reaction_23); // [23][4] +
        jacobian_net_production_rates[9][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_23); // [23][8] +
        jacobian_net_production_rates[9][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][9] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][9] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[7], divide(forward_reaction_23, equilibrium_constant_23));
        jacobian_net_production_rates[9][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[6], divide(forward_reaction_23, equilibrium_constant_23));
        jacobian_net_production_rates[9][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_24(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_24,
                                               const double& dequilibrium_constant_24_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_24 =  call_forward_reaction_24(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_24_dtemperature = dcall_forward_reaction_24_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_24_dspecies = dcall_forward_reaction_24_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_24_dtemperature += dcall_forward_reaction_24_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_24 = multiply(species[7] * species[1], forward_reaction_24) - multiply(species[8], divide(forward_reaction_24, equilibrium_constant_24));
        


        drate_of_progress_dspecies = multiply(species[7], forward_reaction_24);//24 1
        jacobian_net_production_rates[8][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[1], forward_reaction_24);//24 7
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][8] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -divide(forward_reaction_24, equilibrium_constant_24); //24 8
        jacobian_net_production_rates[8][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[2][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][9] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[7] * species[1] - divide(species[8], equilibrium_constant_24),
                  dforward_reaction_24_dspecies);
        jacobian_net_production_rates[8] = add_species_to_chemical_state(jacobian_net_production_rates[8], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[2] = add_species_to_chemical_state(jacobian_net_production_rates[2], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[9] = add_species_to_chemical_state(jacobian_net_production_rates[9], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_25(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_25,
                                               const double& dequilibrium_constant_25_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_25 = call_forward_reaction_25(temperature, log_temperature);
        double dforward_reaction_25_dtemperature = dcall_forward_reaction_25_dtemperature(temperature,log_temperature);

        dforward_reaction_25_dtemperature += dcall_forward_reaction_25_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_25 = multiply(species[7] * species[3], forward_reaction_25) - multiply(species[11] * species[1], divide(forward_reaction_25, equilibrium_constant_25));
        

        //drate_of_progress_dspecies[25] = {double(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_25); // [25][3] +
        jacobian_net_production_rates[8][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_25); // [25][7] +
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[11], divide(forward_reaction_25, equilibrium_constant_25));
        jacobian_net_production_rates[8][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_25, equilibrium_constant_25));
        jacobian_net_production_rates[8][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][12] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_26(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_26 = call_forward_reaction_26(temperature, log_temperature);
        double dforward_reaction_26_dtemperature = dcall_forward_reaction_26_dtemperature(temperature,log_temperature);

        dforward_reaction_26_dtemperature += dcall_forward_reaction_26_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_26 = multiply(species[7] * species[3], forward_reaction_26);
        


        //drate_of_progress_dspecies[26] = {double(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_26);
        jacobian_net_production_rates[8][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_26);
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_27(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_27,
                                               const double& dequilibrium_constant_27_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_27 = call_forward_reaction_27(temperature, log_temperature);
        double dforward_reaction_27_dtemperature = dcall_forward_reaction_27_dtemperature(temperature,log_temperature);

        dforward_reaction_27_dtemperature += dcall_forward_reaction_27_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_27 = multiply(species[7] * species[5], forward_reaction_27) - multiply(species[8] * species[2], divide(forward_reaction_27, equilibrium_constant_27));
        

        //drate_of_progress_dspecies[27] = {double(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_27); // [27][5] +
        jacobian_net_production_rates[8][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_27); // [27][7] +
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][8] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[8], divide(forward_reaction_27, equilibrium_constant_27));
        jacobian_net_production_rates[8][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_27, equilibrium_constant_27));
        jacobian_net_production_rates[8][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][9] += drate_of_progress_dspecies;
        jacobian_net_production_rates[3][9] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_28(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_28 = call_forward_reaction_28(temperature, log_temperature);
        double dforward_reaction_28_dtemperature = dcall_forward_reaction_28_dtemperature(temperature,log_temperature);

        dforward_reaction_28_dtemperature += dcall_forward_reaction_28_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_28 = multiply(species[7] * species[5], forward_reaction_28);
        


        //drate_of_progress_dspecies[28] = {double(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_28);
        jacobian_net_production_rates[8][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_28);
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[6][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_29(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_29 = call_forward_reaction_29(temperature, log_temperature);
        double dforward_reaction_29_dtemperature = dcall_forward_reaction_29_dtemperature(temperature,log_temperature);

        dforward_reaction_29_dtemperature += dcall_forward_reaction_29_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_29 = multiply(species[7] * species[2], forward_reaction_29);
        


        //drate_of_progress_dspecies[29] = {double(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_29);
        jacobian_net_production_rates[8][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_29);
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[4][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_30(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_30,
                                               const double& dequilibrium_constant_30_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_30 = call_forward_reaction_30(temperature, log_temperature);
        double dforward_reaction_30_dtemperature = dcall_forward_reaction_30_dtemperature(temperature,log_temperature);

        dforward_reaction_30_dtemperature += dcall_forward_reaction_30_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_30 = multiply(species[7] * species[2], forward_reaction_30) - multiply(species[11] * species[4], divide(forward_reaction_30, equilibrium_constant_30));
        

        //drate_of_progress_dspecies[30] = {double(0)};
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_30); // [30][2] +
        jacobian_net_production_rates[8][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_30); // [30][7] +
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][8] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[11], divide(forward_reaction_30, equilibrium_constant_30));
        jacobian_net_production_rates[8][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[4], divide(forward_reaction_30, equilibrium_constant_30));
        jacobian_net_production_rates[8][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[12][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][12] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_31(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_31 = call_forward_reaction_31(temperature, log_temperature);
        double dforward_reaction_31_dtemperature = dcall_forward_reaction_31_dtemperature(temperature,log_temperature);

        dforward_reaction_31_dtemperature += dcall_forward_reaction_31_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_31 = multiply(species[11] * species[7], forward_reaction_31);
        


        //drate_of_progress_dspecies[31] = {double(0)};
        drate_of_progress_dspecies = multiply(species[11], forward_reaction_31);
        jacobian_net_production_rates[12][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[10][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][8] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[7], forward_reaction_31);
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[9][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][12] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_32(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_32,
                                               const double& dequilibrium_constant_32_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_32 =  call_forward_reaction_32(species, temperature, log_temperature, mixture_concentration);
        double dforward_reaction_32_dtemperature = dcall_forward_reaction_32_dtemperature(species,temperature,log_temperature,mixture_concentration);

        Species dforward_reaction_32_dspecies = dcall_forward_reaction_32_dspecies(species,temperature,log_temperature,mixture_concentration);

        dforward_reaction_32_dtemperature += dcall_forward_reaction_32_dlog_temperature(species,temperature,log_temperature,mixture_concentration) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_32 = multiply(species[11], forward_reaction_32) - multiply(species[9] * species[0], divide(forward_reaction_32, equilibrium_constant_32));
        


        drate_of_progress_dspecies = forward_reaction_32;// 32 11 
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][12] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[9], divide(forward_reaction_32, equilibrium_constant_32));// 32 0
        jacobian_net_production_rates[12][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_32, equilibrium_constant_32));// 32 9
        jacobian_net_production_rates[12][10] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][10] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][10] += drate_of_progress_dspecies;


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[11] - divide(species[9] * species[0], equilibrium_constant_32),
                  dforward_reaction_32_dspecies);
        jacobian_net_production_rates[12] = add_species_to_chemical_state(jacobian_net_production_rates[12], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[10] = add_species_to_chemical_state(jacobian_net_production_rates[10], scale_gen(1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[1] = add_species_to_chemical_state(jacobian_net_production_rates[1], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        }


void update_jacobian_reaction_33(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_33 =  call_forward_reaction_33(species, temperature, log_temperature, species[1]);
        double dforward_reaction_33_dtemperature = dcall_forward_reaction_33_dtemperature(species,temperature,log_temperature,species[1]);

        Species dforward_reaction_33_dspecies = dcall_forward_reaction_33_dspecies(species,temperature,log_temperature,species[1]);

        dforward_reaction_33_dtemperature += dcall_forward_reaction_33_dlog_temperature(species,temperature,log_temperature,species[1]) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_33 = multiply(species[11], forward_reaction_33);
        


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[11], dforward_reaction_33_dspecies);
        jacobian_net_production_rates[12] = add_species_to_chemical_state(jacobian_net_production_rates[12], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[10] = add_species_to_chemical_state(jacobian_net_production_rates[10], scale_gen(1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[1] = add_species_to_chemical_state(jacobian_net_production_rates[1], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        
        drate_of_progress_dspecies = forward_reaction_33;
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][12] += drate_of_progress_dspecies;

}


void update_jacobian_reaction_34(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_34 =  call_forward_reaction_34(species, temperature, log_temperature, species[1]);
        double dforward_reaction_34_dtemperature = dcall_forward_reaction_34_dtemperature(species,temperature,log_temperature,species[1]);

        Species dforward_reaction_34_dspecies = dcall_forward_reaction_34_dspecies(species,temperature,log_temperature,species[1]);

        dforward_reaction_34_dtemperature += dcall_forward_reaction_34_dlog_temperature(species,temperature,log_temperature,species[1]) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_34 = multiply(species[11], forward_reaction_34);
        


        Species drate_of_progress_dspecies_all_species =
        scale_gen(species[11], dforward_reaction_34_dspecies);
        jacobian_net_production_rates[12] = add_species_to_chemical_state(jacobian_net_production_rates[12], scale_gen(-1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[10] = add_species_to_chemical_state(jacobian_net_production_rates[10], scale_gen(1.0, drate_of_progress_dspecies_all_species));
        jacobian_net_production_rates[1] = add_species_to_chemical_state(jacobian_net_production_rates[1], scale_gen(1.0, drate_of_progress_dspecies_all_species));

                        
        drate_of_progress_dspecies = forward_reaction_34;
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][12] += drate_of_progress_dspecies;

}


void update_jacobian_reaction_35(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_35 = call_forward_reaction_35(temperature, log_temperature);
        double dforward_reaction_35_dtemperature = dcall_forward_reaction_35_dtemperature(temperature,log_temperature);

        dforward_reaction_35_dtemperature += dcall_forward_reaction_35_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_35 = multiply(species[11] * species[3], forward_reaction_35);
        


        //drate_of_progress_dspecies[35] = {double(0)};
        drate_of_progress_dspecies = multiply(species[11], forward_reaction_35);
        jacobian_net_production_rates[12][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][4] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][4] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[3], forward_reaction_35);
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[5][12] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_36(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_36 = call_forward_reaction_36(temperature, log_temperature);
        double dforward_reaction_36_dtemperature = dcall_forward_reaction_36_dtemperature(temperature,log_temperature);

        dforward_reaction_36_dtemperature += dcall_forward_reaction_36_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_36 = multiply(species[11] * species[4], forward_reaction_36);
        


        //drate_of_progress_dspecies[36] = {double(0)};
        drate_of_progress_dspecies = multiply(species[11], forward_reaction_36);
        jacobian_net_production_rates[12][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][5] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[4], forward_reaction_36);
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[7][12] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_37(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_37 = call_forward_reaction_37(temperature, log_temperature);
        double dforward_reaction_37_dtemperature = dcall_forward_reaction_37_dtemperature(temperature,log_temperature);

        dforward_reaction_37_dtemperature += dcall_forward_reaction_37_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_37 = multiply(species[11] * species[2], forward_reaction_37);
        


        //drate_of_progress_dspecies[37] = {double(0)};
        drate_of_progress_dspecies = multiply(species[11], forward_reaction_37);
        jacobian_net_production_rates[12][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][3] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[2], forward_reaction_37);
        jacobian_net_production_rates[12][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][12] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[10][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][12] += drate_of_progress_dspecies;
        jacobian_net_production_rates[6][12] += drate_of_progress_dspecies;
}

    
    SpeciesJacobian source_jacobian(const Species& species, const double& temperature)  
    {
        Species net_production_rates = {double(0)};
        SpeciesJacobian jacobian_net_production_rates = {double(0)};
        double drate_of_progress_dspecies  = double(0);
        double equilibrium_constant  = double(0);
        double dequilibrium_constant_dtemperature = double(0);
        Species drate_of_progress_dspecies_all_species  = {double(0)};

        double inv_universal_gas_constant_temperature  = inv_gen(universal_gas_constant() * temperature);
        double dinv_universal_gas_constant_temperature_dtemperature  = inv_chain(universal_gas_constant() * temperature, universal_gas_constant());
        
        double log_temperature = log_gen(temperature);
        double dlog_temperature_dtemperature = dlog_da(temperature);
        
        Reactions gibbs_reactions = gibbs_reaction(log_temperature);
        Reactions dgibbs_reactions_dlog_temperature = dgibbs_reaction_dlog_temperature(log_temperature);

        
        double pressure_ = pressure(species, temperature);
        double dpressure_dtemperature_ = dpressure_dtemperature(species, temperature); //unchecked
        Species dpressure_dspecies_ = dpressure_dspecies(species, temperature); //unchecked
        
        double mixture_concentration = 
        multiply(pressure_,
                 inv_universal_gas_constant_temperature);
        double dmixture_concentration_dtemperature = 
        multiply_chain(pressure_, 
                       dpressure_dtemperature_,
                       inv_universal_gas_constant_temperature,
                       dinv_universal_gas_constant_temperature_dtemperature);
        
        Species dmixture_concentration_dspecies = Species{1}; // optimized (1/(RT))*(RT,...,RT)

        Species dtemperature_dspecies_ = dtemperature_dspecies(species, temperature);
        
            

        double equilibrium_constant_0 = multiply(exp_gen(-gibbs_reactions[0]), double(1.0));
        double dequilibrium_constant_0_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[0]), 
                       exp_chain(-gibbs_reactions[0], 
                                 -dgibbs_reactions_dlog_temperature[0]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_1 = multiply(exp_gen(-gibbs_reactions[1]), double(1.0));
        double dequilibrium_constant_1_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[1]), 
                       exp_chain(-gibbs_reactions[1], 
                                 -dgibbs_reactions_dlog_temperature[1]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_2 = multiply(exp_gen(-gibbs_reactions[2]), double(1.0));
        double dequilibrium_constant_2_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[2]), 
                       exp_chain(-gibbs_reactions[2], 
                                 -dgibbs_reactions_dlog_temperature[2]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_3 = multiply(exp_gen(-gibbs_reactions[3]), double(1.0));
        double dequilibrium_constant_3_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[3]), 
                       exp_chain(-gibbs_reactions[3], 
                                 -dgibbs_reactions_dlog_temperature[3]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_4 = multiply(exp_gen(-gibbs_reactions[4]), double(1.0));
        double dequilibrium_constant_4_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[4]), 
                       exp_chain(-gibbs_reactions[4], 
                                 -dgibbs_reactions_dlog_temperature[4]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_5 = multiply(exp_gen(-gibbs_reactions[5]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double dequilibrium_constant_5_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[5]), 
                       exp_chain(-gibbs_reactions[5], 
                                 -dgibbs_reactions_dlog_temperature[5]) * dlog_temperature_dtemperature, 
                       pressure_atmosphere() * inv_universal_gas_constant_temperature, 
                       pressure_atmosphere() * dinv_universal_gas_constant_temperature_dtemperature);


        double equilibrium_constant_6 = multiply(exp_gen(-gibbs_reactions[6]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double dequilibrium_constant_6_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[6]), 
                       exp_chain(-gibbs_reactions[6], 
                                 -dgibbs_reactions_dlog_temperature[6]) * dlog_temperature_dtemperature, 
                       inv_pressure_atmosphere() * universal_gas_constant() * temperature, 
                       inv_pressure_atmosphere() * universal_gas_constant());


        double equilibrium_constant_7 = multiply(exp_gen(-gibbs_reactions[7]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double dequilibrium_constant_7_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[7]), 
                       exp_chain(-gibbs_reactions[7], 
                                 -dgibbs_reactions_dlog_temperature[7]) * dlog_temperature_dtemperature, 
                       pressure_atmosphere() * inv_universal_gas_constant_temperature, 
                       pressure_atmosphere() * dinv_universal_gas_constant_temperature_dtemperature);


        double equilibrium_constant_8 = multiply(exp_gen(-gibbs_reactions[8]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double dequilibrium_constant_8_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[8]), 
                       exp_chain(-gibbs_reactions[8], 
                                 -dgibbs_reactions_dlog_temperature[8]) * dlog_temperature_dtemperature, 
                       pressure_atmosphere() * inv_universal_gas_constant_temperature, 
                       pressure_atmosphere() * dinv_universal_gas_constant_temperature_dtemperature);


        double equilibrium_constant_9 = multiply(exp_gen(-gibbs_reactions[9]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double dequilibrium_constant_9_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[9]), 
                       exp_chain(-gibbs_reactions[9], 
                                 -dgibbs_reactions_dlog_temperature[9]) * dlog_temperature_dtemperature, 
                       inv_pressure_atmosphere() * universal_gas_constant() * temperature, 
                       inv_pressure_atmosphere() * universal_gas_constant());


        double equilibrium_constant_10 = multiply(exp_gen(-gibbs_reactions[10]), double(1.0));
        double dequilibrium_constant_10_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[10]), 
                       exp_chain(-gibbs_reactions[10], 
                                 -dgibbs_reactions_dlog_temperature[10]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_11 = multiply(exp_gen(-gibbs_reactions[11]), double(1.0));
        double dequilibrium_constant_11_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[11]), 
                       exp_chain(-gibbs_reactions[11], 
                                 -dgibbs_reactions_dlog_temperature[11]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_12 = multiply(exp_gen(-gibbs_reactions[12]), double(1.0));
        double dequilibrium_constant_12_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[12]), 
                       exp_chain(-gibbs_reactions[12], 
                                 -dgibbs_reactions_dlog_temperature[12]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_13 = multiply(exp_gen(-gibbs_reactions[13]), double(1.0));
        double dequilibrium_constant_13_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[13]), 
                       exp_chain(-gibbs_reactions[13], 
                                 -dgibbs_reactions_dlog_temperature[13]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_14 = multiply(exp_gen(-gibbs_reactions[14]), double(1.0));
        double dequilibrium_constant_14_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[14]), 
                       exp_chain(-gibbs_reactions[14], 
                                 -dgibbs_reactions_dlog_temperature[14]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_15 = multiply(exp_gen(-gibbs_reactions[15]), double(1.0));
        double dequilibrium_constant_15_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[15]), 
                       exp_chain(-gibbs_reactions[15], 
                                 -dgibbs_reactions_dlog_temperature[15]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_16 = multiply(exp_gen(-gibbs_reactions[16]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double dequilibrium_constant_16_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[16]), 
                       exp_chain(-gibbs_reactions[16], 
                                 -dgibbs_reactions_dlog_temperature[16]) * dlog_temperature_dtemperature, 
                       inv_pressure_atmosphere() * universal_gas_constant() * temperature, 
                       inv_pressure_atmosphere() * universal_gas_constant());


        double equilibrium_constant_17 = multiply(exp_gen(-gibbs_reactions[17]), double(1.0));
        double dequilibrium_constant_17_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[17]), 
                       exp_chain(-gibbs_reactions[17], 
                                 -dgibbs_reactions_dlog_temperature[17]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_18 = multiply(exp_gen(-gibbs_reactions[18]), double(1.0));
        double dequilibrium_constant_18_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[18]), 
                       exp_chain(-gibbs_reactions[18], 
                                 -dgibbs_reactions_dlog_temperature[18]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_19 = multiply(exp_gen(-gibbs_reactions[19]), double(1.0));
        double dequilibrium_constant_19_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[19]), 
                       exp_chain(-gibbs_reactions[19], 
                                 -dgibbs_reactions_dlog_temperature[19]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_20 = multiply(exp_gen(-gibbs_reactions[20]), double(1.0));
        double dequilibrium_constant_20_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[20]), 
                       exp_chain(-gibbs_reactions[20], 
                                 -dgibbs_reactions_dlog_temperature[20]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_21 = multiply(exp_gen(-gibbs_reactions[21]), double(1.0));
        double dequilibrium_constant_21_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[21]), 
                       exp_chain(-gibbs_reactions[21], 
                                 -dgibbs_reactions_dlog_temperature[21]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_22 = multiply(exp_gen(-gibbs_reactions[22]), double(1.0));
        double dequilibrium_constant_22_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[22]), 
                       exp_chain(-gibbs_reactions[22], 
                                 -dgibbs_reactions_dlog_temperature[22]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_23 = multiply(exp_gen(-gibbs_reactions[23]), double(1.0));
        double dequilibrium_constant_23_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[23]), 
                       exp_chain(-gibbs_reactions[23], 
                                 -dgibbs_reactions_dlog_temperature[23]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_24 = multiply(exp_gen(-gibbs_reactions[24]), inv_pressure_atmosphere() * universal_gas_constant() * temperature);
        double dequilibrium_constant_24_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[24]), 
                       exp_chain(-gibbs_reactions[24], 
                                 -dgibbs_reactions_dlog_temperature[24]) * dlog_temperature_dtemperature, 
                       inv_pressure_atmosphere() * universal_gas_constant() * temperature, 
                       inv_pressure_atmosphere() * universal_gas_constant());


        double equilibrium_constant_25 = multiply(exp_gen(-gibbs_reactions[25]), double(1.0));
        double dequilibrium_constant_25_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[25]), 
                       exp_chain(-gibbs_reactions[25], 
                                 -dgibbs_reactions_dlog_temperature[25]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_27 = multiply(exp_gen(-gibbs_reactions[27]), double(1.0));
        double dequilibrium_constant_27_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[27]), 
                       exp_chain(-gibbs_reactions[27], 
                                 -dgibbs_reactions_dlog_temperature[27]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_30 = multiply(exp_gen(-gibbs_reactions[30]), double(1.0));
        double dequilibrium_constant_30_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[30]), 
                       exp_chain(-gibbs_reactions[30], 
                                 -dgibbs_reactions_dlog_temperature[30]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_32 = multiply(exp_gen(-gibbs_reactions[32]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double dequilibrium_constant_32_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[32]), 
                       exp_chain(-gibbs_reactions[32], 
                                 -dgibbs_reactions_dlog_temperature[32]) * dlog_temperature_dtemperature, 
                       pressure_atmosphere() * inv_universal_gas_constant_temperature, 
                       pressure_atmosphere() * dinv_universal_gas_constant_temperature_dtemperature);

        update_jacobian_reaction_0(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_0, dequilibrium_constant_0_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_1(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_1, dequilibrium_constant_1_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_2(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_2, dequilibrium_constant_2_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_3(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_3, dequilibrium_constant_3_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_4(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_4, dequilibrium_constant_4_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_5(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_5, dequilibrium_constant_5_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_6(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_6, dequilibrium_constant_6_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_7(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_7, dequilibrium_constant_7_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_8(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_8, dequilibrium_constant_8_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_9(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_9, dequilibrium_constant_9_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_10(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_10, dequilibrium_constant_10_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_11(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_11, dequilibrium_constant_11_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_12(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_12, dequilibrium_constant_12_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_13(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_13, dequilibrium_constant_13_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_14(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_14, dequilibrium_constant_14_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_15(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_15, dequilibrium_constant_15_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_16(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_16, dequilibrium_constant_16_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_17(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_17, dequilibrium_constant_17_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_18(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_18, dequilibrium_constant_18_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_19(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_19, dequilibrium_constant_19_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_20(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_20, dequilibrium_constant_20_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_21(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_21, dequilibrium_constant_21_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_22(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_22, dequilibrium_constant_22_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_23(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_23, dequilibrium_constant_23_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_24(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_24, dequilibrium_constant_24_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_25(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_25, dequilibrium_constant_25_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_26(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_27(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_27, dequilibrium_constant_27_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_28(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_29(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_30(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_30, dequilibrium_constant_30_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_31(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_32(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_32, dequilibrium_constant_32_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_33(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_34(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_35(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_36(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_37(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 

        Species dsource_species_dtemperature_ = {double(0)};
        update_dsource_species_dtemperature_reaction_0(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_0, dequilibrium_constant_0_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_1(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_1, dequilibrium_constant_1_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_2(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_2, dequilibrium_constant_2_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_3(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_3, dequilibrium_constant_3_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_4(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_4, dequilibrium_constant_4_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_5(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_5, dequilibrium_constant_5_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_6(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_6, dequilibrium_constant_6_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_7(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_7, dequilibrium_constant_7_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_8(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_8, dequilibrium_constant_8_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_9(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_9, dequilibrium_constant_9_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_10(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_10, dequilibrium_constant_10_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_11(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_11, dequilibrium_constant_11_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_12(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_12, dequilibrium_constant_12_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_13(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_13, dequilibrium_constant_13_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_14(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_14, dequilibrium_constant_14_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_15(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_15, dequilibrium_constant_15_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_16(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_16, dequilibrium_constant_16_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_17(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_17, dequilibrium_constant_17_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_18(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_18, dequilibrium_constant_18_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_19(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_19, dequilibrium_constant_19_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_20(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_20, dequilibrium_constant_20_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_21(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_21, dequilibrium_constant_21_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_22(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_22, dequilibrium_constant_22_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_23(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_23, dequilibrium_constant_23_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_24(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_24, dequilibrium_constant_24_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_25(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_25, dequilibrium_constant_25_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_26(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_27(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_27, dequilibrium_constant_27_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_28(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_29(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_30(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_30, dequilibrium_constant_30_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_31(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_32(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_32, dequilibrium_constant_32_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_33(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_34(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_35(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_36(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_37(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 

        for (int i = 0; i < n_species; i++)
        {
            for (int j = 0; j < n_species; j++)
            {
                // temperature dependence
                jacobian_net_production_rates[i+1][j+1] += scale_gen(dsource_species_dtemperature_[i], dtemperature_dspecies_[j]);
            }
        }

        return jacobian_net_production_rates;
    }