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
	Armas* armas[3];
	Armas* arma_atual;
	KitMedico* km;
	Armadura* armad;
	int vida;
public:
	Atirador();
	~Atirador();
	std::string atira();
	void trocaArma(int nova_arma);
	void vesteAramdura(Armadura* arm);
	void cura();

};

