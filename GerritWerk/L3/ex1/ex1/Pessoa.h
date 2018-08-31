#pragma once
#include <iostream>
#include<string>
using namespace std;
class Pessoa
	
{
public:
	Pessoa();
	~Pessoa();
	virtual string nome();
	virtual int idade();
	
protected:
	string nomeZinho;
	int idd;


};

