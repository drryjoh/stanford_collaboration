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
#include "reactions.h"
#include "source.h"
#include "chemical_state_functions.h"

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
    Species species  = {double(0.0),double(0.0),double(0.0),double(0.006770331319280119),double(0.0),double(0.0),double(0.0),double(0.0),double(0.0)};
    double temperature_ =  1800;
    Species result = source(species, temperature_);


    double pressure_return = pressure(species, temperature_);
    double int_energy = internal_energy_volume_specific(species, temperature_);
    std::cout << "temperature: " << temperature_<<std::endl;
    for(int i=0; i<10; ++i)
    {
        std::cout << "temperature_ for "<< i <<" iterations: " << (temperature_ - temperature(int_energy, species, i)) / (temperature_)<<std::endl;
    }
    // Output the result
    std::cout << "Source test result:  " << result << std::endl;
    std::cout << "Cantera test result: " <<"0.0 0.0 1.3343146707652506e-06 -6.671573353826253e-07 0.0 0.0 0.0 0.0 0.0"<<std::endl;

    
    std::cout << "ChemGen internal energy: "<< int_energy <<std::endl;
    std::cout << "Cantera internal energy: " <<"248345.87125191203"<<std::endl;

    
    std::cout << "Chemgen species cps: " << species_specific_heat_constant_pressure_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species cps: " <<"20621.18704899117 16616.78802469927 1301.6863166535868 1167.0799719707766 2004.0508234338902 2781.953463285981 1650.4585771578277 2127.8710008356074 520.30429400208"<<std::endl;

    
    std::cout << "Chemgen species enthalpies: " << species_enthalpy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species enthalpies: " <<"247236979.76114592 22924287.42497859 17546354.348052036 1614086.106703522 4952835.895921169 -9933592.095499126 2510821.7456610794 -1281946.3720538646 781419.003947024"<<std::endl;
    
    std::cout << "Chemgen species internal energies: " << species_internal_energy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal energies: " <<"232389725.08587226 15500660.08734177 16610918.838790463 1146368.3520727376 4072843.38032901 -10764346.062342083 2057388.0453436875 -1721942.6298499438 406799.91226552625"<<std::endl;

    std::cout << "Chemgen species internal entropies: " << species_entropy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal entropies: " <<"150882.52021782557 91714.6332852643 12441.629169912665 8274.873072719249 14037.717709743141 14408.506261912842 9344.433258665218 9909.851918999964 4811.468124078146"<<std::endl;

    
    std::cout << "Chemgen species gibbs energy: " << species_gibbs_energy_mole_specific(temperature_) <<std::endl;
    std::cout << "Cantera species gibbs energy: " <<"-24546369.08398764 -286598697.81681025 -77572401.9464944 -424955372.2032677 -345498157.07935154 -646178294.1554644 -472288072.9066179 -650336789.6101968 -314774983.59477586"<<std::endl;
    
    std::cout << "Chemgen species gibbs reactions : " << gibbs_reaction(log_gen(temperature_)) <<std::endl;
    std::cout << "Cantera species gibbs reactions : " <<"1.7660780761906856 -0.39245045850126403 -0.39245045850126403 -2.581031933103661 -2.188581474602397 15.869667279804467 15.869667279804467 -18.028195814496417 -18.028195814496417 -16.262117738305733 18.450699212908134 18.450699212908134 -1.5225365370251474 -14.347130742779319 -12.973503125089897 -15.162084599692294 -14.739581201280586 -16.928162675882987 -16.928162675882987 -8.734179492305659 -8.734179492305659 -2.7167870957591 -21.167486308667236 -5.612951250473673 -6.0054017089749365 -8.193983183577325 -8.193983183577325"<<std::endl;

    std::cout << "Pressure: " <<pressure_return <<std::endl;
    std::cout << "Temperature Monomial at 300           : " <<temperature_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Energy Monomial at 300           : " <<temperature_energy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Entropy Monomial at 300           : " <<temperature_entropy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Gibbs Monomial at 300           : " <<temperature_gibbs_monomial(double(300)) <<std::endl;
    
    return 0;
}
            