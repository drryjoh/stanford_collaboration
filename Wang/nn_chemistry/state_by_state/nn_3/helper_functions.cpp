#include "helper_functions.h"

//README:
//None of these functions are used until predict_combustion. They are still here because they may be useful/needed at a later point in time


std::array<Scalar, 11> simulate_homogeneous_reactor(std::array<Scalar, 11>& input) {
     //Load Normalization arrays
  //   std::array<Scalar, 11> input_mean = read_normalization_txt_to_array("mean_input_TPY.txt");
 //    std::array<Scalar, 11> input_std = read_normalization_txt_to_array("std_input_TPY.txt");
 //    std::array<Scalar, 11> output_mean = read_normalization_txt_to_array("mean_output_TPY.txt");
  //   std::array<Scalar, 11> output_std = read_normalization_txt_to_array("std_output_TPY.txt");
 
 
     std::array<Scalar, 11> original_copy_input = input;
     std::cout << "INPUT T: " << input[0] << std::endl;

          //Properly Normalize inputs
  //   input = normalization_function(input, input_mean, input_std); 
 //    std::cout << "After Normalizaiton T: " << input[0] << std::endl;

     //Boxcox transform input species concentrations only
     input = box_cox_transform(input, 0.1);
     std::cout << "After BoxCox T: " << input[0] << std::endl;

     //Pass through NN
     auto output = nn3<Scalar>(input);
     std::cout << "from NN: " << output[0] << std::endl;

     //Undo Normalization
   //  output = undo_normalization_function(output, output_mean, output_std); 
 
    std::array<Scalar, 11> final_result;
    //   Since NN preidcts a delta(input), add these values back to original    
    for(int i = 0; i < 11; i++) {
        final_result[i] = original_copy_input[i] + output[i];
    }

     std::cout << "with delta added, but before undo boxcox: " << final_result[0] << std::endl;
     //Undo Boxcox transform
     final_result = undo_box_cox_transform(final_result, 0.1); 

     std::cout << "OUTPUT T after undo boxcox:" << final_result[0] << std::endl;

 
     
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

std::array<Scalar, 11> predict_combustion(const std::array<Scalar, 11>& input) {
    
    std::array<Scalar, 11> input_real;

    for (int i = 0; i < 11; i++) {
        if (i >= 2) {
            input_real[i] = (std::pow(input[i], 0.1) - 1) / 0.1; // Boxcox lambda = 0.1
        } else {
            input_real[i] = input[i];
        }
    }

    auto model_output = nn3<Scalar>(input_real); // Change input to desired features

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