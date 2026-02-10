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
#include<string>
#include<sstream>

using namespace std;

bool is_integer(string input){
  //function to check if a string containts an integer value
  bool int_only{true};

  if(input.empty()) //if no input, ask again
     {      
      return false; 
     }


  for(int i=0; i<=input.length()-1; i++){ //checks each element of the string is an integer
      if(isdigit(input[i])==0){  //isdigit returns 0 for non-digit values
        int_only = false;
      }
    }
  return int_only;

}

int main()
{
  //declare and initialise variables
  int n_i{1}; //initial energy level
  int n_j{1}; //final energy level 
  int Z{0}; //atomic number
  
  //take and validate inputs
  string Z_input; // take input as string

  bool inputs_valid{false}; //request inputs until this is true

  while(inputs_valid == false)
  {
    cout<<"Atomic number: ";
    cin>>Z_input;
  
    if(is_integer(Z_input)==true)
    {
      inputs_valid=true;
      cout<<"Valid input"<<endl;
    }
    else
    {
      cin.ignore();
      cin.clear();
      cout<<"Invalid input"<<endl;
    } 

  }



//  cout<<"Energy levels: ";
  //cin>>n_i>>n_j;
  //while(cin.fail())


// cout<<"Z = "<<Z<<", n_i = "<<n_i<<", n_j = "<<n_j<<endl; // check inputs

  //calculate E
  //double E = 13.6 * Z*Z * (1.0/(n_j*n_j) - 1.0/(n_i*n_i)); //should be floating point division not integer division

  //output result
 // cout<<"Transition energy = "<<E<<" eV"<<endl;

  return 0;
}
