#include "OldState.h"



OldState::OldState()
{
}


OldState::~OldState()
{
}

void OldState::updatePrice()
{
	this->price = this->price * 0.60;
}
