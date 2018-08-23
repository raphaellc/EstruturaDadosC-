#include <iostream>
#include <string>
#pragma once
//using namespace std;

class Personagem
{
public:
	Personagem();
	~Personagem();

	void atacar();
	void pular();
	void amedrontar();
	void curar();
	void defender();


	protected:
		int forca, stamina, vida, pocoes;
		std::string nome;
};

