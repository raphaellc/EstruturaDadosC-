#include "gun.h"

gun::gun()
{
}

gun::~gun()
{
}

void gun::recarregar()
{
	std::cout << "A arma foi recarregada usando" << std::endl;
}

void gun::atirar(int power)
{
	if (power <= 10) 
	{
		std::cout << "Você atirou. Destruiria uma latinha de coca-cola..." << std::endl;
	}

	else if ((power > 10) && (power < 20)) 
	{
		std::cout << "Que tiro foi esse?!" << std::endl;
	}
}

int gun::getPower()
{
	return power;
}

void gun::setPower(int _power)
{
	power = _power;
}
