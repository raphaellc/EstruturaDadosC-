#pragma once
#include <iostream>
#include <fstream>
class CarregadorDeAssets
{

public:
	CarregadorDeAssets();
	~CarregadorDeAssets();
	bool  carregarRecursos(std::fstream & ArquivoRecursos);

private:
	int numAssets;
};

