    runTime.write();

    Info<< ", T = " << thermo.T()[0]
        << ", p = " << thermo.p()[0]
        << ", " << Y[0].name() << " = " << Y[0][0]
        << endl;

    post<< runTime.value() <<", "<< thermo.T()[0] << ", " << thermo.p()[0];

    forAll(Y, i)
    {
        post <<", "<<thermo.Y()[i][0];
    }
    
    post << endl;
    