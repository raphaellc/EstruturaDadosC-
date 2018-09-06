#pragma once
#include "ticket.h"
class VIP :
	public ticket
{
public:
	int additionalValue;

	VIP();
	~VIP();

	int getWholeValue();
};

