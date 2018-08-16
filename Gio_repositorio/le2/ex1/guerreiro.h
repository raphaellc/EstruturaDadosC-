#pragma once
#include <string>
#include <iostream>

using namespace std;

class guerreiro
{
public:
	guerreiro();
	~guerreiro();

	void andar();
	void disparar();
	void proteger();
	void recarregar();

private:

	string nome;
	string cidade;
	int idade;




};
