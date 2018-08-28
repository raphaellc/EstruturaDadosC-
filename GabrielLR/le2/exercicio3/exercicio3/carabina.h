#pragma once
#include "gun.h"
#include <iostream>
#include "CarabBullet.h"
using namespace std;
class carabina :
	public gun
{
protected:

	string nome;

public:
	carabina();
	~carabina();

	void imprimirNome(string nome);
	string getNome();
	void setNome(string _nome);
	void recarregar() override;
};

