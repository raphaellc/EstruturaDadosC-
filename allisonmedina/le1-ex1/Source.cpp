// Source.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Guerreiro.h"

int main()
{
	
	Guerreiro warrior;	

	do {
		

		warrior.getName();
		warrior.getHp();
		warrior.getStrength();
		warrior.talk();
		warrior.walk();
		warrior.attack();
		warrior.block();
	  				
		system("pause");
		system("cls");
								
	} while (EXIT_FAILURE != 's');	
		
	return 0;

}

