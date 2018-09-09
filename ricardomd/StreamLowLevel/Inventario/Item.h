#pragma once
#include <iostream>
class Item
{
public:
	Item();
	~Item();
	int id, peso, tipo;

	int getId();
	int getPeso();
	int getTipo();
	void setId(int i);
	void setPeso(int p);
	void setTipo(int t);
	
};

