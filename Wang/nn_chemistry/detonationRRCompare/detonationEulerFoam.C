/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2011-2018 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Application
    detonationEulerFoam

Description
    Density-based compressible reactive flow solver for Euler equations.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include "dynamicFvMesh.H" 
#include "psiReactionThermo.H"
#include "CombustionModel.H"
#include "turbulentFluidThermoModel.H"
#include "directionInterpolate.H" 
#include "fvcSmooth.H"
#include "fluxScheme.H"
#include "clockTime.H"

//CodeJeNN 
#include "nn_interface.H"
#include "IOmanip.H"
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

int main(int argc, char *argv[]) {
    #define NO_CONTROL
    #include "setRootCaseLists.H"
    #include "createTime.H"
    #include "createDynamicFvMesh.H"
    #include "createFields.H"
    #include "createFieldRefs.H"

    Info<< "\nStarting time loop\n" << endl;
    scalar chemistry_time = 0;   //adding timing
    scalar entire_time = 0;
    clockTime timer;
    int stepCount = 0;
    const int maxSteps = 1;

    while (runTime.run() && stepCount < maxSteps )
    {
        #include "calculateDt.H"
        #include "detoCellular.H"

        mesh.update();                                
        scalar totalNN = 0;
        scalar totalChemgen= 0;
        scalar totalOF     = 0;

        fluxSchemeFields->update(rho,U,e,p,c,phi,rhoPhi,rhoUPhi,rhoEPhi);
        scalar time_before =  timer.elapsedTime();
        #include "rhoEqn.H"
        #include "rhoUEqn.H"
        #include "rhoYEqn.H"
        #include "rhoEEqn.H"
        scalar time_after = timer.elapsedTime();
        entire_time += time_after - time_before;
        scalar iteration_time  = time_after - time_before;
        //Info << "Time to solve iterations complete system:          "<< time_after-time_before <<endl;
        //Info << "Total time to solve entire system:                 "<< entire_time <<endl;
        //Info << "Total time to solve chemistry system:              "<< chemistry_time <<endl;
        //Info << "Running percentage of chemistry/total_simulation:  "<< chemistry_time/entire_time <<endl;
        scalar total_iteration     = iteration_time;
        reduce(total_iteration, sumOp<scalar>());

        Pout<< "rank " << Pstream::myProcNo()
        << " total time:    " << iteration_time << endl;
        Info << "All pct totalNN/total_iteration: " << totalNN/(total_iteration - totalChemgen - totalOF) << endl;
        Info << "All pct totalChemgen/total_iteration: " << totalChemgen/(total_iteration - totalNN - totalOF) << endl;
        Info << "All pct totalOF/total_iteration: " << totalOF/(total_iteration - totalNN - totalChemgen) << endl;

        runTime.writeNow();
        ++stepCount;
        break;
    }

    Info<< "End" << endl;

    return 0;
}

