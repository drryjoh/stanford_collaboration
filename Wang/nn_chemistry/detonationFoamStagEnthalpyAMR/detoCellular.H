volScalarField magStagEnthalpy("magStagEnthalpy",mag(fvc::grad(HStag)));  

for (label cellI=0; cellI<mesh.C().size(); cellI++)
{
    if(maxp[cellI]<p[cellI])  maxp[cellI] = p[cellI] ;            
}

maxp.writeOpt() = IOobject::AUTO_WRITE;
HStag.writeOpt() = IOobject::AUTO_WRITE;
