const double SMALL = 1e-12;

mixMu *= 0;
mixLambdaA *= 0; // reset the number to zero;
mixLambdaB *= 0;

MW *= 0;
forAll(Y, i)
{
    MW += Y[i] / composition.W(i);
}

if (mag(MW) < SMALL)
{
    Info << "Warning: MW is zero or near zero before inversion! MW = " << MW << endl;
    MW = SMALL; // avoid division by zero, fallback value
}
MW = 1 / MW;

forAll(Y, i)
{
    X[i] = Y[i] * MW / composition.W(i);
}

// Check arguments for log, assuming T is a volScalarField and TUnit is scalar
scalar minT = min(T.internalField());
if (minT <= 0 || TUnit <= 0)
{
    Info << "Warning: Non-positive T or TUnit for log, min T = " << minT << ", TUnit = " << TUnit << endl;
}
// Proceed with log anyway; might still fail if invalid
volScalarField tmpT = log(T / TUnit);

if (differentialDiffusion)
{
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
                    volScalarField tmpd = 1e-4 * exp(Diff1[k] + tmpT * (Diff2[k] + tmpT * (Diff3[k] + tmpT * Diff4[k]))) / (p / 101325 / pUnit);

                    forAll(groupSpecies[i], h)
                    {
                        forAll(groupSpecies[j], z)
                        {
                            label m2 = max(groupSpecies[i][h], groupSpecies[j][z]);
                            label n2 = min(groupSpecies[i][h], groupSpecies[j][z]);
                            label k2 = Y.size() * n2 + m2 - 0.5 * n2 * (n2 + 1);
                            d[k2] = tmpd;

                            if (mag(d[k2].internalField()) < SMALL)
                            {
                                Info << "Warning: d[" << k2 << "] is zero or near zero!" << endl;
                            }
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
        Lambda[groupSpecies[i][0]] = lambdaUnit * 1e-5 * exp(Lambda1[groupSpecies[i][0]] + tmpT * (Lambda2[groupSpecies[i][0]] + tmpT * (Lambda3[groupSpecies[i][0]] + tmpT * Lambda4[groupSpecies[i][0]])));
        Mu[groupSpecies[i][0]] = 0.1 * MuUnit * exp(Mu1[groupSpecies[i][0]] + tmpT * (Mu2[groupSpecies[i][0]] + tmpT * (Mu3[groupSpecies[i][0]] + tmpT * Mu4[groupSpecies[i][0]])));

        forAll(groupSpecies[i], j)
        {
            if (j > 0)
            {
                Lambda[groupSpecies[i][j]] = Lambda[groupSpecies[i][0]];
                Mu[groupSpecies[i][j]] = Mu[groupSpecies[i][0]];
            }
        }
    }
}

forAll(Y, i)
{
    if (differentialDiffusion)
    {
        DiNumerator *= 0;
        DiDenominator *= 0;

        for (label j = 0; j < Y.size(); j++)
        {
            label m = max(i, j);
            label n = min(i, j);
            volScalarField& Xj = X[j];

            if (j != i)
            {
                label k = Y.size() * n + m - 0.5 * n * (n + 1);

                DiNumerator += (Xj + 1e-12) * composition.W(j);

                scalar denomMag = mag(d[k]);
                if (denomMag < SMALL)
                {
                    Info << "Warning: d[" << k << "] near zero for i=" << i << ", j=" << j << endl;
                    DiDenominator += SMALL; // prevent division by zero
                }
                else
                {
                    DiDenominator += MW * (Xj + 1e-12) / d[k];
                }
            }
        }

        if (mag(DiDenominator) < SMALL)
        {
            Info << "Warning: DiDenominator near zero for i = " << i << endl;
            Diff[i] = 0; // safe fallback
        }
        else
        {
            Diff[i] = DiNumerator * DUnit / DiDenominator;
        }
    }
}

forAll(Y, i)
{
    volScalarField& Xi = X[i];
    volScalarField& Mui = Mu[i];
    yhi *= 0;

    forAll(Y, z)
    {
        volScalarField& Xz = X[z];
        volScalarField& Muz = Mu[z];

        scalar denom = Foam::sqrt(1.0 + composition.W(i) / composition.W(z));
        scalar numerator = 1.0 + Foam::sqrt(Mui / Muz) * pow025(composition.W(z) / composition.W(i));
        yhi += Xz * 0.353553 * pow(numerator, 2) / denom;
    }

    scalar yhiMag = mag(yhi);
    if (yhiMag < SMALL)
    {
        Info << "Warning: yhi near zero for i = " << i << endl;
        // To avoid division by zero, skip or assign safe fallback
        continue;
    }

    mixMu += Xi * Mui / yhi;
    mixLambdaA += Xi * Lambda[i];

    if (mag(Lambda[i]) < SMALL)
    {
        Info << "Warning: Lambda[" << i << "] near zero!" << endl;
        mixLambdaB += 0; // avoid division by zero
    }
    else
    {
        mixLambdaB += Xi / Lambda[i];
    }
}

if (mag(mixLambdaB) < SMALL)
{
    Info << "Warning: mixLambdaB near zero!" << endl;
    mixLambdaB = SMALL;
}

scalar cpVal = thermo.Cp();
if (mag(cpVal) < SMALL)
{
    Info << "Warning: thermo.Cp() near zero!" << endl;
    cpVal = SMALL;
}

mixAlpha = 0.5 * (mixLambdaA + (1 / mixLambdaB)) / cpVal;

if (thermalDiffusion)
{
    TDRatio_H *= 0;
    TDRatio_H2 *= 0;
    volScalarField tmpTT = T / TUnit;

    forAll(Y, i)
    {
        if (Y[i].name() == "H")
        {
            forAll(Y, j)
            {
                if (j != i)
                {
                    TDRatio_H += X[i] * X[j] * (TDiff1[j] + tmpTT * (TDiff2[j] + tmpTT * (TDiff3[j] + tmpTT * TDiff4[j])));
                }
            }
        }

        if (Y[i].name() == "H2")
        {
            forAll(Y, j)
            {
                if (j != i)
                {
                    TDRatio_H2 += X[i] * X[j] * (TDiff1[j + Y.size()] + tmpTT * (TDiff2[j + Y.size()] + tmpTT * (TDiff3[j + Y.size()] + tmpTT * TDiff4[j + Y.size()])));
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
    Info << "WITHOUT differential diffusion " << endl;
}
Info << "update transport properties" << endl;
