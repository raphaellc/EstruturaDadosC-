#include "Atirador.h"
#include "Kit_Medico.h"

Atirador::Atirador()
{
	vida = 25;
	armadura = 0;
	Num_kit_med = 1;
	arma = 1;
}

Atirador::~Atirador()
{
}

void Atirador::Curar()
{
	if (Num_kit_med > 0)
	{
		Kit_Medico();
		Num_kit_med = Num_kit_med - 1;
		vida = vida + 50;
		std::cout << "Vida: " << vida << std::endl;
	}
	else
	{
		std::cout << "Não tem mais kits medicos." << std::endl;
		std::cout << "Vida: " << vida << std::endl;
	}
}

void Atirador::Proteger()
{
	std::cout << "Colete: " << armadura << std::endl;
	Armadura();
	armadura = armadura + 100;
	std::cout << "Colete: " << armadura << std::endl;
}

void Atirador::Usar_Arma()
{
	if (arma == 1)
	{
		Pistola();
	}
	else if (arma == 2)
	{
		Carabina();
	}
	else if (arma == 3)
	{
		Rifle();
	}
}

void Atirador::Trocar_Arma()
{
	if (arma == 1)
	{
		arma = 2;
	}
	if (arma == 2)
	{
		arma = 3;
	}
	if (arma == 3)
	{
		arma = 1;
	}
}


