#!/bin/bash
#SBATCH --account=AFOSR53517002
#SBATCH --job-name=methane
#SBATCH --output=slurm-%x.%j.out
#SBATCH --mail-user=jelipman
#SBATCH --mail-type=BEGIN,END,FAIL
#SBATCH --time=128:00:00
#SBATCH --nodes=4
#SBATCH --ntasks=512
#SBATCH -q standard

cd "$WORKDIR/chemgen_cases/detonationFoam_Chemgen/"
source ../../stanford_collaboration/Wang/nn_chemistry/OpenFOAM-6/etc/bashrc
source $HOME/.venvs/myenv/bin/activate

#blockMesh
decomposePar
#postProcess -func writeCellCentres
#python scripts/consolidate_from_OF.py
#python scripts/interpolate_znd_on_openfoam.py
srun -n 512 detonationEulerFoam_Chemgen -parallel > logof
