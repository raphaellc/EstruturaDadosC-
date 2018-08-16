#pragma once
#include <iostream>
#include <string>
using namespace std;

class guerreiro
{

protected:
	//atributos
   string nome;
   int forca, lvl, def;
   string equip;

public:
	//construtor e destrutor
	guerreiro();
	~guerreiro();

	//comportamentos/ações do Guerreiro
	void provocar();
	void investida();
	void persuadir();
	void deitar();
	void atkEspecial();

	//métodos get
	string getNome(string _nome);
	int getForca(int _forca);
	int getLvl(int _lvl);
	int getDef(int _def);
	string getEquip(string _equip);
	
};

