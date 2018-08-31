#include <iostream>
#include <string>

#pragma once

class Pessoa
{
public:
	Pessoa();
	~Pessoa();

protected:
	std::string nome;
	int idade;
};

