#include "pch.h"
#include "Arma.h"


Arma::Arma()
{
}


Arma::~Arma()
{
}

void Arma::setCalibre(float x)
{
	calibre = x;
}

int Arma::getCalibre()
{
	return calibre;
}

void Arma::setDanoA(int y)
{
	danoA = y;
}

int Arma::getDanoA()
{
	return danoA;
}

void Arma::setModelo(std::string mod)
{
	modelo = mod;
}

string Arma::getModelo()
{
	return modelo;
}

void Arma::setRealod(int relo)
{
	reload = relo;
}

int Arma::getReload()
{
	return reload;
}

void Arma::setCadencia(string c)
{
	cadencia = c;
}

string Arma::getCadencia()
{
	return cadencia;
}
