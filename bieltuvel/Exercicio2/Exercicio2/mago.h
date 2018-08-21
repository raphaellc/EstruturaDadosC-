#pragma once
#include <iostream>
#include <string>
using namespace std;

class mago
{

protected:
	//atributos
	
	string nome, equip;
	int lvl, magia, def;


public:
	//construtor e destrutor
	mago();
	~mago();

	//métodos get
	string getNome(string _nome);
	int getMagia(int _magia);
	int getLvl(int _lvl);
	int getDef(int _def);
	string getEquip(string _equip);
	
	//comportamentos/ações do Mago
	void persuadir();
	void ataque();
	void meditar();
	void conjurar();
	void levitar();

};