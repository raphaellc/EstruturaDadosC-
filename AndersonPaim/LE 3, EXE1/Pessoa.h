#include <iostream>
#include <string>

using namespace std;

#pragma once


class Pessoa
{
public:
	Pessoa();
	~Pessoa();

	virtual string nome();
	virtual int idade();

	string nome_;
	int idade_;
	int D, M;

};

