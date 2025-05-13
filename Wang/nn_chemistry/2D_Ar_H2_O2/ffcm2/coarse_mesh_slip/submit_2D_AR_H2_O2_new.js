#!/bin/bash
#gen_pbs version: 2.2.0
#PBS -A           AFOSR53517002
#PBS -N           2D_AR_H2_O2_coarse
#PBS -joe
#PBS -M           egenter
#PBS -mbe
#PBS -l           walltime=168:00:00
#PBS -l           select=1:ncpus=128:mpiprocs=128
#PBS -q           standard

module unload PrgEnv-cray/8.3.3
module load PrgEnv-gnu/8.3.3

SCR="$WORKDIR/$PBS_JOBID"
if [ ! -e "$SCR" ]; then
    mkdir "$SCR"
fi

cd $SCR
cp -r $PBS_O_WORKDIR/0 .
cp -r $PBS_O_WORKDIR/system .
cp -r $PBS_O_WORKDIR/constant .
source /p/work1/egenter/detFoam/stanford_collaboration/Wang/nn_chemistry/OpenFOAM-6/etc/bashrc
OF
blockMesh
decomposePar
mpiexec -n 128 detonationEulerFoam -parallel

