#pragma once
#include <iostream>
#include <string>
using namespace std;
class Item
{

public:
	Item();
	~Item();

	int id, peso;
	string tipo;

	void setID(int i_d);
	int getID();
	void setPeso(int p_so);
	int getPeso();
	void setTipo(string ti_po);
	string getTipo();
	
};

