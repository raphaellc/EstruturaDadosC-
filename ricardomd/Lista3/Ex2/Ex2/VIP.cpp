#include "VIP.h"



VIP::VIP()
{
	ticket();
	this->additionalValue = 20;

}


VIP::~VIP()
{
}

int VIP::getWholeValue()
{
	return this->value + this->additionalValue;
}
