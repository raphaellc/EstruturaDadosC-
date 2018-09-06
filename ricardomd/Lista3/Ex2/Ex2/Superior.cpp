#include "Superior.h"



Superior::Superior()
{
	VIP();
}


Superior::~Superior()
{
}

void Superior::printSuperiorValue()
{
	std::cout << "This ticket cost: " << this->getWholeValue() << "\n";
}
