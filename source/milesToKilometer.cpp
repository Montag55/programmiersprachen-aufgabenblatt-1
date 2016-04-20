#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "catch.hpp"


double mileToKilometer(double a){
	double b = a*1.609344;
	return b;	
}

int main(){
	double a;
	std::cout << "Bitte geben Sie die umzurechnende Meilenzahl ein: ";
	std::cin >> a;
	std::cout << a << " umgerechnet zu Meilen ist: " << mileToKilometer(a) << std::endl;

	return 0;
}