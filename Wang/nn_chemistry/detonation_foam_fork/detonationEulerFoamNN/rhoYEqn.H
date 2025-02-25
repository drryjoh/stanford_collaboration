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

Info << "delta_time = " << runTime.deltaT().value() << endl;
{
    nnInterface.useNN(UseNN, Y, p, T); //check to see where to use NN
    auto RR = nnInterface.solve(Y, p, T, UseNN, runTime.deltaT().value()); //get the linearized source term, (C1_i-C0_i)/dt*W_i
    Qdot  = nnInterface.Qdot(thermo, RR); // sum(RR_i, Hc_i)
    
    /*
    reaction->correct();
    auto Qdot_chemistry = reaction->Qdot();
    forAll(Y, i)
    Hi Josh
    {
        RR_L2 += (RR[i] - reaction.RR[Y[i]])/(reaction.RR[Y[i]]+SMALL)
    }
    */

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
