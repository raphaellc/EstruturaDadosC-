#include "Miserable.h"



Miserable::Miserable(std::string n, int a)
{
	this->name = n;
	this->age = a;
}


Miserable::~Miserable()
{
}

void Miserable::beg()
{
	std::cout << this->name << " Food, please!\n";
}
