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
    Species species  = {double(0.0020113270340548573),double(0.0035835020429360338),double(0.004109802904932409),double(0.004604359532201402),double(0.0017659894665684112),double(0.0044948777866669724),double(0.0017121143931070023),double(0.0021460739992916486),double(0.0022682883286589445)};
    double temperature_ =  4513.993757177555;
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
    std::cout << "Cantera test result: " <<"330685.3786534078 -528588.5953245654 -2956904.478407131 1228151.973706274 16910177.63951706 -102388.34413580321 -328279.62513694307 -7825314.757056396 0.0"<<std::endl;

    
    std::cout << "ChemGen internal energy: "<< int_energy <<std::endl;
    std::cout << "Cantera internal energy: " <<"3465132.7754147267"<<std::endl;

    
    std::cout << "Chemgen species cps: " << species_specific_heat_constant_pressure_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species cps: " <<"20621.18704899117 19847.696886976406 1346.8079297646163 1325.5139312276065 2302.8096733581574 3343.733798678517 1882.1799315929081 2424.3855330230153 520.30429400208"<<std::endl;

    
    std::cout << "Chemgen species enthalpies: " << species_enthalpy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species enthalpies: " <<"303202752.67769855 72999630.64527157 21117843.824975505 5019727.678876433 10871832.933656605 -1399456.1594446471 7431324.962202783 4999619.760635125 2193521.6097013447"<<std::endl;
    
    std::cout << "Chemgen species internal energies: " << species_internal_energy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal energies: " <<"265969188.83580387 54382848.724324204 18771982.686614983 3846797.109696175 8665010.310464399 -3482799.6150444183 6294215.577465769 3896208.449039022 1254061.4757181185"<<std::endl;

    std::cout << "Chemgen species internal entropies: " << species_entropy_mass_specific(temperature_) <<std::endl;
    std::cout << "Cantera species internal entropies: " <<"150941.22595306922 99001.87479213123 12457.718259792417 8822.105366254902 14901.955701270646 16203.467500869003 10417.554656520851 11457.961275713118 4812.949360151378"<<std::endl;

    
    std::cout << "Chemgen species gibbs energy: " << species_gibbs_energy_mole_specific(temperature_) <<std::endl;
    std::cout << "Cantera species gibbs energy: " <<"-381170158.96698415 -753770735.65641 -561824381.8358407 -1113632821.4242067 -959118303.731966 -1342870658.5634863 -1306821467.5491486 -1589186662.511857 -780307465.1375657"<<std::endl;
    
    std::cout << "Chemgen species gibbs reactions : " << gibbs_reaction(log_gen(temperature_)) <<std::endl;
    std::cout << "Cantera species gibbs reactions : " <<"-0.6964750220832984 -0.6579377246967584 -0.6579377246967584 -0.29713169583608906 0.360806028860663 -0.2283308080821979 -0.2283308080821979 0.26686810546874423 0.26686810546874423 -0.4296069166145573 0.06880088775389115 0.06880088775389115 5.0086421183142065 -4.780311310232002 -6.1347240570120585 -5.773918028151396 -5.43824903492876 -5.077443006068091 -5.077443006068091 -2.3760497068137587 -2.3760497068137587 -8.767316468512506 -8.83611735626639 -2.404261603418243 -3.0621993281150015 -2.701393299254332 -2.701393299254332"<<std::endl;

    std::cout << "Pressure: " <<pressure_return <<std::endl;
    std::cout << "Temperature Monomial at 300           : " <<temperature_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Energy Monomial at 300           : " <<temperature_energy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Entropy Monomial at 300           : " <<temperature_entropy_monomial(double(300)) <<std::endl;
    std::cout << "Temperature Gibbs Monomial at 300           : " <<temperature_gibbs_monomial(double(300)) <<std::endl;
    
    return 0;
}
            