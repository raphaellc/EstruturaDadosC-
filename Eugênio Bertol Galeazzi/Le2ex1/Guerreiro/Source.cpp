#pragma once;
#include"Guerreiro.h"
int main() {
	Guerreiro* g = new Guerreiro();
	g->walk();
	g->jump();
	g->defend();
	g->roll();
	g->attack();
	system("pause");
	return 0;
}