#include <cmath>
#include <algorithm>
#include <array>
#include <iostream>  // For printing the result to the console
#include "types_inl.h"
#include "multiply_divide.h"
#include "pow_gen.h"
#include "exp_gen.h"
#include "array_handling.h"
#include "constants.h"
#include "thermally_perfect.h"
#include "arrhenius.h"
#include "third_body.h"
#include "falloff_troe.h"
#include "falloff_lindemann.h"
#include "falloff_sri.h"
#include "pressure_dependent_arrhenius.h"
#include "direct.h"
#include "reactions.h"
#include "source.h"
#include "chemical_state_functions.h"
#include "default_parameters.h"
#include "rk4.h"
#include "linear_solvers.h"
#include "backward_euler.h"
#include "sdirk.h"
#include "rosenbroc.h"
#include "yass.h"

// Overload << operator for std::array
template <typename T, std::size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<T, N>& arr) {
    os << "[ ";
    for (const auto& value : arr) 
    {
        os << value << " ";
    }
    os << "]";
    return os;
}

int main() {
    std::cout << "*** ChemGen ***" <<std::endl;
    Species species  = {double(6.667022002962416e-05),double(2.115544578681711e-05),double(4.510696623532957e-05),double(0.00010677485220573204),double(8.339448496969061e-05),double(0.00012015034327841004),double(0.00010043874801957337),double(8.164157232542904e-06),double(8.949660265188757e-05)};
    double temperature_ =  3080.453284822596;
    Species result = source_species(species, temperature_);


    double pressure_return = pressure(species, temperature_);
    double int_energy = internal_energy_volume_specific(species, temperature_);
    std::cout << "temperature: " << temperature_<<std::endl;
    for(int i=0; i<10; ++i)
    {
        std::cout << "temperature_ for "<< i <<" iterations: " << (temperature_ - temperature(int_energy, species, i)) / (temperature_)<<std::endl;
    }
    // Output the result
    std::cout << "Source test result:  " << result << std::endl;
    std::cout << "Cantera test result: " <<"0.0 249.2467997131801 -182.16261976316554 -594.3095358264783 213.7746618317941 2632.3356942097294 570.6315015861279 622.3132739358673 -2140.4167657523512"<<std::endl;

    
    std::cout << "ChemGen internal energy: "<< int_energy <<std::endl;
    std::cout << "Cantera internal energy: " <<"51950.21832771621"<<std::endl;

    
    std::cout << "Chemgen species cps: " << species_specific_heat_constant_pressure_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species cps: " <<"1324.8079171771758 20621.18704899117 18469.905703117212 1310.3274459886138 1254.5377321489368 2186.1043481363076 3170.4019057957294 1830.3974804295049 2325.1665141155217"<<std::endl;

    
    std::cout << "Chemgen species enthalpies: " << species_enthalpy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species enthalpies: " <<"3416963.420826038 273641446.4549678 45472198.63368504 19215959.81277449 3167883.9270239626 7648105.241791202 -6084450.875813192 4756756.875634217 1591261.7926930315"<<std::endl;
    
    std::cout << "Chemgen species internal energies: " << species_internal_energy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal energies: " <<"2502695.066302413 248232405.10216534 32767677.957283832 17615090.153194215 2367449.0972338244 6142118.666638334 -7506172.423613627 3980767.246972009 838268.5051165976"<<std::endl;

    std::cout << "Chemgen species internal entropies: " << species_entropy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal entropies: " <<"10101.999100926827 176969.6603426414 108635.21048818278 14087.552370846044 9397.532128604169 16053.808570545702 16854.034553808437 10740.827440271945 11555.51778624514"<<std::endl;

    
    std::cout << "Chemgen species gibbs energy: " << species_gibbs_energy_mole_specific(temperature_) <<std::endl;
    std::cout << "Cantera species gibbs energy: " <<"-776037465.8216703 -273677367.6619527 -582973760.601856 -386857214.52257377 -824933231.6587645 -710975970.0701336 -1044915343.3876008 -935055368.8790845 -1156645081.205256"<<std::endl;
    
    std::cout << "Chemgen species gibbs reactions : " << gibbs_reaction(log_gen(temperature_)) <<std::endl;
    std::cout << "Cantera species gibbs reactions : " <<"0.030353162842409562 -0.5787201730678913 -0.5787201730678913 -0.9621536219634613 -0.3834334488955702 1.3906992440407124 -1.999772579951013 -1.9694194171086037 2.3528528660041736 2.3528528660041736 6.385804596255644 -7.7765038402963516 -8.324870850521833 -8.708304299417403 -8.355224013364243 -8.738657462259804 -8.738657462259804 -4.352108774035442 -4.352108774035442 -10.358566672742034 -12.711419538746204 -3.4243950662609084 -4.0031152393288085 -4.386548688224379 -4.386548688224379"<<std::endl;

    std::cout << "Pressure: " <<pressure_return <<std::endl;
    std::cout << "Temperature Monomial at 300           : " <<temperature_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Energy Monomial at 300           : " <<temperature_energy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Entropy Monomial at 300           : " <<temperature_entropy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Gibbs Monomial at 300           : " <<temperature_gibbs_monomial(double(300)) <<std::endl;
    
    return 0;
}
            