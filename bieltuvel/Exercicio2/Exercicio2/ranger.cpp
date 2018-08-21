#include "ranger.h"

ranger::ranger()
{
}

ranger::~ranger()
{
}

int ranger::getVelocidade(int _velocidade)
{
	velocidade = _velocidade;
	return velocidade;
}

void ranger::voadora()
{
	std::cout << "Segura essa!" << endl;
}
