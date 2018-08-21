#include "pch.h"
#include "KitMedico.h"
#include <iostream>

KitMedico::KitMedico()
{
	vida = 100;
}

KitMedico::~KitMedico()
{
}

void KitMedico::hp()
{
	int opc;
	std::cout << "Você deseja usar um Kit Médico?[1]Sim / [2]Não " << "\n";
	std::cin >> opc;

	if(opc == 1)
	{
	
		std::cout << "Você usou Kit Médico! Vida Atual: " << vida << "\n";
	
	}
	else if(opc == 2)
	{
	
		std::cout << "Você não usou Kit Médico! Vida Atual: " << vida - 50 << "\n";
	
	}
}
