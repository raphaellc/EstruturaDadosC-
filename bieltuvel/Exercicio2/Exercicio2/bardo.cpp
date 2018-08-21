#include "bardo.h"



bardo::bardo()
{
}


bardo::~bardo()
{
}

int bardo::getSerenityLvl(int _serenity)
{
	serenityLvl = _serenity;
	return serenityLvl;
}

void bardo::tocarViolao()
{
	std::cout << "Dê uma olhada nestes belos acordes combinados ~som do violao~" << endl;
}
