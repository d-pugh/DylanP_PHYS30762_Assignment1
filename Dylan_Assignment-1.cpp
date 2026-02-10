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
  //returns true if string contains only integers, false otherwise
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

double transition_energy(int Z, int n_i, int n_j){
  //function to calculate transition energy using formula E_ij = 13.6 * Z^2 * [1/(n_j)^2 - 1/(n_i)^2] eV
    double E = 13.6 * Z*Z * (1.0/(n_j*n_j) - 1.0/(n_i*n_i)); //should be floating point division not integer division
    return E;
}

double eV_to_J(double E_eV){
  //function to convert energy from eV to J using conversion factor 1 eV = 1.60218e-19 J
  double E_J = E_eV * 1.60218e-19;
  return E_J;
}

int main()
{
  //declare and initialise variables
  int n_i{1}; //initial energy level
  int n_j{1}; //final energy level 
  int Z{0}; //atomic number
  double E{0}; //transition energy
  
  //take and validate inputs
  string Z_input; // take input as string
  string n_i_input; // take input as string
  string n_j_input; // take input as string

  cout<<"Atomic number: ";
  cin>>Z_input;
  while(is_integer(Z_input)==false) //check if input is an integer
  {
    cin.ignore();
    cin.clear();
    cout<<"Invalid input"<<endl;
    cout<<"Atomic number: ";
    cin>>Z_input;
  }

  cout<<"Higher energy level (n_i): ";
  cin>>n_i_input;
  while(is_integer(n_i_input)==false) //check if input is an integer
  {
    cin.ignore();
    cin.clear();
    cout<<"Invalid input"<<endl;
    cout<<"Higher energy level (n_i): ";
    cin>>n_i_input;
  }

   cout<<"Higher energy level (n_j): ";
  cin>>n_j_input;
  while(is_integer(n_j_input)==false) //check if input is an integer
  {
    cin.ignore();
    cin.clear();
    cout<<"Invalid input"<<endl;
    cout<<"Higher energy level (n_j): ";
    cin>>n_j_input;
  }

  //convert string inputs to integers
  Z = stoi(Z_input);
  n_i = stoi(n_i_input); 
  n_j = stoi(n_j_input);

  //ask user for energy units
  string units;
  cout<<"Display energy in (J/eV): ";
  cin>>units;
  while(units != "J" && units != "eV") //check if input is either J or eV
  {
    cin.ignore();
    cin.clear();
    cout<<"Invalid input"<<endl;
    cout<<"Preferred energy units (J/eV): ";
    cin>>units;
  }

  //calculate E
  E = transition_energy(Z, n_i, n_j); //should be floating point division not integer division
  if(units=="J"){
    //calculate E in eV and convert to J
    E = eV_to_J(E);
    cout<<"Transition energy = "<<E<<" J"<<endl;
  }
  else{
    cout<<"Transition energy = "<<E<<" eV"<<endl;
  }
  


  //calculate E
  E = transition_energy(Z, n_i, n_j); //should be floating point division not integer division

  //output result

  return 0;
}
