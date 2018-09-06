#include "ticket.h"



ticket::ticket()
{
	this->value = 100;
}


ticket::~ticket()
{
}

void ticket::printValue()
{
	std::cout << "This ticket is worth " << this->value << "\n";
}
