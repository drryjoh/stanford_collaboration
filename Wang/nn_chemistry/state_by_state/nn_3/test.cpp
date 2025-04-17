#include "helper_functions.h"

int main() {
    std::array<Scalar, 11> input = {2500, 101325, 0.01, 0.6, 0, 0.38, 0.01, 0, 0, 0, 0};
    std::array<Scalar, 1000> temps;
    std::array<Scalar, 1000> steps;

    temps[0] = 2500;
    steps[0] = 0;

    ofstream outFile("output.txt");
    for (int i = 1; i <= 1000; ++i) {

        std::array<Scalar, 11> next_state = simulate_homogeneous_reactor(input);
        temps[i] = next_state[0];

        outFile << i << " " << temps[i] << endl;
        steps[i] = i;
        input = next_state;
    }
    //For plotting copy the data to python
    outFile.close();
    return 0;
}

/*
clang++ -std=c++2b -Wall -O3 -march=native -o test test.cpp
./test
*/
