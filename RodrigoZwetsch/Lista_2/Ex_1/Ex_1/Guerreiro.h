#pragma once
#include <string.h>
#include <iostream>

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	int força, dano, vida, estamina, mana;

	int getForça();
	int getDano();
	int getVida();
	int getEstamina();
	int getMana();

	void andar();
	void pular();
	void Atacar();
	void UsarHabilidade();
	void Falar();



};