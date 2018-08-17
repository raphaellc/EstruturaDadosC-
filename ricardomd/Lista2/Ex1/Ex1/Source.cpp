#include <iostream>
#include "Warrior.h"
#include <string>

int main() {
	bool gameOver = false;
	int playerChoice;

	Warrior *warrior = new Warrior();
	
	std::cout << "Name: " << warrior->getName() << " \n";
	std::cout << "Strength: " << warrior->getStrength() << " \n";
	std::cout << "Dexterity: " << warrior->getDexterity() << " \n";
	std::cout << "Constitution: " << warrior->getConstitution() << " \n";
	std::cout << "Intelligence: " << warrior->getIntelligence() << " \n";
	std::cout << "Wisdom: " << warrior->getWisdom() << " \n";
	std::cout << "Charisma: " << warrior->getCharisma() << " \n";

	std::cout << "Press your acction...\n1. Walk\n2. Jump\n3. Rest\n4. Attack\n5. Defend\n6. Heroic Strike\n7. Exit Game\n";

	while (!gameOver)
	{
		std::cin >> playerChoice;

		switch (playerChoice)
		{
		case 1:
			warrior->walk();
			break;
		case 2:
			warrior->jump();
			break;
		case 3:
			warrior->rest();
			break;
		case 4:
			warrior->meleeAttack();
			break;
		case 5:
			warrior->defend();
			break;
		case 6:
			warrior->heroicStrike();
			break;
		case 7:
			gameOver = true;
			break;
		}
	}

	system("pause");
	return 0;
}
