#include <iostream>

class car
{
	std::string brand;
	std::string model;
	float capacity;
	float consumption;
	float fuel;
	float distance;
public:
	friend void does_go(car a);
	car(std::string brnd="brand", std::string mdl="model", float capcty=1.9, float consum=5.9, float pb=30, float dis=100);
	~car();
	void display();
	void load_into();
};
