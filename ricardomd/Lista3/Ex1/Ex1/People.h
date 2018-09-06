#pragma once
#include <string>
#include <iostream>

class People
{
public:
	std::string name;
	int age;

	People();
	People(std::string n, int a);
	~People();

	void justBe();

};

