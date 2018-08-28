#include "Miseravel.h"
#include<iostream>

using namespace std;

Miseravel::Miseravel()
{
	nome = "Uasausqui";
}


Miseravel::~Miseravel()
{
}

void Miseravel::mendiga()
{
	cout <<getNome()<<" mendigou"<< endl;
}
