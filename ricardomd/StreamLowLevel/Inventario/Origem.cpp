#include "Personagem.h"
#include "Item.h"
#include "ItemDAOImpl.h"
#include <iostream>
#include <fstream>
#include <string>

int main() {
	Personagem *personagem = new Personagem();
	ItemDAOImpl *dao = new ItemDAOImpl();
	bool gameOver = false;
	int choice;

	while (!gameOver)
	{
		std::cout << "Selecione sua opcao:\n1. Criar novo inventario.\n2. Carregar Inventario\n3. Modificar um item especifico\n4. Deletar um Item.\n5. Sair do Programa\n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
		{
			std::ofstream gravarItem("Inventario.bin", std::ios::binary | std::ios::out);
			for (int i = 0; i < 10; i++)
			{
				int id;
				int peso;
				int tipo;
				Item *item = new Item();
				std::cout << "Crie o item " << i << "\n";
				std::cout << "Digite o ID: ";
				std::cin >> id;
				std::cout << "Digite o Peso: ";
				std::cin >> peso;
				std::cout << "Digite o ID: ";
				std::cin >> tipo;

				item->setId(id);
				item->setPeso(peso);
				item->setTipo(tipo);

				dao->adicionaItem(*item, i);
			}
			if (!gravarItem.is_open())
			{
				std::cout << "Erro ao abrir o arquivo...\n";
			}
			else
			{
				if (dao->guardaTodosItens(gravarItem))
				{
					std::cout << "Itens salvos com sucesso!\n";
				}
				else
				{
					std::cout << "Problemas ao gravar itens...\n";
				}
			}
			gravarItem.close();
			break;
		}

		case 2:
		{
			std::ifstream carregarItem("Inventario.bin", std::ios::binary | std::ios::in);
			if (!carregarItem.is_open()) {
				std::cout << "Erro ao ler itens...\n";
			}
			else
			{
				dao->obtemTodosItens(carregarItem);

				for (int i = 0; i < 10; i++)
				{
					if (dao->inventario[i].getId() != 0 && dao->inventario[i].getPeso() != 0 && dao->inventario[i].getTipo() != 0)
					{
						std::cout << "Item " << i << ":\n";
						std::cout << "ID  : " << dao->inventario[i].getId() << "\n";
						std::cout << "Peso: " << dao->inventario[i].getPeso() << "\n";
						std::cout << "Tipo: " << dao->inventario[i].getTipo() << "\n";
						std::cout << "---------------------------------\n";
					}
					else
					{
						std::cout << "Item " << i << ":\n";
						std::cout << "-- vazio\n";
						std::cout << "---------------------------------\n";
					}
				}
			}
			carregarItem.close();
			break;
		}
		case 3:
		{
			std::cout << "Digite o numero do item que deseja modificar:";
			int index;
			std::cin >> index;
			int id;
			int peso;
			int tipo;
			Item *item = new Item();
			std::cout << "Crie o item " << index << "\n";
			std::cout << "Digite o ID: ";
			std::cin >> id;
			std::cout << "Digite o Peso: ";
			std::cin >> peso;
			std::cout << "Digite o ID: ";
			std::cin >> tipo;
			item->setId(id);
			item->setPeso(peso);
			item->setTipo(tipo);
			std::ofstream gravarItem("Inventario.bin", std::ios::binary | std::ios::out | std::ios::in);
			dao->atualizaItem(*item, index, gravarItem);
			gravarItem.close();
			break;
		}
		case 4:
		{
			std::cout << "Digite o numero do item que deseja deletar:";
			int index;
			std::cin >> index;
			std::ofstream gravarItem("Inventario.bin", std::ios::binary | std::ios::out);
			dao->deletaItem(index, gravarItem);
			gravarItem.close();
			break;
		}

		case 5:
			gameOver = true;
			break;
		}
	
	}
	system("pause");
	return 0;
}
