#include "NewState.h"



NewState::NewState()
{
}


NewState::~NewState()
{
}

void NewState::updatePrice()
{
	this->price = this->price * 1.40;
}
