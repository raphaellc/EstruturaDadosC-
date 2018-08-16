#include<iostream>
#include"Guerreiro.h"

int main()
{
	Guerreiro* guerreiro =  new Guerreiro;
	guerreiro->getAndar();
	guerreiro->getAtacar();
	guerreiro->getDefender();
	guerreiro->getGrita();
	guerreiro->getMachado();
	guerreiro->getMuitaVida();
	guerreiro->getMusculoso();
	guerreiro->getPisar();
	guerreiro->getPular();
	guerreiro->getQuebrar();


	system("pause");
	return 0;
}