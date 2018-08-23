#include "Atirador.h"
Atirador::Atirador()
{
	this->arma_atual = new Rifle();
	this->km = new KitMedico();
	this->armas[0] = new Rifle;
	this->armas[1] = new Carabina();
	this->armas[2] = new Pistola();
	this->vida = 0;

}


Atirador::~Atirador()
{
}

std::string Atirador::atira()
{
	//verifica se tem arma e dispara
	if(arma_atual != nullptr)
		return arma_atual->disparaTiro();

}

void Atirador::trocaArma(int nova_arma)
{
	switch (nova_arma)
	{
	case 1: this->arma_atual = armas[(nova_arma-1)]; break;
	case 2: this->arma_atual = armas[(nova_arma - 1)]; break;
	case 3: this->arma_atual = armas[(nova_arma - 1)]; break;
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
