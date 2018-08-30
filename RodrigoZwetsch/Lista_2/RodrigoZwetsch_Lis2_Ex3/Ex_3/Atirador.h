#pragma once
#include <iostream>
#include "Kit_Medico.h"
#include "Armadura.h"
#include "Pistola.h"
#include "Carabina.h"
#include "Rifle.h"
#include "Atirar.h"
#include "Muni_C.h"
#include "Muni_P.h"
#include "Muni_R.h"

class Atirador
{
public:
	Atirador();
	~Atirador();

	int vida, armadura, Num_kit_med, arma;

	void Curar();
	void Proteger();
	void Usar_Arma();
	void Trocar_Arma();
	
};

