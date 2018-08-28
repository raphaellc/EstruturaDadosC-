#pragma once
#include <iostream>
#include "pistola.h"
#include "rifle.h"
#include "carabina.h"
#include "kitMedico.h"
#include "gun.h"
#include "armadura.h"
class atirador
{
protected:

	rifle rifle;
	carabina carabina;
	pistola _9mm;
	kitMedico hp;
	int vida;
	armadura shield;

public:
	atirador();
	~atirador();

	void usarKit();
	void disparar();
	void vestir();
};
