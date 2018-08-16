#pragma once
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
	void pular();

private:
	string nome, reino;
	int forca, vida, magia, stamina;


};