#pragma once
#include <iostream>
#include <string>
using namespace std;

class Imovel
{protected:

	int preco;
	std::string local;

public:

	Imovel();
	~Imovel();

	
	void setPreco(int p);
	int getPreco();

	void setLocal(std::string lo);
	string getLocal();

	void imprimiNaTela();

};

