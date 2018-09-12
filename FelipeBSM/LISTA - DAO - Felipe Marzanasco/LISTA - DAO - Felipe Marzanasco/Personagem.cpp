#include "pch.h"
#include "Personagem.h"
#include <iostream>

Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::pega_o_inventario(Item invent[5])
{
	for (int i = 0; i < 5; i++)
	{
		this->inventario[i].setID(invent[i].getID());
		this->inventario[i].setPeso(invent[i].getPeso());
		this->inventario[i].setTipo(invent[i].getTipo());
	}
}

void Personagem::inserirItem(std::ostream & os)
{
	os.write(reinterpret_cast<char*>(&item_atual), sizeof(Item));
}

void Personagem::inserirItemEm(std::ostream & os, int indice)
{
	std::streampos pos(indice * sizeof(Item));
	os.seekp(pos);
	std::cout << "O item será escrito na posição: " << os.tellp() << std::endl;
	os.write(reinterpret_cast<char*>(&item_atual), sizeof(Item));
}

void Personagem::carregaItens(std::istream & is)
{
	int indice = 0;
	while (!is.eof()) 
	{

		is.read(reinterpret_cast<char *>(&inventario[indice]), sizeof(Item));
		if (is.gcount() == 0)
		{
			break;

		} 
		std::cout << "Id: " << inventario[indice].id << "Peso: " << inventario[indice].peso << "Tipo: " << inventario[indice].tipo << std::endl;
		indice++;

	}
}
