BasicChemistryModel<rhoReactionThermo>& chemistry = pChemistry();
scalar dtChem = min
(
    refCast<const BasicChemistryModel<rhoReactionThermo>>
    (
        chemistry
    ).deltaTChem()[0],
    runTime.deltaT().value()
);
basicSpecieMixture& composition = thermo.composition();
PtrList<volScalarField>& Y = composition.Y();
volScalarField& p = thermo.p();
volScalarField& T = thermo.T();

NNInterface nnInterface(mesh);
nnInterface.check_species_list(Y);

forAll(Y,i)
{
    post<<", " << composition.Y()[i].name();
}
post << endl;

post<< scalar(0.0) <<", "<< thermo.T()[0] << ", " << thermo.p()[0];

forAll(Y, i)
{
    post <<", "<<composition.Y()[i][0];
}
post << endl;
