#include "stdafx.h"
#include "atirador.h"
#include "medikit.h"

atirador::atirador()
{
	Vida = 100;
	Kits = 3;
	Armadura = 1;
}


atirador::~atirador()
{
}

int atirador::getVida(int Vid)
{
	if (atirador::Vida <= 50 && Kits >= 1) {
		Kits--;

		return Vida = Vida + 50;
	}
}

int atirador::getArmadura(int Armadur)
{
	if (Armadura >= 1) {
		Armadura--;

		return Vida = Vida + 100;
	}
}
