#pragma once
#include "State.h"
class NewState :
	public State
{
public:
	NewState();
	~NewState();

	void updatePrice();
};

