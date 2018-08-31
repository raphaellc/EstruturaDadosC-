#pragma once
#include "Imovel.h"
class Velho :
	public Imovel
{
public:
	Velho();
	~Velho();
	void Endereco() override;
	void Valor() override;
};

