#pragma once
#include<string>
#include<iostream>

using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	void andar();
	void falar();
	void atacar();
	void defender();

	string nome, reino;
	int forca, vida, magia, stamina;
};

