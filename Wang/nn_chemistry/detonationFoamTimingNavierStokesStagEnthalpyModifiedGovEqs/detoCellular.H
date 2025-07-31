volScalarField magStagEnthalpy("magStagEnthalpy",mag(HStag));  

for (label cellI=0; cellI<mesh.C().size(); cellI++)
{
    if(maxp[cellI]<p[cellI])  maxp[cellI] = p[cellI] ;            
}

maxp.writeOpt() = IOobject::AUTO_WRITE;
magStagEnthalpy.writeOpt() = IOobject::AUTO_WRITE;
