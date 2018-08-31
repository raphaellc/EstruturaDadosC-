#pragma once
#include<string>

using namespace std;

class Imovel
{
public:
	Imovel();
	~Imovel();
	virtual void Endereco()=0;
	virtual void Valor()=0;
protected:
	string endereco;
	double valor;
};

