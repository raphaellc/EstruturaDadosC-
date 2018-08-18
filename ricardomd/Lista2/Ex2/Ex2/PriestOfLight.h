#pragma once
#include "Cleric.h"
class PriestOfLight :
	public Cleric
{
public:
	PriestOfLight();
	~PriestOfLight();

	void blessAllies();
	void clericSpell() override;
	void castMagic() override;
};

