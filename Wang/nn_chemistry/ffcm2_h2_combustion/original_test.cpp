#include <iostream>
#include <array>
#include <random>
#include <cmath>
#include <chrono> // For timing
#include "ffcm2_h2.h" // Change file name to desired header file

using Scalar = double;

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
    std::cout << time << ", ";

    for (const auto& val : output)
    {
        std::cout <<","<< val;
    }

    std::cout << std::endl;
}

void append_state(std::array<Scalar, 12>& input, std::array<Scalar, 11>& output)
{
    for (int i = 0; i < 11; i++) { input[i] = output[i];}
}


std::array<Scalar, 11> predict_combustion(const std::array<Scalar, 12>& input) {
    std::array<Scalar, 12> input_real;
    for (int i = 0; i < 12; i++) {
        if (i >= 2 && i < 11) {
            input_real[i] = (pow(input[i], 0.1) - 1) / 0.1; // Boxcox lambda = 0.1
        } else {
            input_real[i] = input[i];
        }
    }

    auto model_output = ffcm2_h2<Scalar>(input_real); // Change input to desired features

    std::array<Scalar, 11> output_real;
    for (int i = 0; i < 11; i++) {
        output_real[i] = model_output[i] + input_real[i]; // NN outputs change of state properties, transferred to real values
    }

    std::array<Scalar, 11> output;
    for (int i = 0; i < 11; i++) {
        if (i >= 2 && i < 11) {
            output[i] = pow(output_real[i] * 0.1 + 1, 10.0); // Inverse Boxcox transformation
        } else {
            output[i] = output_real[i];
        }
    }

    return output;
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

    auto start_time = std::chrono::high_resolution_clock::now();
    
    for(int i=0; i<1000; i++)
    {
        auto output = predict_combustion(input);
        print_state(output, pow(10.0, input[11]) * (Scalar(i)+1.0));
        append_state(input, output);
    }

    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate the elapsed time in milliseconds
    auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();

    // Report the elapsed time
    std::cout << "Execution Time: " << elapsed_time << " ms" << std::endl;



    return 0;
}
