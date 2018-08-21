#pragma once
#include"Pistola.h"
#include"Carabina.h"
#include"Rifle.h"
#include"Armadura.h"
#include"MedKit.h"
#include<iostream>

using namespace std;

class Atirador
{
public:
	Atirador();
	~Atirador();
	void atirar();
	void medkit();
	void escudo();
	void trocar_arma();
protected:
	Pistola pistol;
	Carabina carabina;
	Rifle rifle;
};

