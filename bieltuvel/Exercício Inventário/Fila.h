//Classe Fila, com os métodos necessários herdando de Lista<Pessoa>
#pragma once
#include "Lista.h"
class Fila :
	public Lista<Pessoa>
{
public:
	Fila();
	~Fila();

	void enfileirarNoFinal(Pessoa * p);
	void desenfileirar();

};

