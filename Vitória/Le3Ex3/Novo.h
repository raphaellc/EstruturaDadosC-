#pragma once
#include "Imovel.h"
class Novo :
	public Imovel
{
public:
	Novo();
	~Novo();
	void Endereco() override;
	void Valor() override;
};

