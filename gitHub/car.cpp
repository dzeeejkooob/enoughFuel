#include <iostream>
#include "car.h"

car::car(std::string brnd, std::string mdl, float capcty, float consum, float pb)
{
	brand = brnd;
	model = mdl;
	capacity = capcty;
	consumption = consum;
	fuel = pb;
}

car::~car()
{
	std::cout << "All clean :)" << std::endl;
}

void car::display()
{
	std::cout << "Let's see what car we have :)" << std::endl;
	std::cout << "Car: " << brand << ' ' << model << " | capacity: ";
	std::cout << capacity << " | consumption: " << consumption << " | fuel in the tank: ";
	std::cout << fuel << std::endl << std::endl;
}

void car::load_into()
{
	std::cout << "Add your car" << std::endl << "Brand: " << std::endl;
	std::cin >> brand;
	std::cout << "Model: ";
	std::cin >> model;
	std::cout << std::endl << "Capacity: ";
	std::cin >> capacity;
	std::cout << std::endl << "Consumption: ";
	std::cin >> consumption;
	std::cout << std::endl << "Fuel left in the tank: ";
	std::cin >> fuel;
}