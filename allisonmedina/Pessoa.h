#include <iostream>
#include <string>
#include "Miseravel.h"
#include <conio.h>

#pragma once
class Pessoa: virtual public Miseravel
{
public:
	Pessoa();
	~Pessoa();
	std::string getName();
	int getAge();
	void Pessoa1();
	char key;
private:
	std::string name;
	int age;
	
};

