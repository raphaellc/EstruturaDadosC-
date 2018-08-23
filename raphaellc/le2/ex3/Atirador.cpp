#include "Atirador.h"
Atirador::Atirador()
{
	this->arma_atual = new Rifle();
	this->km = new KitMedico();
	this->armas[0] = *(Armas*) new Rifle();
	this->armas[1] = *(Armas*) new Carabina();
	this->armas[2] = *(Armas*) new Pistola();
}


Atirador::~Atirador()
{
}

void Atirador::atira()
{
	//verifica se tem arma e dispara
	if(arma_atual != 0)
		arma_atual->disparaTiro();

}

void Atirador::trocaArma(int nova_arma)
{
	switch (nova_arma)
	{
	case 1: this->arma_atual = &armas[(nova_arma-1)]; break;
	case 2: this->arma_atual = &armas[(nova_arma - 1)]; break;
	case 3: this->arma_atual = &armas[(nova_arma - 1)]; break;
	default:
		break;
	}
}

void Atirador::vesteAramdura(Armadura* arm)
{
	this->armad = arm;
}

void Atirador::cura()
{
	this->vida = this->km->usa(this->vida);
}
