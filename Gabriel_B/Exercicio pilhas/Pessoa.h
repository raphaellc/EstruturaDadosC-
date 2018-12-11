#pragma once
#include <string>
#include <iostream>
class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	std::string s_nome;
	int i_idade;
	//DECLARACAO DE SOBRECARGA DE OPERADORES
	bool operator == (Pessoa p);
	bool operator<(Pessoa p);
};

