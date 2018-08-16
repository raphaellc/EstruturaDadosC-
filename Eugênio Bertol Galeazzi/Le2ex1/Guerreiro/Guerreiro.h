#pragma once
#include <string>
#include <iostream>
using namespace std;
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	string getNome();
	int gethp();
	int getStr();
	int getDex();
	int getDef();
	int getPower();
	void walk();
	void attack();
	void jump();
	void defend();
	void roll();

protected:
	int Str, hp, dex, def, power;
	string nome;
};