#include "pch.h"
#include "Armadura.h"

#include <iostream>

Armadura::Armadura()
{

}


Armadura::~Armadura()
{
}

void Armadura::protection()
{
	int op;
	std::cout << "Deseja usar seu escudo balístico?[1].Sim / [2].Não " << "\n";
	std::cin >> op;
	if(op == 1)
	{
		defesa = 5;
		std::cout << "Defesa: " << defesa << " Pontos acrecentados!" << "\n";
	   
	}
	else if(op == 2)
	{
		std::cout << "Você não esta usando escudo balístico." << "\n";
	    
	}
	
}