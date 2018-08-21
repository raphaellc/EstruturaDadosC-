#pragma once
#include<iostream>
#include"Pistola_muni.h"
using namespace std;

class Pistola
{
public:
	Pistola();
	~Pistola();
	int capacidade;
	float potencia;

	void recarregar();
	void atirar();
};

