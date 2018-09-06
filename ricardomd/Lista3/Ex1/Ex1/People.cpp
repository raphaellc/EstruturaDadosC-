#include "People.h"



People::People()
{
}

People::People(std::string n, int a)
{
	this->name = n;
	this->age = a;
}


People::~People()
{
}

void People::justBe()
{
	std::cout << "Hi! I am a person!\n";
}
