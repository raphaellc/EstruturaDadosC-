#pragma once
#include "People.h"
class Pobre :
	public People
{
public:
	Pobre(std::string n, int a);
	~Pobre();

	void work();
};

