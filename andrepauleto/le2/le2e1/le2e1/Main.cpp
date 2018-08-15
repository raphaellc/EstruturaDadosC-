#pragma once;

#include"Guerreiro.h"


int main() {

	Guerreiro* g = new Guerreiro();
	g->andar();
	g->pular();
	g->defender();
	g->esquivar();
	g->atacar();

	system("pause");
	return 0;
}