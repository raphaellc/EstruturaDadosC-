#include <iostream>
#include "atirador.h"



int main () 
{
	setlocale(LC_ALL, "ptb");
	atirador* Papaco = new atirador;
	
	Papaco->usarKit();
	Papaco->disparar();
	Papaco->vestir();



	system("pause");
	return 0;
}