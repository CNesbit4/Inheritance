#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	int towingCapacity;
public:
	Truck(std::string maker, int made, int towing);
	void displayInfo();
};

