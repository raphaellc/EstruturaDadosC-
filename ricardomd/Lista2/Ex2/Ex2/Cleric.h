#pragma once
#include "Fighter.h"
#include "Mystic.h"
class Cleric :
	public Fighter, Mystic
{
public:
	std::string name;
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;

	Cleric();
	~Cleric();

	virtual void clericSpell();
	virtual void getAllStats() override;
	void castMagic() override;
};

