#pragma once
#include <iostream>
#include <string>

class Item
{

private:

	std::string nome;
	int dano;

public:
	Item();
	~Item();

	Item(std::string nome_ , int _dano);

	void setNome(std::string name);
	std::string getNome();



};

