#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
	manafacturer = ""; year = 2022;
}

Vehicle::Vehicle(std::string maker, int made)
{
	manafacturer = maker; year = made;
}

void Vehicle::displayInfo()
{
	std::cout << "Manafacturer: " << manafacturer << std::endl;
	std::cout << "Year Built : " << year << std::endl;
}