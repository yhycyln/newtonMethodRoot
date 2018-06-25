/******************************************
* YAHYA CEYLANI
* 25.06.2018
* This program finda square root of a number with fifth degree sensibility
*******************************************/


#include <iostream>
#include <vector>


int main(){
	std::vector<double> estimatedValues;
	int number = 9;

	// set first value as 1 (for X0, Xn will be 1)
	estimatedValues.push_back(double(1));

	for (unsigned int i = 0; i < 5; i++){
		// implementation of the given formula
		estimatedValues.push_back((estimatedValues.back() + (double(number) / estimatedValues.back())) / double(2));
	} // end for

	// print all Xn values, the last one will be the answer
	for (unsigned int i = 0; i < estimatedValues.size(); i++)
		std::cout << "X" << i << "= " << estimatedValues[i] << std::endl;

	return 0;

}