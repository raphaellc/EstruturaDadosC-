#pragma once
class Ammunition
{
public:
	int bonusPenetration;
	int bonusDamage;
	int roundsLeft;

	Ammunition();
	~Ammunition();

	int getBonusPenetration();
	int getBonusDamage();
	void setBonusPenetration(int x);
	void setBonusDamage(int x);
	int getRoundsLeft();
	void setRoundsLeft(int x);
};

