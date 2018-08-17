#pragma once
using namespace std;
#include <string>
#include <iostream>
class Guerreiro


	

{
	
public:
	Guerreiro();
	~Guerreiro();
	bool andar();
	string falar();
	int getataque();
	int getdefender();
	int getidd();

protected:
	int forca, escudo, idade;
	string nome, mestre;


};

