    scalar time_after_fluid_rank =  timer.elapsedTime();
    scalar fluid_time_rank = time_after_fluid_rank - time_before_fluid_rank;


    fluid_time = reduce(fluid_time_rank, sumOp<scalar>()) - chemistry_time;
    running_fluid_time += fluid_time;

    Info << "Time for entire fluid solve:     " << fluid_time;
    Info << "Time for entire chemistry solve: " << chemistry_time;
    Info << "Running fluid solve time       : " << running_fluid_time;
    Info << "Running chemsitry solve time   : " << running_chemistry_time;
    Info << "Chemsitry Cost   :               " << running_chemistry_time/(running_fluid_time + running_chemistry_time);