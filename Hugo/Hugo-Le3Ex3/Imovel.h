#include<string>
#pragma once

using namespace std;

class Imovel
{
protected:
	string endereco;
	int valor;
public:
	Imovel();
	~Imovel();
	void setEndereco(string e);
	string getEndereco();
	void setValor(int v);
	int getValor();
	virtual void imprimeValor();
};

