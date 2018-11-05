//Classe Inventário herdando de uma Lista<Item>
#pragma once
#include "Lista.h"
#include "Item.h"

class Inventario :
	public Lista<Item>
{
public: 
	Inventario();
	~Inventario();
	//Inserir Item na última posição
	void inserirNaUltimaPos(Item * p);
	//Mostrar o último item da Lista
	void obterUltimoItem();
};

