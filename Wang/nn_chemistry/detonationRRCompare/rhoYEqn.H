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
    Info << "Neural Network chemistry time:                 " << current_iteration_chemistry_time <<endl;
    
    scalar time_before_chemgen_chemistry =  timer.elapsedTime();
    auto RR_chemgen = nnInterface.solve_chemgen(Y, p, T, UseNN, runTime.deltaT().value()); //get the linearized source term, (C1_i-C0_i)/dt*W_i
    scalar time_after_chemgen_chemistry =  timer.elapsedTime();
    scalar chemgen_time = time_after_chemgen_chemistry - time_before_chemgen_chemistry;
    Info << "CHEMGEN Time:                 " << chemgen_time <<endl;


    
    scalar time_before_openfoam_chemistry =  timer.elapsedTime();
    reaction->correct();
    scalar time_after_openfoam_chemistry =  timer.elapsedTime();
    scalar openfoam_time = time_after_openfoam_chemistry - time_before_openfoam_chemistry;
    Info << "OpenFOAM ODE Time:                 " << openfoam_time <<endl;

    #include "Pstream.H"

    // … inside your loop, after you’ve accumulated chemistry_time on each rank …

    // 1) Print the *local* timing on each rank:
    Pout<< "rank " << Pstream::myProcNo()
        << " NN-chemistry time:    " << chemistry_time << endl
        << "rank " << Pstream::myProcNo()
        << " chemgen time:         " << chemgen_time       << endl
        << "rank " << Pstream::myProcNo()
        << " OpenFOAM ODE time:    " << openfoam_time     << endl;

    scalar totalNN     = Pstream::sum(nn_chemistry_time);
    scalar totalChemgen= Pstream::sum(chemgen_time);
    scalar totalOF     = Pstream::sum(openfoam_time);

    Qdot  = nnInterface.Qdot(thermo, RR); // sum(RR_i, Hc_i)
    Qdot_of = reaction->Qdot();
    Qdot_nn  = nnInterface.Qdot(thermo, RR); // sum(RR_i, Hc_i)
    Qdot_chemgen  = nnInterface.Qdot(thermo, RR_chemgen); // sum(RR_i, Hc_i)

    forAll(Y, i)    
    {
        scalar small_of = SMALL;
        volScalarField& Yi = Y[i];
        volScalarField& RRNN = RR[i];
        volScalarField& RRCG = RR_chemgen[i];
        tmp<fvMatrix<scalar>> tRmat = reaction->R(Yi);
        const scalarField& Rref = tRmat().source()/mesh.V();
        //Info << "Dimensions of source: " << tRmat().dimensions() << endl;

        for (label cellI=0; cellI<mesh.C().size(); cellI++)
        {
            RR_L2[i][cellI] = RRNN[cellI]; //- Rref[cellI])/(Rref[cellI] + small_of) * UseNN[cellI];            
            RRCG_L2[i][cellI] = RRCG[cellI]; //- Rref[cellI])/(Rref[cellI] + small_of) * UseNN[cellI];            
            RROF_L2[i][cellI] = -Rref[cellI] * UseNN[cellI]; //- Rref[cellI])/(Rref[cellI] + small_of) * UseNN[cellI];            
        }
    }

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
                reaction->R(Yi)
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
