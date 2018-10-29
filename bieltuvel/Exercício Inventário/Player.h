//Classe Player
#pragma once
#include <iostream>
#include "Item.h"


class Player
{
public:
	Player();
	~Player();
	//Possui um Item
	Item * item = new Item();
	
};

