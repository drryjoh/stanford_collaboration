! generator: yaml2ck
! cantera-version: 3.0.1
! date: Tue, 22 Apr 2025 14:51:52 -0700
! input-files: ['FFCM2_H2_Ar.yaml']
!
! "FFCM-2 H2 sub mechanism with Ar"

ELEM
H O Ar
END

SPECIES
H  H2  O  O2  OH  H2O  HO2  H2O2  AR
END

REACTIONS CAL/MOLE MOLE
H + O2 <=> O + OH          103990000000000.02 0.0 15310.0
H2 + O <=> H + OH          3649000000000.0005 0.0 7950.0
DUPLICATE
H2 + O <=> H + OH          760250000000000.1 0.0 19180.0
DUPLICATE
H2 + OH <=> H + H2O        215780000.00000003 1.51 3437.0
2 OH <=> H2O + O           33500.00000000001 2.42 -1928.0
H2 + M <=> 2 H + M         3.876700000000001e+19 -1.4 104390.0
AR/0.000E+00/ H2/2.500E+00/ H2O/1.200E+01/
H2 + AR <=> 2 H + AR       5.840000000000001e+18 -1.1 104390.0
2 O + M <=> O2 + M         6160000000000001.0 -0.5 0.0
AR/0.000E+00/ H2/2.500E+00/ H2O/1.200E+01/
2 O + AR <=> O2 + AR       18900000000000.004 0.0 -1788.0
H + O + M <=> OH + M       4.712400000000001e+18 -1.0 0.0
AR/7.500E-01/ H2/2.500E+00/ H2O/1.200E+01/
H2O + M <=> H + OH + M     5.903000000000001e+27 -3.32 120800.0
AR/1.000E+00/ H2/3.000E+00/ H2O/0.000E+00/ O2/1.500E+00/
H2O + H2O <=> H + OH + H2O 1.0100000000000001e+26 -2.44 120200.0
H + O2 (+M) <=> HO2 (+M)   5286300000000.001 0.44 0.0
LOW /7.241700000000001e+20 -1.72 525.0/
TROE /0.5 30 90000 90000/
AR/6.867E-01/ H2/2.000E+00/ H2O/1.377E+01/ O2/7.800E-01/
H + HO2 <=> H2 + O2        3272900.0000000005 2.09 -1455.0
H + HO2 <=> 2 OH           63600000000000.01 0.0 300.0
H + HO2 <=> H2O + O        1613100000000.0002 0.0 0.0
HO2 + O <=> O2 + OH        17208000000000.004 0.0 -445.0
HO2 + OH <=> H2O + O2      7636800000000.001 0.0 -1093.0
DUPLICATE
HO2 + OH <=> H2O + O2      450000000000000.06 0.0 10930.0
DUPLICATE
2 HO2 <=> H2O2 + O2        194000000000.00003 0.0 -1409.0
DUPLICATE
2 HO2 <=> H2O2 + O2        103000000000000.02 0.0 11040.0
DUPLICATE
H2O2 (+M) <=> 2 OH (+M)    1925200000000.0 0.9 48750.0
LOW /2.3968000000000006e+24 -2.3 48750.0/
TROE /0.58 30 90000 90000/
AR/9.860E-01/ H2/3.700E+00/ H2O/7.500E+00/ H2O2/7.700E+00/ O2/1.200E+00/
H + H2O2 <=> H2O + OH      24100000000000.004 0.0 3970.0
H + H2O2 <=> H2 + HO2      48200000000000.01 0.0 7950.0
H2O2 + O <=> HO2 + OH      9630000.0 2.0 3970.0
H2O2 + OH <=> H2O + HO2    1761100000000.0002 0.0 318.0
DUPLICATE
H2O2 + OH <=> H2O + HO2    76310000000000.02 0.0 7270.0
DUPLICATE
END
