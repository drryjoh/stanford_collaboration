#!/usr/bin/bash
#SBATCH --job-name=test_job
#SBATCH --output=of_compile.out
#SBATCH --error=of_compile.err
#SBATCH --time=4:00:00
#SBATCH -p haiwang 
#SBATCH --nodes=1
#SBATCH --ntasks=16
#SBATCH --mem=8GB

module load openmpi
module load llvm
module load python/3.12.1
module load cmake

source ./OpenFOAM-6/etc/bashrc
cd ./OpenFOAM-6/
./Allwmake -j 16
cd ../ThirdParty-6/
./Allwmake -j 16

