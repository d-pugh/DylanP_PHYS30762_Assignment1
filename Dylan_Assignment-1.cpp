// Dylan Pugh 11020134
// 04.02.2026
// Assignment 1: Program to calculate transition energy using simple Bohr formula: E_ij = 13.6 * Z^2 * [1 / (n_j)^2 - 1/(n_i)^2] eV
// inputs: Z, n_i, n_j (<n_i), units (J or eV)
// outputs: E_ij

#include<iostream>
#include<iomanip>

int main()
{
  int n_i{1}; //initial energy level
  int n_j{1}; //final energy level 
  int Z{0}; //atomic number

  std::cout<<"Atomic number: ";
  std::cin>>Z;
  std::cout<<"Energy levels: ";
  std::cin>>n_i>>n_j;
  
  std::cout<<"Z = "<<Z<<", n_i = "<<n_i<<", n_j = "<<n_j<<std::endl; // check inputs

  float E = 13.6 * Z*Z * (1/(n_j*n_j) - 1/(n_i*n_i));

  std::cout<<"Transition energy = "<<E<<std::endl;

  return 0;
}
