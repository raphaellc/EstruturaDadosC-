#include "MedicKit.h"



MedicKit::MedicKit()
{
	this->healing = 7;
}


MedicKit::~MedicKit()
{
}

int MedicKit::getHealing()
{
	return this->healing;
}

void MedicKit::heal()
{
	std::cout << "The medkit heals the character for: " << this->getHealing() << " points of damage.\n";
}
