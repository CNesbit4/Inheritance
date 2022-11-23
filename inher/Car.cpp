#include "Car.h"
#include <iostream>

Car::Car(std::string maker, int made, int doorCount)
{
	manafacturer = maker; year = made; doors = doorCount;
}

void Car::displayInfo()
{
	Car hold(manafacturer, year, doors);
	Vehicle::displayInfo();

	std::cout << "Doors: " << doors << std::endl;
}