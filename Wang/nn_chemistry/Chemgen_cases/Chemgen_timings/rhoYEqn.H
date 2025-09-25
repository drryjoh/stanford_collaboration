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
    //chemistry block
    scalar time_before_chemistry_rank =  timer.elapsedTime();
    auto RR_cemgen = chemgen.solve(Y, p, T, runTime.deltaT().value()); //get the linearized source term, (C1_i-C0_i)/dt*W_i
    Qdot  = chemgen.Qdot(thermo, RR_cemgen);
    scalar time_after_chemistry_rank =  timer.elapsedTime();
    scalar chemistry_time_rank = time_after_chemistry_rank - time_before_fluid_rank;


    chemistry_time = reduce(chemistry_time_rank, sumOp<scalar>());
    running_chemsitry_time += chemistry_time;
    //end chemistry block


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
                RR_cemgen[i]
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
