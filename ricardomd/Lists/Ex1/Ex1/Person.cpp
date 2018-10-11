#include "Person.h"



Person::Person(std::string name, int age)
{
	this->name = name;
	this->age = age;
}


Person::~Person()
{
}

void Person::setName(std::string value)
{
	this->name = value;
}

void Person::setAge(int value)
{
	this->age = value;
}

std::string Person::getName()
{
	return this->name;
}

int Person::getAge()
{
	return this->age;
}
