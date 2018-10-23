#pragma once
#include <string>
class Person
{
public:
	Person(std::string strValue, int intValue);
	~Person();

	// Getters
	std::string getName();
	int getAge();

	// Setters
	void setName(std::string value);
	void setAge(int value);

private:
	std::string name;
	int age;
};

