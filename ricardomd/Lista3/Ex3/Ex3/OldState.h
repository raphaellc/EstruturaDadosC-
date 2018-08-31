#include "State.h"

#pragma once
class OldState :
	public State
{
public:
	OldState();
	~OldState();

	void updatePrice();
};

