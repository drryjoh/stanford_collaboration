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
    os << "[ ";
    for (const auto& value : arr) 
    {
        os << value << " ";
    }
    os << "]";
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

    double temperature_ =  2500.0;
    double pressure_ = 101325.0 * 2.0;

    Species concentrations = concentrations_from_molefractions_pressure_temperature(molefractions_, pressure_, temperature_);
    std::cout << concentrations << std::endl;
    std::array<double, 10> input  = {};
    input[0] = temperature_;
    input[1] = pressure_/101325.0;

    for(int i = 0; i<n_species - 1; i++)
    {
        input[2 + i] = concentrations[i];
    }
    std::cout << input << std::endl;

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
            
