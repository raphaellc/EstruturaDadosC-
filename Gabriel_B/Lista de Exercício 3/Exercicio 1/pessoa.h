#pragma once
#include <iostream>
using namespace std;
class pessoa
{
public:
	pessoa();
	~pessoa();

	virtual string nome(string n);
	virtual int idade(int x);

private:
	bool people();

};

