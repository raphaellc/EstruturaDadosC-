#include "clerigo.h"

clerigo::clerigo()
{
}

clerigo::~clerigo()
{
}

int clerigo::getSpecialBar(int _specialBar)
{
	specialBar = _specialBar;
	return specialBar;
}

void clerigo::curar()
{
	std::cout << "Curar!!!" << endl;
}
