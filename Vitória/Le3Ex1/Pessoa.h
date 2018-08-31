#pragma once
#include<string>

using namespace std;

class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	void setNome(string _nome);
	string getNome();
	void setIdade(int _idade);
	int getIdade();

protected:
	string nome;
	int idade;
};

