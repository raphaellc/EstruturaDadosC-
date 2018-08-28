#include "Pobre.h"
#include<iostream>

using namespace std;

Pobre::Pobre()
{
	nome = "Suelen";
}


Pobre::~Pobre()
{
}

void Pobre::traballha()
{
	cout << getNome() << " trablhou" << endl;
}
