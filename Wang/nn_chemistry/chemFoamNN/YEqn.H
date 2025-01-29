    nnInterface.solve(Y, p, T, runTime.deltaT().value());
    thermo.correct();
    //forAll(Y, specieI)
    //{
    //    volScalarField& Yi = Y[specieI];

    //    solve
    //    (
    //        fvm::ddt(rho, Yi) - chemistry.RR(specieI),
    //        mesh.solver("Yi")
    //    );
    //}
