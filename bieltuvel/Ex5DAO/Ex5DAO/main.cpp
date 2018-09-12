#include <iostream>
#include <fstream>
#include "itemDAO.h"
#include "ItemDAOmpl.h"
#include "Personagem.h"
#include "Item.h"



int main () 
{
	setlocale(LC_ALL, "ptb");

	Personagem *player = new Personagem;
	ItemDAOmpl *chamar = new ItemDAOmpl;
	Item *itens = new Item;

	int choose;
	std::cout << "O que você quer fazer?\n"
		<< "1. Adicionar ao Inventário \n"
		<< "2. Carregar Inventário" << std::endl;
	std::cin >> choose;

	itens->setId(150);
	itens->setPeso(12);
	itens->setTipo("Arma");
		       
	if (choose == 1) 
	{
	
		for (int i = 0; i < 5; i++)
		{
			std::ofstream gravaItem("Inventario.bin", std::ios::binary | std::ios::out);
		
			chamar->adicionaItem(*itens, i);

			if (!gravaItem.is_open()) 
			{
				std::cerr << "Erro ao abrir o arquivo!" << std::endl;
				exit(1);
			}
			else 
			{
				
				if (chamar->guardaTodosItens(gravaItem))
				{
					std::cout << itens->getId() << std::endl;
					std::cout << "ROLOU!" << std::endl;
				}
				else if (!chamar->guardaTodosItens(gravaItem)) 
				{
					std::cout << "NÃO ROLOU, CHORA!" << std::endl;
				}
			}
			gravaItem.close();
		}
	}
	if (choose == 2)
	{
		std::ifstream mostrarItens("Inventario.bin", std::ios::binary | std::ios::in);

		if (!mostrarItens.is_open())
		{
			std::cerr << "Bom, deu erro também." << std::endl;
		}
		else
		{
			chamar->obtemTodosItens(mostrarItens);

			for (int i = 0; i < 5; i++)
			{
				if (chamar->inventario[i].getId() != 0 && chamar->inventario[i].getPeso() != 0)
				{
					std::cout << "Item: " << i << std::endl;
					std::cout << "ID: " << chamar->inventario[i].getId() << std::endl;
					std::cout << "Peso: " << chamar->inventario[i].getPeso() << std::endl;
					std::cout << "Tipo: " << chamar->inventario[i].getTipo() << std::endl;

				}
			}

			mostrarItens.close();
		}
	}

	system("Pause");
	return 0;
}