#include <iostream>
#include "auto.h"

void does_go(car a)
{
	if (a.fuel >= a.consumption * (a.distance / 100))
	{
		std::cout << "Car have enough fuel to get to the destination :)" << std::endl;
		std::cout << "There will be: " << a.fuel-(a.consumption * (a.distance / 100)) << " liters left in the tank";
	}
	else
	{
		std::cout << "Car does not have enough fuel to get to the destination :(" << std::endl;
		std::cout << "There should be: " << a.consumption * (a.distance / 100) << " liters";
	}
	std::cout << std::endl << "----------------------------------------------------------------------------------" << std::endl << std::endl;
}


int main()
{
	std::cout << "Program that tells you if your car will get to the destination" << std::endl << std::endl;
	car a1;
	a1.load_into();
	a1.display();
	does_go(a1);

	system("PAUSE");
	return 0;
}