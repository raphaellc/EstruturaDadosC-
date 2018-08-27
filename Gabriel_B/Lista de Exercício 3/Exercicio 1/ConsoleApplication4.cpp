// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "miseravel.h"
#include "pobre.h"
#include "rica.h"

int main()
{
	miseravel greg;
	greg.nome("grueguito");
	greg.idade(24);
	greg.mendiga();
	
	pobre inter;
	inter.nome("serie b");
	inter.idade(2);
	inter.trabalha();
	
	rica gremio;
	gremio.nome("geromel");
	gremio.idade(120);
	gremio.dinheiro();
	gremio.faz_compras();


	system("pause");
    return 0;
}

