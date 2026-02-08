// Dylan Pugh 11020134
// 08.02.2026
// Assignment 1: Program to calculate transition energy using simple Bohr formula: E_ij = 13.6 * Z^2 * [1/(n_j)^2 - 1/(n_i)^2] eV
// inputs: Z, n_i, n_j (n_j<n_i), units (J or eV)
// outputs: E_ij
// Task:  Ask the user to enter the atomic number, initial and final quantum numbers, and whether to 
//        display the calculated energy of the transition in Joules or electron volts.
//        After the calculated value is shown, ask whether to repeat (“y/n”) and stop on “n”
//        Check at each stage for incorrect inputs (either in format or violating some physical conditions)

#include<iostream>
#include<iomanip>

int main()
{
  //declare and initialise variables
  int n_i{1}; //initial energy level
  int n_j{1}; //final energy level 
  int Z{0}; //atomic number

  //take inputs
  std::cout<<"Atomic number: ";
  std::cin>>Z;
  std::cout<<"Energy levels: ";
  std::cin>>n_i>>n_j;
  std::cout<<"Z = "<<Z<<", n_i = "<<n_i<<", n_j = "<<n_j<<std::endl; // check inputs


  //calculate E
  double E = 13.6 * Z*Z * (1.0/(n_j*n_j) - 1.0/(n_i*n_i)); //should be floating point division not integer division

  //output result
  std::cout<<"Transition energy = "<<E<<" eV"<<std::endl;

  return 0;
}
