#include <iostream>
#include <vector>
#include <chrono>
#include <immintrin.h>

void matmul(const float* A, const float* B, float* C, size_t M, size_t N, size_t K) {
    for (size_t i = 0; i < M; ++i) {
        for (size_t j = 0; j < K; ++j) {
            C[i * K + j] = 0;
            for (size_t k = 0; k < N; ++k) {
                C[i * K + j] += A[i * N + k] * B[k * K + j];
            }
        }
    }
}

void matmul_avx512(const float* A, const float* B, float* C, size_t M, size_t N, size_t K) {
    for (size_t i = 0; i < M * K; ++i) {
        C[i] = 0.0f;
    }

    const size_t AVX512_BLOCK_SIZE = 16;

    for (size_t i = 0; i < M; ++i) {
        for (size_t j = 0; j < K; j += AVX512_BLOCK_SIZE) {
            __m512 c_block = _mm512_setzero_ps();

            for (size_t k = 0; k < N; ++k) {
                __m512 a_value = _mm512_set1_ps(A[i * N + k]);
                __m512 b_block = _mm512_loadu_ps(&B[k * K + j]);

                c_block = _mm512_fmadd_ps(a_value, b_block, c_block);
            }

            _mm512_storeu_ps(&C[i * K + j], c_block);
        }
    }
}

int main() {
    const size_t M = 512;
    const size_t N = 512;
    const size_t K = 512;

    std::vector<float> A(M * N, 1.0f);
    std::vector<float> B(N * K, 1.0f);
    std::vector<float> C1(M * K, 0.0f);
    std::vector<float> C2(M * K, 0.0f);

    auto start = std::chrono::high_resolution_clock::now();
    matmul(A.data(), B.data(), C1.data(), M, N, K);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration_non_vectorized = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Non-vectorized matrix multiplication took " << duration_non_vectorized << " ms\n";

    start = std::chrono::high_resolution_clock::now();
    matmul_avx512(A.data(), B.data(), C2.data(), M, N, K);
    end = std::chrono::high_resolution_clock::now();
    auto duration_vectorized = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Vectorized matrix multiplication using AVX512 took " << duration_vectorized << " ms\n";

    return 0;
}


