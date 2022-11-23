#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int doors;
public:
	Car(std::string maker, int made, int doorCount);
	void displayInfo();
};

