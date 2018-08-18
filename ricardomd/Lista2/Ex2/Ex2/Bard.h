#pragma once
#include "Fighter.h"
#include "Mystic.h"
class Bard :
	public Fighter, public Mystic
{
public:
	std::string name;

	int strength;
	int dexterity;
	int constituion;
	int intelligence;
	int wisdom;
	int charisma;

	Bard();
	~Bard();

	void castMagic() override;
	void getAllStats() override;
};

