#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personagem
{
public:
	Personagem();
	~Personagem();

	void pular();
	bool andar();
	void falar();

protected:
	string nome;
	int idade;
	

};

