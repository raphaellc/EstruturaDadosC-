#pragma once
#include <string>
#include "Ammunition.h"
class Gun
{
public:
	std::string type;
	Ammunition ammo;
	int baseDamage;
	int basePenetration;

	void shoot();
	void reload();
	int getBaseDamage();
	int getBasePenetration();
	void setBaseDamage(int x);
	void setBasePenetration(int x);


	Gun();
	~Gun();
};

