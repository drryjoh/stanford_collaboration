
#include <iostream>
#include <array>
#include <random>
#include <cmath>
#include "header_file.h" // change file name to desired header file

using Scalar = float;

int main() {
    std::array<Scalar, _number_of_input_features_> input = {_inputs_}; // change input to desired features
    auto output = _function_name_<Scalar>(input); // change input to desired features
    std::cout << "Output: ";
    for(const auto& val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}

/*
clang++ -std=c++2b -Wall -O3 -march=native -o test test.cpp
./test
*/
