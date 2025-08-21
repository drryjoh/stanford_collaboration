volScalarField magGradStagEnthalpy("magGradStagEnthalpy",mag(fvc::grad(HStag)));  

for (label cellI=0; cellI<mesh.C().size(); cellI++)
{
    if(maxp[cellI]<p[cellI])  maxp[cellI] = p[cellI] ;            
}

maxp.writeOpt() = IOobject::AUTO_WRITE;
magGradStagEnthalpy.writeOpt() = IOobject::AUTO_WRITE;
