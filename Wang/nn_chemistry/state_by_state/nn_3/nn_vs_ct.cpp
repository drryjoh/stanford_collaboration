#include "helper_functions.h"
using Species = std::array<float, 10>;
#include <algorithm>    // std::max
#include "read_csv.h"


int main() {
    std::string filename = "./data/consolidated.csv"; 
    std::vector<DataPoint> dataset = readDataFromFile(filename);
    filename = "./data/consolidated_dt.csv"; 
    std::vector<DataPoint> dataset_dt = readDataFromFile(filename);

    if (dataset.empty()) {
        std::cerr << "No data loaded!" << std::endl;
        return 1;
    }

    ofstream outFile("consolidated_dt_nn.txt");
    for (size_t i = 0; i < dataset.size(); ++i)
    {
        const DataPoint& dp = dataset[i];
        Species massfractions = dp.massfractions;
        float temperature_ = dp.temperature;
        float pressure_ = dp.pressure;
        std::array<Scalar, 11> input = {temperature_, pressure_ / 101325, massfractions[0],massfractions[1], massfractions[2], massfractions[3], massfractions[4], massfractions[5], massfractions[6], massfractions[7], massfractions[8]};
        
        std::array<Scalar, 11> next_state = predict_combustion(input);
        float run_sum = 0.8858587999; //start with Ar mass fraction
        for(int j = 2; j <= 10; j++) {
          Scalar zero = 0;
           next_state[j] = std::max(zero, next_state[j]);
            run_sum += next_state[j];
        }
        for(int j = 2; j <= 10; j++) {
            next_state[j] = next_state[j] / run_sum; //rescale output so that sum always = 1
        }
        outFile << " " << next_state[0] << " " << next_state[1] << " " << next_state[2] << " " << next_state[3] << " " << next_state[4] << " " << next_state[5] << " " << next_state[6] << " " << next_state[7] << " " << next_state[8] << " " << next_state[9] << " " << next_state[10] << " " << endl;
    }
    outFile.close();
    return 0;
}


/*
clang++ -std=c++2b -Wall -O3 -march=native -o test test.cpp
./test
*/