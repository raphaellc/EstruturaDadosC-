#pragma once
#include "Cleric.h"
class Paladin :
	public Cleric
{
public:
	Paladin();
	~Paladin();

	void clericSpell() override;
	void castMagic() override;
	void meleeAttack() override;

};

