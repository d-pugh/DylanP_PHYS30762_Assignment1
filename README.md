Dylan Pugh 11020134
Assignment 1: Calculate photon energies of electron transition in Bohr atom model.

1. Allowed user to input Z, n_i and n_j, and performed energy calculation E = 13.6 * Z^2 * [1/(n_j)^2 - 1/(n_i)^2] eV
2. Added input validation that rejects non-integers by taking input as a string and checking each element before converting to integer variable.
3. Moved energy calculation into a function and added function to convert from eV to Joules, allowing user to pick desired units.
4. Put main code into a while loop to allow user to repeat the calculation.
5. Added restriction to enforce n_i>n_j, in order to ensure non-negative photon energies.
6. Added extra option to calculate wavelength corresponding to the transition energy.
