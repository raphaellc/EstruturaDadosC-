#pragma once
#include <iostream>
#include <string>

class Item
{
public:
	Item();
	~Item();
	int id, peso;
	std::string tipo;

	int getId();
	void setId(int _id);

	int getPeso();
	void setPeso(int _peso);

	std::string getTipo();
	void setTipo(std::string _tipo);
};
