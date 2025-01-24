
#include <iostream>
#include <array>
#include <random>
#include <cmath>
#include "keras_model.h" // change file name to desired header file

using Scalar = double;

int main() {
    // std::array<Scalar, 12> input = {1,2,3,4,5,6,7,8,9,10,11,12}; // change input to desired features
    std::array<Scalar, 12> input = {
        1800.0, // Temperature, K
        5.0, // Pressure, atm
        0.0, // Mass fraction of 9 species, starts, H
        0.11190674, // H2
        0.0,
        0.88809326, // O2
        0.0,
        0.0,
        0.0,
        0.0,
        0.0, // Mass fraction, ends, O3
        -9.0 // log10(time step, s)
    }; // state properties at current time
    auto output = keras_model<Scalar>(input); // change input to desired features
    std::cout << "Output: ";
    for(const auto& val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}

/*
clang++ -std=c++2b -o test test.cpp
./test
*/
