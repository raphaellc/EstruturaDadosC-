#pragma once
#include "Fighter.h"
#include "Mystic.h"
class Ranger :
	public Fighter, public Mystic
{
public:
	std::string name;

	int strength;
	int dexterity;
	int constitution;
	int wisdom;
	int intelligence;
	int charisma;

	Ranger();
	~Ranger();

	void meleeAttack() override;
	void castMagic() override;
	void getAllStats() override;
};

