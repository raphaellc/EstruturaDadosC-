#pragma once
#include<iostream>
#include<string>
#include"Miseravel.h"
#include"Pobre.h"
#include"Rico.h"

using namespace std;

int main()
{
	Miseravel* Robson = new Miseravel;
	Pobre* Jussara = new Pobre;
	Rico* Patinhas = new Rico;
	
	Robson->setNome("Robson");
	Robson->mendiga();
	Jussara->setNome("Jussara");
	Jussara->traballha();
	Patinhas->setNome("Patinhas");
	Patinhas->fazCompras();

	system("pause");
	return 0;
}