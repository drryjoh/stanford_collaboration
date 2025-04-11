#pragma once
#include <array>
#include <cmath>
#include <immintrin.h>

using Scalar = scalar; // redefine scalar 



template<typename Scalar>
using activationFunction = void(*)(Scalar*, const Scalar*, size_t, Scalar);

// - -

template<typename Scalar>
void relu_nn(Scalar* outputs, const Scalar* inputs, size_t size, Scalar alpha = 0.0) noexcept {
    for (size_t i = 0; i < size; ++i) {
        outputs[i] = inputs[i] > 0 ? inputs[i] : 0;
    }
}



template<typename Scalar>
void linear_nn(Scalar* outputs, const Scalar* inputs, size_t size, Scalar alpha = 0.0) noexcept {
    for (size_t i = 0; i < size; ++i) {
        outputs[i] = inputs[i];
    }
}


template<typename Scalar>
void dotProduct(Scalar* outputs, const Scalar* inputs, const Scalar* weights, int input_size, int output_size) noexcept {
    for (int i = 0; i < output_size; i++) {
        outputs[i] = 0;
        for (int j = 0; j < input_size; j++) {
            outputs[i] += inputs[j] * weights[j * output_size + i];
        }
    }
}


template<typename Scalar>
void addBias(Scalar* outputs, const Scalar* biases, int size) noexcept {
    for (int i = 0; i < size; i++) {
        outputs[i] += biases[i];
    }
}

template<typename Scalar, int output_size>
void forwardPass(Scalar* outputs, const Scalar* inputs, const Scalar* weights, const Scalar* biases, int input_size, void (*activation_function)(Scalar*, const Scalar*, size_t, Scalar), Scalar alpha) noexcept {
    std::array<Scalar, output_size> temp_outputs;
    dotProduct(temp_outputs.data(), inputs, weights, input_size, output_size);
    addBias(temp_outputs.data(), biases, output_size);
    activation_function(outputs, temp_outputs.data(), output_size, alpha);
}

#include "ffcm1.h"

void append_state(std::array<Scalar, 12>& input, std::array<Scalar, 11>& output)
{
    for (int i = 0; i < 11; i++) { input[i] = output[i];}
}


std::array<Scalar, 11> predict_combustion(const std::array<Scalar, 11>& input) {
    
    std::array<Scalar, 11> input_real;

    for (int i = 0; i < 11; i++) {
        if (i >= 2) {
            input_real[i] = (std::pow(input[i], 0.1) - 1) / 0.1; // Boxcox lambda = 0.1
        } else {
            input_real[i] = input[i];
        }
    }

    auto model_output = ffcm1<Scalar>(input_real); // Change input to desired features

    std::array<Scalar, 11> output_real;
    for (int i = 0; i < 11; i++) {
        output_real[i] = model_output[i] + input_real[i]; // NN outputs change of state properties, transferred to real values
    }

    std::array<Scalar, 11> output;
    for (int i = 0; i < 11; i++) {
        if (i >= 2) {
            output[i] = std::pow(output_real[i] * 0.1 + 1, 10.0); // Inverse Boxcox transformation
        } else {
            output[i] = output_real[i];
        }
    }

    return output;
}

const int n_species = 10;
// Using alias for the array type (for example, an array of double values)
using Species = std::array<scalar, n_species>;



constexpr Species molecular_weights()
{
    //H  H2  O  O2  OH  H2O  HO2  H2O2  O3  AR
    return {scalar(1.008),scalar(2.016),scalar(15.999),scalar(31.998),scalar(17.007),scalar(18.015),scalar(33.006),scalar(34.014),scalar(47.997), scalar(40.0)};
}

constexpr Species inv_molecular_weights()
{
    //H  H2  O  O2  OH  H2O  HO2  H2O2  O3  AR
    return {scalar(0.9920634920634921),scalar(0.49603174603174605),scalar(0.06250390649415588),scalar(0.03125195324707794),scalar(0.05879931792791203),scalar(0.055509297807382736),scalar(0.030297521662727988),scalar(0.029399658963956014),scalar(0.02083463549805196), scalar(0.025)};
}

// Define the species names as a fixed-size array
#pragma once
#include <string>

static constexpr std::array<const char*, n_species> species_names_gen()
{
    //fix the openfoam order to match the nn order 
    return {"H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "O3", "AR"};
}

// Return the species name for a given index
static std::string species_name_gen(int index)
{
    constexpr auto names = species_names_gen(); // Get the list of species names use auto for now
    return names[index]; // Return the name of the requested species
}