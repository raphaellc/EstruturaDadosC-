#pragma once
#include "Fighter.h"
class Thief :
	public Fighter
{
public:
	Thief();
	~Thief();
	
	bool isStealth;
	bool isOnTheBack;

	void stealth();
	void backStab();

	bool getStealth();
	bool getIsOnTheBack();


};

