#include <cmath>
#include <algorithm>
#include <array>
#include <iostream>  // For printing the result to the console
#include "types_inl.h"
#include "multiply_divide.h"
#include "pow_gen.h"
#include "exp_gen.h"
#include "array_handling.h"
#include "constants.h"
#include "thermally_perfect.h"
#include "arrhenius.h"
#include "third_body.h"
#include "falloff_troe.h"
#include "falloff_lindemann.h"
#include "falloff_sri.h"
#include "pressure_dependent_arrhenius.h"
#include "reactions.h"
#include "source.h"
#include "chemical_state_functions.h"
#include "NN16.h"
#include <chrono>

//clang++ -std=c++17  -O3 -o nn_chemgen_test
// Overload << operator for std::array
template <typename T, std::size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<T, N>& arr) {
    for (std::size_t i = 0; i < N; ++i) {
        os << arr[i];
        if (i != N - 1) {
            os << ", ";
        }
    }
    return os;
}


int main() {
    std::cout << "*** ChemGen ***" <<std::endl;
    /*
    temp = 2500
    pres = 2
    spec = "H2:2, O2:1, AR:7"
    return {"H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "AR"};
    */
    Species molefractions_  = 
    {double(0),
     double(2),
     double(0),
     double(1),
     double(0),
     double(0),
     double(0),
     double(0),
     double(7)};
     molefractions_ = scale_gen(double(0.1), molefractions_);

    double temperature_initial =  2600.0;
    double pressure_initial = 101325.0 * 4.0;

    double temperature_ =  temperature_initial;
    double pressure_ = pressure_initial;

    Species concentrations = concentrations_from_molefractions_pressure_temperature(molefractions_, pressure_, temperature_);
    
    std::array<double, 10> input  = {};
    input[0] = temperature_;
    input[1] = pressure_/101325.0;

    double dt = 1e-9;

    for(int i = 0; i<n_species - 1; i++)
    {
        input[2 + i] = concentrations[i];
    }

    std::cout<< 0.0<<", "<<temperature_ << ", " << pressure_/101325.0 << ", "<<concentrations <<std::endl;
    double time  = 0;
    for (int  i  = 0; i< 10000; i++)
    {
        auto model_output = NN16<Scalar>(input); // Change input to desired features
        Species source_ = source(concentrations, temperature_);

        std::array<Scalar, n_species - 1> output_species;
        for (int i = 0; i < n_species - 1; i++) {
            output_species[i] = model_output[i + 2] + input[i + 2] + source_[i] * dt; // NN outputs change of state properties, transferred to real values
        }

        for(int i = 0; i<n_species - 1; i++)
        {
            concentrations[i] = output_species[i];
        }
        
        temperature_ = model_output[0] + input[0];
        pressure_ = model_output[1] + input[1];

        input[0] = temperature_;
        input[1] = pressure_;
        for(int i = 0; i<n_species - 1; i++)
        {
            input[2 + i] = concentrations[i];
        }
        time+=dt;
        std::cout<< time<<", "<<temperature_ << ", " << pressure_ << ", "<<concentrations <<std::endl;

    }

    std::cout << "check dt*S" << std::endl;
    temperature_ =  temperature_initial;
    pressure_ = pressure_initial;

    concentrations = concentrations_from_molefractions_pressure_temperature(molefractions_, pressure_, temperature_);
    double rhou  = internal_energy_volume_specific(concentrations, temperature_);

    time  = 0;
    dt = 10e-9;
    std::cout<< 0.0<<", "<<temperature_ << ", " << pressure_/101325.0 << ", "<<concentrations <<std::endl;
    for (int  i  = 0; i< 10000; i++)
    {
        
        Species source_ = source(concentrations, temperature_);
        for (int i = 0; i < n_species; i++) 
        {
            concentrations[i] = concentrations[i] + source_[i] * dt; // NN outputs change of state properties, transferred to real values
        }

        temperature_ = temperature(rhou, concentrations);
        pressure_  = pressure(concentrations, temperature_);

        time+=dt;
        std::cout<< time<<", "<<temperature_ << ", " << pressure_ << ", "<<concentrations <<std::endl;

    }


    //// First loop: NN16 + source
    //auto start1 = std::chrono::high_resolution_clock::now();
    //for (int i = 0; i < 100000; i++) 
    //{
    //    output  = input + NN16(input);
    //    source(mass_fractions, temperature_);
    //}
    //auto end1 = std::chrono::high_resolution_clock::now();
    //std::chrono::duration<double> elapsed1 = end1 - start1;
    //std::cout << "Loop 1 (NN16 + source): " << elapsed1.count() << " seconds\n";

    //// Second loop: NN16 only
    //auto start2 = std::chrono::high_resolution_clock::now();
    //for (int i = 0; i < 100000; i++) {
    //    NN16(input_real);
    //}
    //auto end2 = std::chrono::high_resolution_clock::now();
    //std::chrono::duration<double> elapsed2 = end2 - start2;
    //std::cout << "Loop 2 (NN16 only): " << elapsed2.count() << " seconds\n";
    return 0;
}
            
