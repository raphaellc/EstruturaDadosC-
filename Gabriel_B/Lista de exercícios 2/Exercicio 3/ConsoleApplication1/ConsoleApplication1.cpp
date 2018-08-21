#include <iostream>
#include "stdafx.h"
#include "atirador.h"
using namespace std;

int main()
{
	atirador Peléverton;
	cout << "Atributos do personagem:\n";
	Peléverton.getArmadura(2);
	Peléverton.getVida(2);
	Peléverton.getMC(15);
	Peléverton.getMP(25);
	Peléverton.getMR(30);
	Peléverton.equipPistola('S');
	Peléverton.equipCarabina('S');
	Peléverton.equipRifle('N');
	system("pause");
    return 0;
}

