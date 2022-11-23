#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	string str;
	int num;
	int num2;

	cout << "Enter the manafacturer: "; getline(cin, str);
	cout << "Enter the model year: "; cin >> num;

	Vehicle userVehicle(str, num);
	userVehicle.displayInfo();


	cin.ignore();
	cout << "Enter a car's manafacturer: "; getline(cin, str);
	cout << "Enter the model year of the car: "; cin >> num;
	cout << "Enter the amount of doors: "; cin >> num2;

	Car userCar(str, num, num2);
	userCar.displayInfo();

	cin.ignore();
	cout << "Enter a truck's manafacturer: "; getline(cin, str);
	cout << "Enter the model year of the truck: "; cin >> num;
	cout << "Enter the towing capacity in pounds: "; cin >> num2;

	Truck userTruck(str, num, num2);
	userTruck.displayInfo();
}