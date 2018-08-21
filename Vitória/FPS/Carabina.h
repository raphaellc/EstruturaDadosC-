#pragma once
#include<iostream>
#include"Carabina_muni.h"
using namespace std;

class Carabina
{
public:
	Carabina();
	~Carabina();
	void atirar();
	void recarregar();

	int capacidade;
	float potencia;
	
};

