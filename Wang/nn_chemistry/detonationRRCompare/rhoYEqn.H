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

    scalar time_before_NN_chemistry =  timer.elapsedTime();

    nnInterface.useNN(UseNN, Y, p, T); //check to see where to use NN
    auto RR = nnInterface.solve(Y, p, T, UseNN, runTime.deltaT().value()); //get the linearized source term, (C1_i-C0_i)/dt*W_i
    
    scalar time_after_NN_chemistry =  timer.elapsedTime();
    scalar current_iteration_chemistry_time = time_after_NN_chemistry - time_before_NN_chemistry;
    chemistry_time += current_iteration_chemistry_time;
    Info << "Current iterations Neural Network chemistry time:                 " << current_iteration_chemistry_time <<endl;


    Qdot  = nnInterface.Qdot(thermo, RR); // sum(RR_i, Hc_i)
    
    
    reaction->correct();
    auto Qdot_chemistry = reaction->Qdot();

    forAll(Y, i)    
    {
        scalar small_of = SMALL;
        volScalarField& Yi = Y[i];
        volScalarField& RRNN = RR[i];
        tmp<fvMatrix<scalar>> tRmat = reaction->R(Yi);
        const scalarField& Rref = tRmat().source()/mesh.V();
        Info << "Dimensions of source: " << tRmat().source().dimensions() << endl;

        for (label cellI=0; cellI<mesh.C().size(); cellI++)
        {
            RR_L2[i][cellI] = (RRNN[cellI] - Rref[cellI])/(Rref[cellI] + small_of) * UseNN[cellI];            
        }
    }

    Qdot_compare = (Qdot - Qdot_chemistry) * UseNN;

    volScalarField Yt(0.0*Y[0]);
/*
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
*/
}
