#pragma once
#include "Armas.h";
#include "KitMedico.h";
#include "Armadura.h";
#include "Carabina.h";
#include "Pistola.h";
#include "Rifle.h";
#include <vector>;
using namespace std;
class Atirador
{
private:
	Armas* armas = new Armas[3];
	Armas* arma_atual = 0;
	KitMedico* km = 0;
	Armadura* armad = 0;
	int vida;
public:
	Atirador();
	~Atirador();
	void atira();
	void trocaArma(int nova_arma);
	void vesteAramdura(Armadura* arm);
	void cura();

};

