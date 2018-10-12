#pragma once
#include <string>
class Person
{
public:
	Person(std::string name, int age);
	~Person();

	// Setters
	void setName(std::string value);
	void setAge(int value);

	// Getters
	std::string getName();
	int getAge();

private:
	std::string name;
	int age;
};

