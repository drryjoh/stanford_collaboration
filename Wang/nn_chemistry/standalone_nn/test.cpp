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

int main() {
    std::cout << "*** ChemGen ***" <<std::endl;
    Species mass_fractions  = {double(0.0),double(0.0),double(0.0),double(0.006770331319280119),double(0.0),double(0.0),double(0.0),double(0.0),double(0.0)};
    double temperature_ =  2000.0;
    double pressure_ = 101325.0;
    std::array<double, 10> input_real  = {};
    // First loop: NN16 + source
    auto start1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; i++) {
        NN16(input_real);
        source(mass_fractions, temperature_);
    }
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = end1 - start1;
    std::cout << "Loop 1 (NN16 + source): " << elapsed1.count() << " seconds\n";

    // Second loop: NN16 only
    auto start2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; i++) {
        NN16(input_real);
    }
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed2 = end2 - start2;
    std::cout << "Loop 2 (NN16 only): " << elapsed2.count() << " seconds\n";
    return 0;
}
            
