

    
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
    }; // State properties at current time
    
    Info << "Start State y = (" << input[0];
    for(int i=1; i<12; i++)
    {
        Info <<", "<<input[i];
    }
    Info << ");" << endl;

    for(int i=0; i<100; i++)
    {
        auto output = predict_combustion(input);
        append_state(input, output);
    }

    Info << "End State y = (" << input[0];

    for(int i=1; i<12; i++)
    {
        Info <<", "<<input[i];
    }
    Info << ");" << endl;