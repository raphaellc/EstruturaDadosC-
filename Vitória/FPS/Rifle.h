#pragma once
#include<iostream>
#include"Rifle_Muni.h"
using namespace std;

class Rifle
{
public:
	Rifle();
	~Rifle();
	void atirar();
	void recarregar();

	int capacidade;
	float potencia;
};

