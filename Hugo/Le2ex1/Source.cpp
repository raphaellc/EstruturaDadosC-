#pragma once;
#include<string>
#include<iostream>
#include"Guerreiro.h"
using namespace std;
int main() {
	Guerreiro Alpargatto;
	Alpargatto.~Guerreiro();
	Alpargatto.andar();
	Alpargatto.atacar();
	Alpargatto.defender();
	Alpargatto.falar();
	Alpargatto.pular();

	system("pause");
	return 0;
}