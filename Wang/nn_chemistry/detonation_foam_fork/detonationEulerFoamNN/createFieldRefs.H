volScalarField& p = thermo.p();
const volScalarField& T = thermo.T();
const volScalarField& psi = thermo.psi();
const label inertIndex(composition.species()[inertSpecie]);

NNInterface nnInterface(mesh);
nnInterface.check_species_list(Y);

