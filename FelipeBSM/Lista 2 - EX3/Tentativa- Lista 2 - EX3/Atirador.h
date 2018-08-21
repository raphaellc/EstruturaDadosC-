#pragma once
#include "MunicaoPistola.h"
#include "Arma.h"
#include "Pistola.h"
#include "Rifle.h"
#include "Carabina.h"
#include "MunicaoRifle.h"
#include "Armadura.h"
#include "MunicaoCarabina.h";
#include "KitMedico.h"


class Atirador
{
protected:

	Armadura armor;
	Pistola pistola;
	Rifle rifle;
	Carabina carabina;
	MunicaoPistola pistol;
	MunicaoRifle rifleA;
	MunicaoCarabina carabinaA;
	KitMedico kit;

public:
	Atirador();
	~Atirador();

	void usarA();
	void tiro();
	void kitzao();
};
