// Tentativa- Lista 2 - EX3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

#include "Atirador.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	Atirador* bucha = new Atirador();

	bucha->kitzao();
	bucha->usarA();
	bucha->tiro();
	
	system("pause");
	return 0;
}