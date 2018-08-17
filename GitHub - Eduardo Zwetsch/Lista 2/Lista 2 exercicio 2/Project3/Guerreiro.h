#pragma once
#include <string>
#include <iostream>
using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	string nome;
	string arma = "Machado";
	int vida = 100;
	int armadura = 30;
	int dano = 15;

	void andar();
	void pular();
	void esconder();
	void atacar(int da);
	void defender();
};