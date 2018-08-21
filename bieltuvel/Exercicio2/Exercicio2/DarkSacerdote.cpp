#include "DarkSacerdote.h"

DarkSacerdote::DarkSacerdote()
{
}


DarkSacerdote::~DarkSacerdote()
{
}

int DarkSacerdote::getKarma(int _karma)
{
	karma = _karma;
	return karma;
}

void DarkSacerdote::darknessPower()
{
	std::cout << "Que toda a maldade ascenda em mim!!!" << endl;
}
