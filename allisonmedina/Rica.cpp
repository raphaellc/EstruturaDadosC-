#include "stdafx.h"
#include "Rica.h"


Rica::Rica()
{
	
}  

Rica::~Rica()
{
}
void Rica::purchase()
{	
	
	std::cout << "I get R$ " << money << " and spend excessively. I'm rich! \n";	
}
double Rica::getMoney()
{
	std::cout << "\nEnter your amount R$: ";
	std::cin >> money;
	return money;
}
