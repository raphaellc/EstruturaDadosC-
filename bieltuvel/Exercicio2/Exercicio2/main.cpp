#include <iostream>
#include <string>
#include "guerreiro.h"

int forcaG = 43;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	guerreiro* Thetoko = new guerreiro();
	//Imprimindo no console as informações do Guerreiro Thetoko
	std::cout << "Nome do Guerreiro: " << Thetoko->getNome("Thetoko") << endl;
	std::cout << "Força do Guerreiro: " << Thetoko->getForca(forcaG) << endl;
	std::cout << "Equipamento: " << Thetoko->getEquip("Espada de Duas Mãos") << endl;
	std::cout << "Level: " << Thetoko->getLvl(27) << endl;
	std::cout << "Defesa: " << Thetoko->getDef(43) << endl;

	//Colocando em prática as ações
	Thetoko->provocar();

	//Se a força for maior que 40 ele pode dar uma investida
	if (forcaG >= 40)
	{
		Thetoko->investida();
	}
	//Se não, não.
	else if (forcaG < 40)
	{
		std::cout << "Você não tem força para dar uma investida!" << endl;
	}

	Thetoko->persuadir();
	Thetoko->deitar();
	Thetoko->atkEspecial();

	system("pause");
	return 0;
}
