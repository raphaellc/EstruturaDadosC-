#include <iostream>
#include "stdafx.h"
#include "atirador.h"
using namespace std;

int main()
{
	atirador PelÚverton;
	cout << "Atributos do personagem:\n";
	PelÚverton.getArmadura(2);
	PelÚverton.getVida(2);
	PelÚverton.getMC(15);
	PelÚverton.getMP(25);
	PelÚverton.getMR(30);
	PelÚverton.equipPistola('S');
	PelÚverton.equipCarabina('S');
	PelÚverton.equipRifle('N');
	system("pause");
    return 0;
}

