#pragma once
#include<iostream>
#include<string>
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	
	void getGrita();
	bool getMachado();
	void getMusculoso();
	void getMuitaVida();
	void getPisar();



	void getAtacar();
	void getAndar();
	void getPular();
	void getDefender();
	void getQuebrar();



protected:
	std::string  andar, pular, defender, quebrar;
	
};

