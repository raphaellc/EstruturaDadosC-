#pragma once
#include<string>

using namespace std;

class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	void setNome(string n);
	string getNome();
	void setIdade(int i);
	int getIdade();
protected:
	string nome;
	int idade;
};

