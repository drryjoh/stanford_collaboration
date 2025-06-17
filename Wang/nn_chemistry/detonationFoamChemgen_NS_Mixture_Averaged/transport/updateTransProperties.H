Info << "Starting updateTransProperties..." << endl;

// Reset accumulators
mixMu = 0.0;
mixLambdaA = 0.0;
mixLambdaB = 0.0;

MW = 0.0;
forAll(Y, i)
{
    scalar Wi = composition.W(i);
    if (Wi == 0.0)
    {
        FatalErrorInFunction << "composition.W(" << i << ") is zero! Division by zero avoided." << exit(FatalError);
    }
    MW += Y[i] / Wi;
}
if (MW == 0.0)
{
    FatalErrorInFunction << "Calculated MW denominator is zero! Check Y and composition.W." << exit(FatalError);
}
MW = 1.0 / MW;

forAll(Y, i)
{
    scalar Wi = composition.W(i);
    X[i] = Y[i] * MW / Wi;
}

volScalarField tmpT = log(T / TUnit);

if (differentialDiffusion)
{
    Info << "Calculating differential diffusion coefficients..." << endl;

    forAll(groupSpecies, i)
    {
        if (groupSpecies[i][0] != -1)
        {
            for (label j = i; j < groupSpecies.size(); j++)
            {
                if (groupSpecies[j][0] != -1)
                {
                    label m = max(groupSpecies[i][0], groupSpecies[j][0]);
                    label n = min(groupSpecies[i][0], groupSpecies[j][0]);
                    label k = Y.size() * n + m - 0.5 * n * (n + 1);

                    scalar pCheck = p / 101325 / pUnit;
                    if (pCheck == 0.0)
                    {
                        FatalErrorInFunction << "Pressure normalization is zero! Check p and pUnit." << exit(FatalError);
                    }

                    volScalarField tmpd = 1e-4 * exp(Diff1[k] + tmpT * (Diff2[k] + tmpT * (Diff3[k] + tmpT * Diff4[k]))) / pCheck;

                    forAll(groupSpecies[i], h)
                    {
                        forAll(groupSpecies[j], z)
                        {
                            label m = max(groupSpecies[i][h], groupSpecies[j][z]);
                            label n = min(groupSpecies[i][h], groupSpecies[j][z]);
                            label k = Y.size() * n + m - 0.5 * n * (n + 1);
                            d[k] = tmpd;
                        }
                    }
                }
            }
        }
    }
}

forAll(groupSpecies, i)
{
    if (groupSpecies[i][0] != -1)
    {
        label baseIdx = groupSpecies[i][0];

        scalar tmpTVal = tmpT.internalField()[0];  // Assuming tmpT uniform for simplicity
        Lambda[baseIdx] = lambdaUnit * 1e-5 * exp(Lambda1[baseIdx] + tmpTVal * (Lambda2[baseIdx] + tmpTVal * (Lambda3[baseIdx] + tmpTVal * Lambda4[baseIdx])));
        Mu[baseIdx] = 0.1 * MuUnit * exp(Mu1[baseIdx] + tmpTVal * (Mu2[baseIdx] + tmpTVal * (Mu3[baseIdx] + tmpTVal * Mu4[baseIdx])));

        forAll(groupSpecies[i], j)
        {
            if (j > 0)
            {
                Lambda[groupSpecies[i][j]] = Lambda[baseIdx];
                Mu[groupSpecies[i][j]] = Mu[baseIdx];
            }
        }
    }
}

Info << "Computing Diff coefficients with differential diffusion..." << endl;

forAll(Y, i)
{
    if (differentialDiffusion)
    {
        DiNumerator = 0.0;
        DiDenominator = 0.0;

        for (label j = 0; j < Y.size(); j++)
        {
            label m = max(i, j);
            label n = min(i, j);

            volScalarField& Xj = X[j];

            if (j != i)
            {
                label k = Y.size() * n + m - 0.5 * n * (n + 1);

                scalar dVal = d[k].internalField()[0]; // Assuming uniform fields
                scalar XjVal = Xj.internalField()[0];

                DiNumerator += (XjVal + 1e-12) * composition.W(j);
                if (dVal == 0.0)
                {
                    FatalErrorInFunction << "Diffusion coefficient d[" << k << "] is zero, division avoided." << exit(FatalError);
                }
                DiDenominator += MW * (XjVal + 1e-12) / dVal;
            }
        }
        Diff[i] = DiNumerator * DUnit / DiDenominator; // Di m2/s
    }
}

