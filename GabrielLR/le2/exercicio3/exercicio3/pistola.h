#pragma once
#include "gun.h"
#include <string>
#include "PistolBullet.h"
using namespace std;
class pistola :
	public gun
{
protected:

	string nome;

public:
	pistola();
	~pistola();

	void imprimirNome(string nome);
	void recarregar() override;
	string getNome();
	void setNome(string _nome);
};

