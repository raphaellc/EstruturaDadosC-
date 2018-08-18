#include "ladino.h"

ladino::ladino()
{
}


ladino::~ladino()
{
}

int ladino::getStealthLvl(int _stealth)
{
	stealthLvl = _stealth;
	return stealthLvl;
}

void ladino::roubar()
{
	std::cout << "Ouro! Ninguém viu... hahaha!" << endl;
}
