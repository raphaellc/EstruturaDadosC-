#include "Guerreiro.h"

Guerreiro::Guerreiro()
{
    this->arma = 0;
	this->escola_luta = 0;
    this->estilo_luta = 0;
	this->forca = 0;
    this->vitalidade = 0;
    this->dextreza = 0;
    this->sabedoria = 0;
}


Guerreiro::~Guerreiro()
{
}

int Guerreiro::getArma()
{
	return arma;
}

int Guerreiro::getEstLuta()
{
	return estilo_luta;
}

int Guerreiro::getEscLuta()
{
	return escola_luta;
}

int Guerreiro::getForca()
{
	return forca;
}

int Guerreiro::getVitalidade()
{
	return vitalidade;
}

int Guerreiro::getDextreza()
{
	return dextreza;
}

int Guerreiro::getSabedoria()
{
	return sabedoria;
}

int Guerreiro::andar()
{
	return true;
}

int Guerreiro::correr()
{
	return true;
}

int Guerreiro::ataque(arma, estilo, escola, forc, dex)
{
    float atk = arma * estilo * escola * forc * dex;
	return atk;
}

int Guerreiro::defesa(arma, estilo, escola, vit, dex)
{ 
    float def = arma * estilo * escola * vit * dex;
  	return def;
}