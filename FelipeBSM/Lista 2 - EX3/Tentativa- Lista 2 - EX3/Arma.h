#pragma once
#include <string>
#include "Municao.h"
#include "pch.h"
using namespace std;
//using namespace std;
class Arma
{


protected:

	float calibre;
	int danoA;
	std::string modelo;
	int reload;
	string cadencia;

public:
	Arma();
	~Arma();

	void setCalibre(float x);
	int getCalibre();
	void setDanoA(int y);
	int getDanoA();
	void setModelo(std::string mod);
	string getModelo();
	void setRealod(int relo);
	int getReload();
	void setCadencia(string c);
	string getCadencia();
};
