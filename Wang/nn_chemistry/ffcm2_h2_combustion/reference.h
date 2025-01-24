// Boxcox transformation of mass fraction
  std::array<Scalar, 12> input = { 
     1800.0, // Temperature, K 
     5.0, // Pressure, atm 
     0.0, // Mass fraction of 9 species, starts, H 
     0.11190674, // H2 
     0.0, 
     0.88809326, // O2 
     0.0, 
     0.0, 
     0.0, 
     0.0, 
     0.0, // Mass fraction, ends, O3 
     -9.0 // log10(time step, s) 
 }; // state properties at current time 

 std::array<Scalar, 12> input_real;
 
 for (int i = 0; i < 12; i++) {
 
     if (i>=2 && i<11) {
 
         input_real[i] = (pow(initial_input[i], 0.1) - 1) / 0.1; // Boxcox lambda = 0.1
 
     } else {
 
         input_real[i] = initial_input[i];
 
     }
 
 }

  // Inverse Boxcox transformation of mass fractions
 
 std::array<Scalar, 11> output;
 
 for (int i = 0; i < 11; i++) {
 
     if (i>=2 && i<11) {
 
         output[i] = pow(output_real[i] * 0.1 + 1, 10.0); // Inverse Boxcox transformation
 
     } else {
 
         output[i] = output_real[i];
 
     }
 
 }
 
 // Inverse Boxcox transformation of mass fractions


 // transfer delta properties to real values
 
 std::array<Scalar, 11> output_real;
 
 for (int i = 0; i < 11; i++) {
 
     output_real[i] = model_output[i] + input_real[i]; // NN outputs change of state properties, transferred it to real values
 
 }
 
 // transfer delta properties to real values
 
 // Boxcox transformation of mass fraction