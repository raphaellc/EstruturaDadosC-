#pragma once
#include "mago.h"

class clerigo :
	public mago
{

protected:

	int specialBar;

public:
	clerigo();
	~clerigo();

	int getSpecialBar(int _specialBar);

	void curar();

};

