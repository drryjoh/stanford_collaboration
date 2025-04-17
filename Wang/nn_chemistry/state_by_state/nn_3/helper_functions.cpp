#include "helper_functions.h"

std::array<Scalar, 11> simulate_homogeneous_reactor(std::array<Scalar, 11>& input) {
     //Load Normalization arrays
 //    std::array<Scalar, 11> input_mean = read_normalization_txt_to_array("mean_input_TPY.txt");
 //    std::array<Scalar, 11> input_std = read_normalization_txt_to_array("std_input_TPY.txt");
 //    std::array<Scalar, 11> output_mean = read_normalization_txt_to_array("mean_output_TPY.txt");
 //    std::array<Scalar, 11> output_std = read_normalization_txt_to_array("std_output_TPY.txt");
 
     //Change to whatever condition you want to test
     //Here is the species list in order for reference (exclude AR from input list -- it does not go into NN):
     //"H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "O3", "AR"
     //Ex: 2500 K, 101325 Pa, YH2 = 0.6, YO2 = 0.38, YOH = 0.01, YH = 0.01
     std::array<Scalar, 11> original_copy_input = input;
 
     //Boxcox transform input species concentrations only
     input = box_cox_transform(input, 0.1);
     
     //Properly Normalize inputs
 //    input = normalization_function(input, input_mean, input_std); 
 
     //Pass through NN
     auto output = nn3<Scalar>(input);
 
     //Undo Normalization
//     output = undo_normalization_function(output, output_mean, output_std); 
 
     //Undo Boxcox transform
     output = undo_box_cox_transform(output, 0.1); 
 
     std::array<Scalar, 11> final_result;
 
   //std::cout << "Output: ";
     for(int i = 0; i < 11; i++) {
         final_result[i] = original_copy_input[i] + output[i];
   //      std::cout << final_result[i] << " ";
     }
     std::cout << std::endl;
 
     
     return final_result;
}

std::array<Scalar, 11> box_cox_transform(std::array<Scalar, 11>& data, double lambda) {
    for (int i = 0; i < 11; i++) {
        if (i >= 2) {
            data[i] = (std::pow(data[i], lambda) - 1) / lambda; // 
        } else {
            data[i] = data[i];
        }
    }
    return data;
}

std::array<Scalar, 11> undo_box_cox_transform(std::array<Scalar, 11>& data, double lambda) {
    for (int i = 0; i < 11; i++) {
        if (i >= 2) {
            data[i] = (std::pow(((data[i] * lambda) + 1), 1/lambda));
        } else {
            data[i] = data[i];
        }
    }
    return data;
}

std::array<Scalar, 11> normalization_function(std::array<Scalar, 11>& input, const std::array<Scalar, 11> means, const std::array<Scalar, 11> stds) {
    for (int i = 0; i < 11; i++) {
        input[i] = (input[i] - means[i]) / stds[i];
    }
    return input;
}

std::array<Scalar, 11> undo_normalization_function(std::array<Scalar, 11>& input, const std::array<Scalar, 11> means, const std::array<Scalar, 11> stds) {
    for (int i = 0; i < 11; i++) {
     input[i] = (input[i] * stds[i]) + means[i];
    }
    return input;
}


std::array<Scalar, 11> read_normalization_txt_to_array(std::string filename) {
    std::array<Scalar, 11> to_return;
    std::ifstream file(filename); 
    std::string line;
    int i = 0;
    while (std::getline(file, line)) {
        float value;
        value = std::stof(line);
        to_return[i] = value;
        i++;
    }
    file.close();
    return to_return;
}