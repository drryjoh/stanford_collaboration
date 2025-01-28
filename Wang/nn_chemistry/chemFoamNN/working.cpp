#include <iostream>
#include <array>
#include <random>
#include <cmath>
#include <chrono> // For timing
#include "ffcm2_h2.h" // Change file name to desired header file



// Function to scale the elements of the input array randomly
void scale_input(std::array<Scalar, 12>& input) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<Scalar> dist(0.5, 1.5); // Random scaling factor between 0.5 and 1.5

    for (auto& element : input) {
        element *= dist(gen);
    }
}

void print_state(std::array<Scalar, 11>& output, Scalar time)
{
    std::cout << time;

    for (const auto& val : output)
    {
        std::cout <<","<< val;
    }

    std::cout << std::endl;
}


int main() {
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
    }; // State properties at current time

    for(int i=0; i<1000; i++)
    {
        auto output = predict_combustion(input);
        print_state(output, pow(10.0, input[11]) * (Scalar(i)+1.0));
        append_state(input, output);
    }





    return 0;
}
