#pragma once
#include <iostream>
#include "Barbarian.h"
#include "Bard.h"
#include "Cleric.h"
#include "Mage.h"
#include "Paladin.h"
#include "PriestOfDarkness.h"
#include "PriestOfLight.h"
#include "Ranger.h"
#include "Thief.h"
#include <string>

int main() {
	bool gameOver = false;
	int playerChoice;
	Barbarian *barbarian = new Barbarian();
	Bard *bard = new Bard();
	Cleric *cleric = new Cleric();
	Mage *mage = new Mage();
	Paladin *paladin = new Paladin();
	PriestOfDarkness *priest = new PriestOfDarkness();
	PriestOfLight *priestLight = new PriestOfLight();
	Ranger *ranger = new Ranger();
	Thief *thief = new Thief();
	Warrior *warrior = new Warrior();

	while (!gameOver)
	{
		std::cout << "\n\n\nSelect the character class to demonstrate it's habilities!\n";
		std::cout << "1.Babarian\n2.Bard\n3.Cleric\n4.Mage\n5.Paladin\n6.Priest of Darkness\n7.Priest of Light\n8. Ranger\n9.Thief\n10.Warrior\n11.Exit Demonstration\n";
		std::cin >> playerChoice;

		switch (playerChoice)
		{
		case 1:
			barbarian->getAllStats();
			barbarian->meleeAttack();
			barbarian->warriorSkill();
			break;
		case 2:
			bard->getAllStats();
			bard->castMagic();
			bard->meleeAttack();
			break;
		case 3:
			cleric->getAllStats();
			cleric->castMagic();
			cleric->clericSpell();
			cleric->meleeAttack();
			break;
		case 4:
			mage->getAllStats();
			mage->castMagic();
			mage->castTrilementalMagic();
			break;
		case 5:
			paladin->getAllStats();
			paladin->castMagic();
			paladin->meleeAttack();
			paladin->clericSpell();
			break;
		case 6:
			priest->getAllStats();
			priest->castMagic();
			priest->clericSpell();
			priest->curseEnemies();
			break;
		case 7:
			priestLight->getAllStats();
			priestLight->castMagic();
			priestLight->clericSpell();
			break;
		case 8:
			ranger->getAllStats();
			ranger->meleeAttack();
			ranger->castMagic();
			break;
		case 9:
			thief->getAllStats();
			thief->stealth();
			thief->backStab();
			thief->meleeAttack();
			break;
		case 10:
			warrior->getAllStats();
			warrior->meleeAttack();
			warrior->warriorSkill();
			break;
		case 11:
			gameOver = true;
			break;
		}
	}

	system("pause");
	return 0;
}