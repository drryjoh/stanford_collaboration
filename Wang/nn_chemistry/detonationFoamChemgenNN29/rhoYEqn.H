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


     auto RR_chemgen = chemgen.solve(Y, p, T, UseNN, runTime.deltaT().value()); //get the linearized source term, (C1_i-C0_i)/dt*W_i
     Qdot  = chemgen.Qdot(thermo, RR); 
     volScalarField Yt(0.0*Y[0]);
    nnInterface.useNN(UseNN, Y, p, T); //check to see where to use NN
    auto RR_NN = nnInterface.solve(Y, p, T, UseNN, runTime.deltaT().value()); //get the linearized source term, (C1_i-C0_i)/dt*W_i
    

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
                RR_NN[i] + RR_chemgen[i]
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
