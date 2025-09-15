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
    Species species  = {double(0.0027198780600645083),double(0.00048062948125885037),double(0.0034028534903618713),double(4.2040067596654434e-05),double(0.0029224853777173624),double(0.0015042610520447793),double(0.0030035095413648515),double(0.0025845148450177845),double(0.0012247961609630706),double(0.002222353620510761)};
    double temperature_ =  4205.085594071677;
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
    std::cout << "Cantera test result: " <<"-740934.3887030644 0.0 -2417234.3474979848 1401819.536476501 -338961.9512051111 2006623.6790987896 8184373.372555348 555482.804354389 -509594.7110738672 -4586074.497822638"<<std::endl;

    
    std::cout << "ChemGen internal energy: "<< int_energy <<std::endl;
    std::cout << "Cantera internal energy: " <<"3749465.4761011368"<<std::endl;

    
    std::cout << "Chemgen species cps: " << species_specific_heat_constant_pressure_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species cps: " <<"1915.3114604494824 1341.3631922985114 20621.18704899117 19592.20613363353 1337.2336359844762 1311.992649413658 2281.7148045858785 3315.7105996444607 1879.7843893654704 2405.0418838701034"<<std::endl;

    
    std::cout << "Chemgen species enthalpies: " << species_enthalpy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species enthalpies: " <<"8945856.389075123 4916352.865762377 296832699.66533196 66907501.974644125 20703297.746841095 4612328.265573082 10163686.03007757 -2428092.665230387 6850185.621477014 4253687.696889027"<<std::endl;
    
    std::cout << "Chemgen species internal energies: " << species_internal_energy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal energies: " <<"8217414.466079026 3668297.358585835 262147157.02838388 49564730.65617008 18517971.977852803 3519665.381078935 8107883.891073413 -4368865.7420021705 5790892.554215193 3225786.6273869486"<<std::endl;

    std::cout << "Chemgen species internal entropies: " << species_entropy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal entropies: " <<"8045.437668460562 9401.882807864225 152402.12013980962 99065.31269219372 12546.733489722077 8820.692026536515 14912.686855225304 16130.963604883538 10373.45533535009 11373.407580097492"<<std::endl;

    
    std::cout << "Chemgen species gibbs energy: " << species_gibbs_energy_mole_specific(temperature_) <<std::endl;
    std::cout << "Cantera species gibbs energy: " <<"-1194448429.4384148 -969827005.5958686 -346783510.322487 -704935964.4758036 -512876591.26463056 -1039277015.6852632 -893640274.8438873 -1265737058.7252517 -1213666331.5001574 -1482073813.4107065"<<std::endl;
    
    std::cout << "Chemgen species gibbs reactions : " << gibbs_reaction(log_gen(temperature_)) <<std::endl;
    std::cout << "Cantera species gibbs reactions : " <<"-0.5850849273895515 -0.6467183015972797 -0.6467183015972797 -0.39883073444425926 0.2478875671530136 0.32517046759049695 -0.3868038417982183 -0.9718887691877698 0.7240012020347563 0.7240012020347563 4.9307571285476515 -5.255927596138148 -6.487730825124973 -6.239843257971959 -5.902645897735421 -5.654758330582407 -5.654758330582407 -2.6890739796270258 -2.6890739796270258 -8.729413974045604 -9.45341517608036 -2.566853616511122 -3.2135719181084017 -2.9656843509554016 -2.9656843509554016 -10.23095562452625 -10.617759466324468 -11.202844393714019 -5.300198495978598 -4.715113568589053 -1.749429217633658 -16.13360152226167"<<std::endl;

    std::cout << "Pressure: " <<pressure_return <<std::endl;
    std::cout << "Temperature Monomial at 300           : " <<temperature_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Energy Monomial at 300           : " <<temperature_energy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Entropy Monomial at 300           : " <<temperature_entropy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Gibbs Monomial at 300           : " <<temperature_gibbs_monomial(double(300)) <<std::endl;
    
    return 0;
}
            