#pragma once
#include "gun.h"
#include <iostream>
#include "RifleBullet.h"
using namespace std;
class rifle :
	public gun
{
protected:

	string nome;

public:
	rifle();
	~rifle();

	void imprimirNome(string nome);
	void recarregar() override;
	string getNome();
	void setNome(string _nome);

};

