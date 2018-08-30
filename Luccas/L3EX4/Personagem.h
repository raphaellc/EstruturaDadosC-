#pragma once
#include <string>

using namespace std;

class Personagem
{
public:
	Personagem();
	~Personagem();
	void correr();
	void pular();
	void andar();
	void setNome(string n);
	string getNome();

protected:
	int vida;
	int stamina;
	int mana;
	int escudo;
	int agilidade;
	string nome;
	
};

