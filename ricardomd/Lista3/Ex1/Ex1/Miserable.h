#pragma once
#include "People.h"
class Miserable :
	public People
{
public:
	Miserable(std::string n, int a);
	~Miserable();

	void beg();
};

