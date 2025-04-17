#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <cmath>

#include "nn3.h" // change file name to desired header file
using namespace std;
using Scalar = float;

std::array<Scalar, 11> read_normalization_txt_to_array(std::string filename);
std::array<Scalar, 11> box_cox_transform(std::array<Scalar, 11>& data, double lambda);
std::array<Scalar, 11> undo_box_cox_transform(std::array<Scalar, 11>& data, double lambda);
std::array<Scalar, 11> normalization_function(std::array<Scalar, 11>& input, const std::array<Scalar, 11> means, const std::array<Scalar, 11> stds);
std::array<Scalar, 11> undo_normalization_function(std::array<Scalar, 11>& input, const std::array<Scalar, 11> means, const std::array<Scalar, 11> stds);

std::array<Scalar, 11> simulate_homogeneous_reactor(std::array<Scalar, 11>& input);
