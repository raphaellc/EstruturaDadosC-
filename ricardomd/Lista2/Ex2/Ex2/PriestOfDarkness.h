#pragma once
#include "Cleric.h"
class PriestOfDarkness :
	public Cleric
{
public:
	PriestOfDarkness();
	~PriestOfDarkness();

	void curseEnemies();
	void clericSpell() override;
	void castMagic() override;
};

