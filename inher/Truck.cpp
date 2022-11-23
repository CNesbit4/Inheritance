#include "Truck.h"
#include <iostream>

Truck::Truck(std::string maker, int made, int towing)
{
	manafacturer = maker, year = made, towingCapacity = towing;
}

void Truck::displayInfo()
{
	Truck hold(manafacturer, year, towingCapacity);
	Vehicle::displayInfo();

	std::cout << "Towing Capacity: " << towingCapacity << " pounds.\n";
}
