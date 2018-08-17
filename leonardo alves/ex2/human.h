#pragma once
class Human
{
public:
	Human();
	~Human();
	bool walk();
    bool run();
protected:
	int strength, 
		vitality, 
		dexterity, 
		wisdom;
};