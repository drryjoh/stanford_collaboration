We are going to utilize OpenFOAM version 6 and detonation foam to include a NN for chemistry

In the stanford_collaboration directory (where this repo exists)

** Compiling Necessary Dependencies

run

```
git submodule init
git submodule update
```

Then we must install openfoam on our system

I've included a script to compile openfoam on 16 processors on sherlock as `compile_openfoam.sh`

```terminal
sbatch compile_openfoam.sh
```

note this will navigate to the submodules included and compile if directly submitted from where `compile_openfoam.sh` is located

It should take a few hours to compile

Once compiled we need to compile detonationFoam which is rather fast and can probably be done in the front end

```terminal
module load openmpi
cd detonationFoam/applications/solvers
./Allwmake -j 16
```

I tried including `sherlock_modules.sh`, but that hasn't been working very well.

** NN Generation/Location

Next,
```terminal
cd detonation_foam_fork/detonationEulerFoamNN
wmake
```
This will compile detonationEulerFoamNN

Next to run in serial:
```terminal
cd 1D_detonation_AR_H2_O2
blockMesh
detonationEulerFoamNN
```
To run in parallel:
```terminal
cd 1D_detonation_AR_H2_O2
blockMesh
mpirun -np ## detonationEulerFoamNN -parallel
```
`##` is the number of processors

This should run 500 steps and then crash


