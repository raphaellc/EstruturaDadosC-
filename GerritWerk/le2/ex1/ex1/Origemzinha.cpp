#include <iostream>
#include "Guerreiro.h"
int main() {
	
	setlocale(LC_ALL, "ptb");
	Guerreiro Gue; 

	Gue.falar();
	Gue.getidd();
	Gue.andar();
	Gue.getataque();
	Gue.getdefender();

	


	system("pause");
	return 0;
	
}