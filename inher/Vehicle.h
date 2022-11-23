#pragma once
#include <string>
class Vehicle
{
protected:
	std::string manafacturer;
	int year;
public:
	Vehicle();
	Vehicle(std::string maker, int made);
	void displayInfo();
};

