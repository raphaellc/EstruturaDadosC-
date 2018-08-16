#include "Guerreiro.h"

int main()
{
	Guerreiro* Fred = new Guerreiro();

	setlocale(LC_ALL, "ptb");

	std::cout << "Força :" << Fred->getForça() << std::endl;
	std::cout << "Dano: " << Fred->getDano() << std::endl;
	std::cout << "Vida: " << Fred->getVida() << std::endl;
	std::cout << "Estamina: " << Fred->getEstamina() << std::endl;
	std::cout << "Mana: " << Fred->getMana() << std::endl << std::endl;

	Fred->andar();
	Fred->pular();
	Fred->Atacar();
	Fred->UsarHabilidade();
	Fred->Falar();


	system("pause");
	return 0;
}