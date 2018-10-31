#pragma once
#include <string>
class Pessoa
{
public:
	Pessoa();
	Pessoa(int idade, std::string nome);
	~Pessoa();
	int idade;
	std::string s_nome;
	bool operator==(const Pessoa p);
	bool operator<(const Pessoa p) const;
};

