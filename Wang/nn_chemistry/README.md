We are going to utilize OpenFOAM version 6 and detonation foam to include a NN for chemistry

In the stanford_collaboration directory (where this repo exists)

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



