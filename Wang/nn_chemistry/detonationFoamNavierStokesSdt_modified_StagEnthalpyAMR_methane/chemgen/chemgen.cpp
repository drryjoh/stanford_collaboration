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
    Species species  = {double(0.001472531658427587),double(0.0001646917876311873),double(0.0033410017280323854),double(0.0027361483229167358),double(0.0026032328840694336),double(0.0029922872795090497),double(0.0008312933088051454),double(0.0030875182820693237),double(0.0004407344190124109),double(0.0027202480733466046),double(0.0021125195810807766),double(0.0002728641280656176),double(0.003168122595856462)};
    double temperature_ =  1906.846802267633;
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
    std::cout << "Cantera test result: " <<"153285.98085451403 1436379.641468944 582457.4385264775 -1324332.3642020545 24511.63462598607 -778309.4650497877 355405.76156219834 -1414093.4517267914 82012.87819249142 220910.35274218896 4038.447526190415 1107131.7732659203 0.0"<<std::endl;

    
    std::cout << "ChemGen internal energy: "<< int_energy <<std::endl;
    std::cout << "Cantera internal energy: " <<"1138060.8196745596"<<std::endl;

    
    std::cout << "Chemgen species cps: " << species_specific_heat_constant_pressure_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species cps: " <<"16804.16304703455 20621.18704899117 1175.7470790761658 1301.464434312935 2024.3974742251216 1672.064542554177 2829.7666502410752 4835.571315414558 6227.468996235348 1289.5455203041595 1366.655684216149 2503.8725638669594 1278.917289478721"<<std::endl;

    
    std::cout << "Chemgen species enthalpies: " << species_enthalpy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species enthalpies: " <<"24709811.11510529 249440287.65629333 1739250.722284612 17685422.09127948 5168060.24080321 2688334.2356944946 -9633763.329225564 16086163.832003262 2757387.61171711 -2042677.7795744275 -6993577.388999043 -373318.02920306346 1882817.5913038426"<<std::endl;
    
    std::cout << "Chemgen species internal energies: " << species_internal_energy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal energies: " <<"16845522.19843898 233711709.8229607 1243769.5529615518 16694459.75263336 4235831.955038567 2207985.012644162 -10513830.29875092 15031663.901441291 1769143.1153012728 -2608704.429199536 -7353831.120190373 -901340.6248201712 1316871.7622184113"<<std::endl;

    std::cout << "Chemgen species internal entropies: " << species_entropy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal entropies: " <<"86900.05958844509 140515.31912366173 7978.374513631494 11788.590023536764 13468.927800799765 9087.30076618148 13923.693688685267 18763.94737973115 18251.222829338465 8757.637279290562 6695.923071195043 10265.58857273313 8520.073298373109"<<std::endl;

    
    std::cout << "Chemgen species gibbs energy: " << species_gibbs_energy_mole_specific(temperature_) <<std::endl;
    std::cout << "Cantera species gibbs energy: " <<"-284246503.8900237 -18648906.478551194 -431150242.0280572 -76693015.96043316 -348900674.17579544 -483199792.1979441 -651856815.7862124 -296096421.72727156 -514096303.07204425 -524967633.2924746 -869691638.0556145 -598965336.9675169 -402383485.31503236"<<std::endl;
    
    std::cout << "Chemgen species gibbs reactions : " << gibbs_reaction(log_gen(temperature_)) <<std::endl;
    std::cout << "Cantera species gibbs reactions : " <<"1.526733809780719 -0.4169226279290018 -0.4169226279290018 -2.3563508544217804 -1.939428226492779 15.576028760097572 -15.992951388026576 17.932379614519355 17.932379614519355 -2.1067104457068386 -13.469318314390732 -12.359507132539015 -14.298935359031795 -13.886240942319734 -15.82566916881252 -15.82566916881252 -16.905772508518233 0.613912689289061 -0.9128211204916581 -0.9128211204916581 -13.272328253030674 -3.0021758429618774 -3.4190984708908867 -5.358526697383666 -12.57385291713569 -15.442066938161663 -28.70328871890035 -10.467142471428847 -11.808622682674093 2.0776182596456416 -13.915333128380935 -10.259045937776795 -13.26122178073868 -13.26122178073868 -13.26122178073868 -13.678144408667682 -15.617572635160474 0.20809653365205272"<<std::endl;

    std::cout << "Pressure: " <<pressure_return <<std::endl;
    std::cout << "Temperature Monomial at 300           : " <<temperature_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Energy Monomial at 300           : " <<temperature_energy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Entropy Monomial at 300           : " <<temperature_entropy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Gibbs Monomial at 300           : " <<temperature_gibbs_monomial(double(300)) <<std::endl;
    
    return 0;
}
            