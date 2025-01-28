#pragma once
#include <array>
#include <cmath>

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

#include "ffcm2_h2.h"

void append_state(std::array<Scalar, 12>& input, std::array<Scalar, 11>& output)
{
    for (int i = 0; i < 11; i++) { input[i] = output[i];}
}


std::array<Scalar, 11> predict_combustion(const std::array<Scalar, 12>& input) {
    std::array<Scalar, 12> input_real;
    for (int i = 0; i < 12; i++) {
        if (i >= 2 && i < 11) {
            input_real[i] = (std::pow(input[i], 0.1) - 1) / 0.1; // Boxcox lambda = 0.1
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


//fix these numbers
constexpr Species molecular_weights()
{
    return {scalar(2.016),scalar(1.008),scalar(31.998),scalar(15.999),scalar(17.007),scalar(33.006),scalar(34.014),scalar(18.015),scalar(39.95),scalar(28.014)};
}

//fix these numbers
constexpr Species inv_molecular_weights()
{
    return {scalar(0.49603174603174605),scalar(0.9920634920634921),scalar(0.03125195324707794),scalar(0.06250390649415588),scalar(0.05879931792791203),scalar(0.030297521662727988),scalar(0.029399658963956014),scalar(0.055509297807382736),scalar(0.025031289111389236),scalar(0.03569643749553795)};
}

// Define the species names as a fixed-size array
#pragma once
#include <string>

//fix this order
static constexpr std::array<const char*, 10> species_names_gen()
{
    //fix the openfoam order to match the nn order 
    return {"H2", "H", "O2", "O", "OH", "HO2", "H2O2", "H2O", "AR", "N2"};
}

// Return the species name for a given index
static std::string species_name_gen(int index)
{
    constexpr auto names = species_names_gen(); // Get the list of species names use auto for now
    return names[index]; // Return the name of the requested species
}