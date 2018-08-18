#include "LightSacerdote.h"

LightSacerdote::LightSacerdote()
{
}

LightSacerdote::~LightSacerdote()
{
}

int LightSacerdote::getConcen(int _concentracao)
{
	concentracao = _concentracao;
	return concentracao;
}

void LightSacerdote::powerOfLight()
{
	std::cout << "Deuses atingem-me com boas energias!" << endl;
}
