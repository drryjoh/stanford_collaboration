Info << "deltaT = " << runTime.deltaT().value() << endl;

if (!(runTime.deltaT().value() < 1e-8 && runTime.deltaT().value() > 1e-10))
{
    FatalErrorInFunction
        << "deltaT is outside the valid range (1e-10 to 1e-8): " 
        << runTime.deltaT().value()
        << exit(FatalError);
}
