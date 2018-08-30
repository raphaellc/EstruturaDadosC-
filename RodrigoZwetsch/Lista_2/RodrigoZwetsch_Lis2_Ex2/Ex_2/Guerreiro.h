#pragma once

#include <string>
#include <iostream>

using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	int força, dano, vida, estamina, mana, defesa;

	int getForça();
	int getDano();
	int getVida();
	int getEstamina();
	int getMana();
	int getDefesa();

	void andar();
	void pular();
	void Atacar();
	void Defender();
	void Falar();

	void Dados();
};