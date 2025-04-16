#pragma once
#include <array>
#include <cmath>
#include <Eigen/Dense>

using Scalar = scalar; // redefine scalar 



template<typename Scalar>
using activationFunction = void(*)(Scalar*, const Scalar*, size_t, Scalar);

// - -

/*
template<typename Scalar>
void relu_nn(Scalar* outputs, const Scalar* inputs, size_t size, Scalar alpha = 0.0) noexcept {
    for (size_t i = 0; i < size; ++i) {
        outputs[i] = inputs[i] > 0 ? inputs[i] : 0;
    }
}
*/
template<typename Scalar>
void relu_nn(Scalar* outputs, const Scalar* inputs, size_t size, Scalar alpha = 0.0) noexcept {
    using namespace Eigen;
    Map<Matrix<Scalar, size, 1>> output_vector(outputs);
    Map<const Matrix<Scalar, size, 1>> input_vector(inputs);
    output_vector = input_vector.cwiseMax(Scalar(0));
}

/*
template<typename Scalar>
void linear_nn(Scalar* outputs, const Scalar* inputs, size_t size, Scalar alpha = 0.0) noexcept {
    for (size_t i = 0; i < size; ++i) {
        outputs[i] = inputs[i];
    }
}
*/
template<typename Scalar>
void linear_nn(Scalar* outputs, const Scalar* inputs, size_t size, Scalar alpha = 0.0) noexcept {
    using namespace Eigen;
    Map<Matrix<Scalar, size, 1>> output_vector(outputs);
    Map<const Matrix<Scalar, size, 1>> input_vector(inputs);
    output_vector = input_vector;
}

/** 
template<typename Scalar>
void dotProduct(Scalar* outputs, const Scalar* inputs, const Scalar* weights, int input_size, int output_size) noexcept {
    for (int i = 0; i < output_size; i++) {
        outputs[i] = 0;
        for (int j = 0; j < input_size; j++) {
            outputs[i] += inputs[j] * weights[j * output_size + i];
        }
    }
}
*/
template<typename Scalar>
void dotProduct(Scalar* outputs, const Scalar* inputs, const Scalar* weights, int input_size, int output_size) noexcept {
    using namespace Eigen;
    Map<const Matrix<Scalar, InputSize, 1>> input_vector(inputs);
    Map<const Matrix<Scalar, InputSize, OutputSize>> weight_matrix(weights);
    Map<Matrix<Scalar, OutputSize, 1>> output_vector(outputs);

    output_vector.noalias() = weight_matrix.transpose() * input_vector;
}


/** 
//Vectorized Code Below
//If this does not work, it may be because the CPU does not have AVX 512 instructions
//If this fails, I can change it to AVX 256, or we can look into using the Eigen library, which can adjust based on hardware instruction set
template<typename Scalar>
void dotProduct(Scalar* outputs, const Scalar* inputs, const Scalar* weights, int input_size, int output_size) noexcept {

    //Aim is to use AVX 512 to process 8 doubles at once -- hoping for a roughly 8x speed up
    for (int i = 0; i < output_size; i++) {
        __m512d sum = _mm512_setzero_pd();
        int j = 0;
        for (; j <= input_size - 8; j += 8) {
            __m512d input_vec = _mm512_loadu_pd(inputs + j);  // Load 8 doubles from inputs
            __m512d weight_vec = _mm512_loadu_pd(weights + j * output_size + i);  // Load 8 doubles from weights

            __m512d product = _mm512_mul_pd(input_vec, weight_vec);  // Multiply inputs and weights
            sum = _mm512_add_pd(sum, product);  // Add product to sum
        }

        // Horizontal sum, this combines the 8 parallel streams
        __m256d lo256d = _mm512_extractf64x4_pd(sum, 0);
        __m256d hi256d = _mm512_extractf64x4_pd(sum, 1);
        __m256d lo128d = _mm256_permute4x64_pd(lo256d, _MM_SHUFFLE(2, 3, 0, 1));
        __m256d hi128d = _mm256_permute4x64_pd(hi256d, _MM_SHUFFLE(2, 3, 0, 1));
        lo128d = _mm256_add_pd(_mm256_castpd256_pd128(lo256d), _mm256_extractf128_pd(lo256d, 1));
        hi128d = _mm256_add_pd(_mm256_castpd256_pd128(hi256d), _mm256_extractf128_pd(hi256d, 1));

        __m128d lo64d = _mm_add_pd(_mm256_castpd256_pd128(lo128d), hi128d);
        __m128d hi64d = _mm_add_pd(_mm_permute_pd(_mm256_extractf128_pd(lo128d, 1), 0x1), _mm256_castpd256_pd128(hi128d));
        outputs[i] = _mm_cvtsd_f64(_mm_add_pd(lo64d, hi64d));

        // Process remaining elements if input_size is not a multiple of 8
        for (; j < input_size; j++) {
            outputs[i] += inputs[j] * weights[j * output_size + i];
        }
    }

}
    **/

template<typename Scalar>
void addBias(Scalar* outputs, const Scalar* biases, int size) noexcept {
    using namespace Eigen;
    Map<Matrix<Scalar, Size, 1>> output_vector(outputs);
    Map<const Matrix<Scalar, Size, 1>> bias_vector(biases);
    output_vector.noalias() += bias_vec;
}
   /* 
template<typename Scalar>
void addBias(Scalar* outputs, const Scalar* biases, int size) noexcept {
    for (int i = 0; i < size; i++) {
        outputs[i] += biases[i];
    }
}
    */
/** 
//Vectorized Version
//Does 8 doubles at once usign AVX 512.
//Again, if AVX 512 is not supported on the CPU this will have to be altered
template<typename Scalar>
void addBias(Scalar* outputs, const Scalar* biases, int size) noexcept {
        //Aim is to use AVX 512 to process 8 doubles at once -- hoping for a roughly 8x speed up
        int i = 0;

        for (; i <= size - 8; i += 8) {
            // Load 8 double values from outputs and biases
            __m512d out = _mm512_loadu_pd(&outputs[i]);
            __m512d bias = _mm512_loadu_pd(&biases[i]);
            // Add and store the results back to outputs
            out = _mm512_add_pd(out, bias);
            _mm512_storeu_pd(&outputs[i], out);
        }
    
        // Handle remaining elements if size is not a multiple of 8
        for (; i < size; i++) {
            outputs[i] += biases[i];
        }

}
**/
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
