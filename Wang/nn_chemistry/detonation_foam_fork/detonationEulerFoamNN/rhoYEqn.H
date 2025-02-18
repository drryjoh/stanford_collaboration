tmp<fv::convectionScheme<scalar>> mvConvection
(
    fv::convectionScheme<scalar>::New
    (
        mesh,
        fields,
        rhoPhi,
        mesh.divScheme("div(phi,Yi_h)")
    )
);

{
    nnInterface.useNN(UseNN, Y, p, T);
    auto RR = nnInterface.solve(Y, p, T, UseNN, runTime.deltaT().value());
    Qdot  = nnInterface.Qdot(thermo, RR);
    /*
    forAll(Y, i)
    {
        RR_L2 += (RR[i] - reaction.RR[Y[i]])/(reaction.RR[Y[i]]+SMALL)
    }
    */
    //reaction->correct();
    //Qdot = reaction->Qdot();
    volScalarField Yt(0.0*Y[0]);

    forAll(Y, i)
    {
        if (i != inertIndex && composition.active(i))
        {
            volScalarField& Yi = Y[i];

            fvScalarMatrix YiEqn
            (
                fvm::ddt(rho, Yi)
              + mvConvection->fvmDiv(rhoPhi, Yi)
             ==
                RR[i]
            );

            YiEqn.relax();
        
            YiEqn.solve(mesh.solver("Yi"));

            Yi.max(0.0);
            Yi.correctBoundaryConditions();
            Yt += Yi;
        }
    }

    Y[inertIndex] = scalar(1) - Yt;
    Y[inertIndex].max(0.0);
}
