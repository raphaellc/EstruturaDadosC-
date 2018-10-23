#include "Person.h"


Person::Person(std::string strValue, int intValue)
{
	this->name = strValue;
	this->age = intValue;
}


Person::~Person()
{
}

std::string Person::getName()
{
	return this->name;
}

int Person::getAge()
{
	return this->age;
}

void Person::setName(std::string value)
{
	this->name = value;
}

void Person::setAge(int value)
{
	this->age = value;
}
