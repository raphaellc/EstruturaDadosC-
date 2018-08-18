#pragma once
#include "Character.h"
class Fighter :
	public Character
{
public:
	bool isDefending;

	Fighter();
	~Fighter();

	virtual void meleeAttack();
	void defend();
	bool getDefending();
};