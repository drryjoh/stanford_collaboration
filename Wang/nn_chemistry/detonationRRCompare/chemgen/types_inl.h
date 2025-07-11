
const int n_species = 9;
const int n_reactions = 27;
const int n_order_thermo = 7 + 1;
const int n_chemical_state = 9 + 1;
// Using alias for the array type (for example, an array of double values)
using Species = std::array<scalar, n_species>;
using Reactions = std::array<scalar, n_reactions>;
using TemperatureMonomial = std::array<scalar, n_order_thermo>;
using TemperatureEnergyMonomial = std::array<scalar, n_order_thermo + 1>;
using TemperatureGibbsMonomial = std::array<scalar, n_order_thermo + 2>;
using ThermoTable = std::array<TemperatureEnergyMonomial, n_species>;
using ChemicalState = std::array<scalar, n_species + 1>;
using SpeciesJacobian = std::array<Species, n_species>;
using ReactionSpecies = std::array<std::array<scalar, n_species>, n_reactions>;

