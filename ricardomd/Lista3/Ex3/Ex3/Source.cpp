#include <iostream>
#include <string>
#include "State.h"
#include "NewState.h"
#include "OldState.h"

int main()
{
	State *state = new State();
	NewState *newState = new NewState();
	OldState *oldState = new OldState();

	state->setValue(10000);
	state->setAddress("Rua Teodoro, 350");
	state->printState();

	newState->setValue(10000);
	newState->setAddress("Rua Mareshall, 566");
	newState->updatePrice();
	newState->printState();

	oldState->setValue(10000);
	oldState->setAddress("Coronel Genuino, 345");
	oldState->updatePrice();
	oldState->printState();


	system("pause");
	return 0;
}