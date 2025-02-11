#ifndef PROB_PARM_H
#define PROB_PARM_H

#include <AMReX_REAL.H>
#include <AMReX_GpuQualifiers.H>
#include <AMReX_GpuMemory.H>

struct ProbParmDevice
{
  //Added by ME
  amrex::Real pressure_start_or_circle = 5500000;
  amrex::Real pressure_out_of_circle = 66700;
  amrex::Real temperature_start_or_in_circle = 3500;
  amrex::Real temperature_out_of_circle = 300;
  amrex::Real W = 0.0;

  //Also added by me. These specify the initial species fractions fo each region
  //Using arrays not vectors, because objects must be trivially copyable, or else compilation error
  amrex::Real initial_concentrations_in_circles[NUM_SPECIES] = {0, 0, 0.79207920792, 0, 0, 0, 0.00990099009, 0, 0, 0.19801980198, 0, 0, 0, 0};
  amrex::Real initial_concentrations_not_in_circles[NUM_SPECIES] = {0.2, 0, 0.7, 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0, 0};
 // double initial_mass_fractions_in_circle[14] = {0, 0, 0.89440958, 0, 0, 0, 0.00475946, 0, 0, 0.10083097, 0, 0, 0, 0};
 // double initial_mass_fractions_not_in_circle[14] = {0.01277243, 0, 0.88586543, 0, 0, 0, 0, 0, 0, 0, 0, 0.10136214, 0, 0};
//Note: USING CGS UNITS. THIS IS THE NATIVE UNIT FOR PELEC
  //amrex::Real p_l = 1.0;   // left pressure (erg/cc)
  //amrex::Real rho_l = 1.0; // left density (g/cc)
  amrex::Real rhoe_l = 0.0;
  //amrex::Real T_l = 1.0;
//Added by me:
  amrex::Real p_l = 5500000; //dyne/cm2
  amrex::Real rho_l = 0.0006686662701569075;//g/cm3, from cantera with inital concentrations at T,P
  amrex::Real T_l = 3500; //K
  amrex::Real p_r = 66700; //dyne/cm2
  amrex::Real rho_r = 0.00008441457961868379; //g/cm3, also from cantera
  amrex::Real T_r = 300;

  amrex::Real u_l = 0.0;
//  amrex::Real p_r = 0.1;     // right pressure (erg/cc)
//  amrex::Real rho_r = 0.125; // right density (g/cc)
  amrex::Real rhoe_r = 0.0;
//  amrex::Real T_r = 1.0;
  amrex::Real u_r = 0.0;
  amrex::Real angle = 0.0;
  amrex::Real L = 0.0;
  int left_gas_id = N2_ID;
  int right_gas_id = HE_ID;
};

//Struct does not seem to be used anywhere, commenting out causes errors. Will leave for now with just the default
struct ProbParmHost
{
//  std::string gasL = "N2";
//  std::string gasR = "HE";
  ProbParmHost() = default;
};

#endif
