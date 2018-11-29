#pragma once
#include <iostream>
#include <string>


class Item
{
public:
	Item();
	~Item();
	//Construtor com parametro
	Item(std::string _nome2, std::string _desc, int _peso);
	//Métodos Get e Set
	std::string getNome();
	void setNome(std::string _nome);
	//Info
	int peso;
	std::string descricao;

private:
	//Info
	std::string nome;
	
};

