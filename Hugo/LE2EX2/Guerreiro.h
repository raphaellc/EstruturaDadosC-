#pragma once
#include <string>

using namespace std;

class Guerreiro
{
public:
	string nome;
	int vida;
	int stamina;
	int forca;
	int velocidade;
	int inteligencia;
	int magia;
	int carisma;
	Guerreiro();
	~Guerreiro();
	void andar();
	void atacar();
	void defender();
	void falar();
	void pular();

};

