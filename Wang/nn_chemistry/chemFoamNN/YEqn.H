    nnInterface.solve(Y, p, T, runTime.deltaT().value());
    thermo.correct();
    