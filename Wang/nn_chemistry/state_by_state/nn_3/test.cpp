#include "helper_functions.h"
#include <algorithm>    // std::max

int main() {
    //Change to whatever condition you want to test
     //Here is the species list in order for reference (exclude AR from input list -- it does not go into NN):
     //"H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "O3", NOT "AR"
    //Has to be H2/O2/Ar = 2:1:7
    const int time_steps = 7000;

    std::array<Scalar, 11> input = {2500, 2, 0, 0.0127722113, 0, 0.1013689888, 0, 0, 0, 0, 0}; //Does not pass in Ar concetraion. Last on is O3
    
    std::array<Scalar, time_steps> temps; std::array<Scalar, time_steps> pressure; std::array<Scalar, time_steps> y_H; std::array<Scalar, time_steps> y_H2; std::array<Scalar, time_steps> y_O; std::array<Scalar, time_steps> y_O2;
    std::array<Scalar, time_steps> y_OH; std::array<Scalar, time_steps> y_H2O; std::array<Scalar, time_steps> y_HO2; std::array<Scalar, time_steps> y_H2O2; std::array<Scalar, time_steps> y_O3; std::array<Scalar, time_steps> y_Ar;
    
    temps[0] = input[0]; pressure[0] = input[1]; y_H[0] = input[2]; y_H2[0] = input[3]; y_O[0] = input[4]; y_O2[0] = input[5];
    y_OH[0] = input[6]; y_H2O[0] = input[7]; y_HO2[0] = input[8]; y_H2O2[0] = input[9]; y_O3[0] = input[10];
    y_Ar[0] = 0.8858587999;

    ofstream outFile("output.txt");
    for (int i = 1; i <= time_steps; i++) {
      //  std::array<Scalar, 11> next_state = simulate_homogeneous_reactor(input);
        std::array<Scalar, 11> next_state = predict_combustion(input);
        

   
        float run_sum = 0.8858587999; //start with Ar mass fraction
        for(int j = 2; j <= 10; j++) {
          Scalar zero = 0;
           next_state[j] = std::max(zero, next_state[j]);
            run_sum += next_state[j];
        }
        std::cout << "runsum with everything: " << run_sum << std::endl;

        for(int j = 2; j <= 10; j++) {
            next_state[j] = next_state[j] / run_sum; //rescale output so that sum always = 1
        }
        
        temps[i] = next_state[0];
        pressure[i] = next_state[1];
        y_H[i] = next_state[2];
        y_H2[i] = next_state[3];
        y_O[i] = next_state[4];
        y_O2[i] = next_state[5];
        y_OH[i] = next_state[6];
        y_H2O[i] = next_state[7];
        y_HO2[i] = next_state[8];
        y_H2O2[i] = next_state[9];
        y_O3[i] = next_state[10];
        y_Ar[i] = 0.8858587999;
      //  std::cout << temps[i] << std::endl;

        outFile << i << " " << temps[i] << " " << pressure[i] << " " << y_H[i] << " " << y_H2[i] << " " << y_O[i] << " " << y_O2[i] << " " << y_OH[i] << " " << y_H2O[i] << " " << y_HO2[i] << " " << y_H2O2[i] << " " << y_O3[i] << " " << y_Ar[i] << endl;
        input = next_state;
    }
    //For plotting run the scratch_file_for_plotting.py file in this folder. It is already setup to read in the data and compare to the output file generated here using the NN.
    //Note: You do need to change the cantera condition in scratch_file_for_plotting.py to directly compare with the condition tested here.
    outFile.close();
    return 0;
}

/*
clang++ -std=c++2b -Wall -O3 -march=native -o test test.cpp
./test
*/