#include "State.h"



State::State()
{
}


State::~State()
{
}

int State::getValue()
{
	return this->price;
}

std::string State::getAdress()
{
	return this->address;
}

void State::setValue(int v)
{
	this->price = v;
}

void State::setAddress(std::string a)
{
	this->address = a;
}

void State::printState()
{
	std::cout << "The price of this State is: " << this->price<< "\n" << "Address: " << this->address << "\n";
}
