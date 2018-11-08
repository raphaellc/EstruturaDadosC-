#pragma once
#include "Item.h"
#include <iostream>
#include "map"
#include <unordered_map>
#include "string"

class Inventario
{
public:
	Inventario();
	~Inventario();

	//funcao principal
	void FuncaoParaHash();

	//essa funcao é só para aplicar hash sem o Item, posteriormente adicionando Listas.
	void FuncaoParaHash2();


};

