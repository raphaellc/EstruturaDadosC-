#pragma once
#include "People.h"
class Rich :
	public People
{
public:
	double money;

	
	Rich(std::string n, int a);
	~Rich();

	void setMoney(double value);
	double getMoney();
	void goShopping();
};

