#pragma once
#include <string>
#include <iostream>


using namespace std;

class Classe
{
public:
	Classe();
	~Classe();
	string getNome();
	int getForca();
	int getVida();
	int getDestreza();
	int getDefesa();
	int getInteligencia();
	void getStatus();
	void andar();
	virtual void atacar();
	void pular();
	void defender();
	void esquivar();

protected:
	int forca, vida, destreza, defesa, inteligencia;
	string nome;
};
