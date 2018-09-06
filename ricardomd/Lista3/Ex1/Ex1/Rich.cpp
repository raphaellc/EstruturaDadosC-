#include "Rich.h"



Rich::Rich(std::string n, int a)
{
	this->name = n;
	this->age = a;
}


Rich::~Rich()
{
}

void Rich::setMoney(double value)
{
	this->money = value;
}

double Rich::getMoney()
{
	return this->money;
}

void Rich::goShopping()
{
	std::cout << this->name << " I am Rich! I'll go shopping!\n";
}
