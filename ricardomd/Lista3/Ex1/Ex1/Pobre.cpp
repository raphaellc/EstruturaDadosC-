#include "Pobre.h"



Pobre::Pobre(std::string n, int a)
{
	this->name = n;
	this->age = a;
}


Pobre::~Pobre()
{
}

void Pobre::work()
{
	std::cout << this->name << " More work?\n";
}