Info << "Calculating mixture viscosity and thermal conductivity..." << endl;

forAll(Y, i)
{
    volScalarField& Xi = X[i];
    volScalarField& Mui = Mu[i];

    yhi = 0.0;

    forAll(Y, z)
    {
        volScalarField& Xz = X[z];
        volScalarField& Muz = Mu[z];

        // Extract scalar values assuming fields are uniform; otherwise, consider field operations
        scalar MuiVal = Mui.internalField()[0];
        scalar MuzVal = Muz.internalField()[0];
        scalar XiVal = Xi.internalField()[0];
        scalar XzVal = Xz.internalField()[0];
        scalar Wi = composition.W(i);
        scalar Wz = composition.W(z);

        if (MuzVal == 0.0 || Wi == 0.0 || Wz == 0.0)
        {
            FatalErrorInFunction << "Zero division risk in viscosity mixing calculation." << exit(FatalError);
        }

        scalar numerator = 1.0 + sqrt(MuiVal / MuzVal) * pow( Wz / Wi, 0.25 );
        scalar denominator = sqrt(1.0 + Wi / Wz);

        yhi += XzVal * 0.353553 * numerator * numerator / denominator;
    }

	scalar yhiMax = mag(yhi).max();

	scalar yhiMag = (yhiMax < 1e-12) ? 1e-12 : yhiMax;

    scalar XiVal = Xi.internalField()[0];
    scalar MuiVal = Mui.internalField()[0];

    mixMu += XiVal * MuiVal / yhiMag;

    scalar LambdaVal = Lambda[i].internalField()[0];
    if (LambdaVal == 0.0)
    {
        FatalErrorInFunction << "Lambda[" << i << "] is zero, division avoided." << exit(FatalError);
    }

    mixLambdaA += Xi.internalField()[0] * LambdaVal;
    mixLambdaB += Xi.internalField()[0] / LambdaVal;
}

scalar cpVal = CML::average(thermo.Cp().internalField());  // Extract scalar from field
if (cpVal == 0.0)
{
    FatalErrorInFunction << "Cp average value is zero! Check thermo.Cp() field." << exit(FatalError);
}

mixAlpha = 0.5 * (mixLambdaA + (1.0 / mixLambdaB)) / cpVal;

Info << "mixMu: " << mixMu << ", mixAlpha: " << mixAlpha << endl;

if (thermalDiffusion)
{
    TDRatio_H = 0.0;
    TDRatio_H2 = 0.0;
    volScalarField tmpTT = T / TUnit;

    forAll(Y, i)
    {
        if (Y[i].name() == "H")
        {
            forAll(Y, j)
            {
                if (j != i)
                {
                    scalar tmpTTVal = tmpTT.internalField()[0];
                    TDRatio_H += X[i].internalField()[0] * X[j].internalField()[0] *
                                 (TDiff1[j] + tmpTTVal * (TDiff2[j] + tmpTTVal * (TDiff3[j] + tmpTTVal * TDiff4[j])));
                }
            }
        }

        if (Y[i].name() == "H2")
        {
            forAll(Y, j)
            {
                if (j != i)
                {
                    scalar tmpTTVal = tmpTT.internalField()[0];
                    TDRatio_H2 += X[i].internalField()[0] * X[j].internalField()[0] *
                                  (TDiff1[j + Y.size()] + tmpTTVal * (TDiff2[j + Y.size()] + tmpTTVal * (TDiff3[j + Y.size()] + tmpTTVal * TDiff4[j + Y.size()])));
                }
            }
        }
    }
}

if (differentialDiffusion)
{
    if (thermalDiffusion)
    {
        Info << "WITH differential diffusion and thermalDiffusion" << endl;
    }
    else
    {
        Info << "WITH differential diffusion" << endl;
    }
}
else
{
    Info << "WITHOUT differential diffusion" << endl;
}

Info << "Finished updateTransProperties." << endl;
