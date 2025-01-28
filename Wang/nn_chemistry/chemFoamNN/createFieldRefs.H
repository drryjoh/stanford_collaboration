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

NNInterface nnInterface(mesh);
nnInterface.check_species_list(Y);

