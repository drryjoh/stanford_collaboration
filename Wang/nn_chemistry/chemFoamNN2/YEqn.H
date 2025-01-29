    nnInterface.solve(Y, p, T, runTime.deltaT().value());
    
    scalarList YN(nSpecie, 0.0);
    forAll(Y, i)
    {
        YN[i] = Y[i][0];
    }

    scalar h0 = ::h0(thermo, YN, p[0], T[0]);
    thermo.he() = dimensionedScalar("h", dimEnergy/dimMass, h0);
    thermo.correct();
