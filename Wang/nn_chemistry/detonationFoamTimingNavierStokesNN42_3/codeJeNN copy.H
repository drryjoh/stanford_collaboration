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

#include "NN42.h"

std::array<Scalar, 8> predict_combustion(const std::array<Scalar, 10>& input)
{

    auto model_output = NN42<Scalar>(input); // Change input to desired features

    std::array<Scalar, 8> output;

    for (int i = 0; i < 8; i++) {
        output[i] = model_output[i] + input[i + 2]; // NN outputs change of state properties, transferred to real values
    }

    return output;
}

const int n_species = 9;
// Using alias for the array type (for example, an array of double values)
using Species = std::array<scalar, n_species>;


constexpr Species molecular_weights() 
{
    //H  H2  O  O2  OH  H2O  HO2  H2O2 AR
    return {scalar(1.008),scalar(2.016),scalar(15.999),scalar(31.998),scalar(17.007),scalar(18.015),scalar(33.006),scalar(34.014),scalar(39.95)};
}

constexpr Species inv_molecular_weights()
{
    return {scalar(0.9920634920634921),scalar(0.49603174603174605),scalar(0.06250390649415588),scalar(0.03125195324707794),scalar(0.05879931792791203),scalar(0.055509297807382736),scalar(0.030297521662727988),scalar(0.029399658963956014),scalar(0.025031289111389236)};
}

// Define the species names as a fixed-size array
#pragma once
#include <string>

static constexpr std::array<const char*, 9> species_names_gen()
{
    return {"H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "AR"};
}

// Return the species name for a given index
static std::string species_name_gen(int index)
{
    constexpr auto names = species_names_gen(); // Get the list of species names use auto for now
    return names[index]; // Return the name of the requested species
}
