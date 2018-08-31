#pragma once
#include "VIP.h"
class Inferior :
	public VIP
{
public:
	Inferior();
	~Inferior();

	void getLocation()
	{
		std::cout << "Location A56...\n";
	}
};

