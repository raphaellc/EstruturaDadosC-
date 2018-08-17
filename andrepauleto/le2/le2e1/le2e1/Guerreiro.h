#pragma once
#include <string>
#include <iostream>

using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	string getNome();
	int getForca();
	int getVida();
	int getDestreza();
	int getDefesa();
	void andar();
	void atacar();
	void pular();
	void defender();
	void esquivar();

protected:
	int forca, vida, destreza, defesa;
	string nome;
};

