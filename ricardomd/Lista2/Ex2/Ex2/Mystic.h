#pragma once
#include "Character.h"
class Mystic :
	public Character
{
public:
	bool isConcentrate;

	Mystic();
	~Mystic();

	virtual void castMagic();
	void concentrate();
	bool getConcentrate();
};

