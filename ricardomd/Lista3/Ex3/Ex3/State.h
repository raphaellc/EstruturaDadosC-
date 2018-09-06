#pragma once
#include <iostream>
#include <string>

class State
{
public:
	std::string address;
	int price;

	State();
	~State();

	int getValue();
	std::string getAdress();
	void setValue(int v);
	void setAddress(std::string a);
	void printState();
};

