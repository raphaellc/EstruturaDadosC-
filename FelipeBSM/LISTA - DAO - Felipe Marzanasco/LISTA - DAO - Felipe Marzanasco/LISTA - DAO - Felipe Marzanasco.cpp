// LISTA - DAO - Felipe Marzanasco.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "Personagem.h"
#include "ItemDAOmpl.h"
#include "Item.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	Personagem * perso = new Personagem();
	ItemDAOmpl * item_DAO = new ItemDAOmpl();
	Item * item = new Item();


	int opcao;
	std::cout << "ESCOLHA O QUE QUERES FAZER:[1]Ver Inventário. [2] Carregar Inventário. " << std::endl;
	std::cin >> opcao;
	item->setID(533);
	item->setTipo("Arma");
	item->setPeso(10);
	


	if (opcao == 1)
	{
		for ( int i = 0; i < 5; i++)
		{
			ofstream gravaItem("Inventario.bin", ios::binary | ios::out);
			

			

			item_DAO->adicionaItem(*item, i );

			if (!gravaItem.is_open())
			{
				cerr << "Erro ao abrir o arquivo" << endl; // usamos o 'cerr' quando é uma stream de erro(pelo oq eu me lembro)
				exit(1);
			}
			else
			{
				item_DAO->guardaTodosOsItems(gravaItem);
				//gravaItem << endl;
				if (item_DAO->guardaTodosOsItems(gravaItem))
				{
					cout << "DEU CERTO!" << endl;

				}
				else
				{
					cerr << "NÃO DEU CERTO." << endl;

				}


			}
			gravaItem.close();

		}
		

	}
	else if (opcao == 2)
	{
		ifstream leItem("Inventario.bin", std::ios::binary | std::ios::in);

		if (!leItem.is_open())
		{
			cerr << "ERRO AO LER ARQUIVO!" << endl;

		}
		else
		{
			item_DAO->ObtemTodosOsItems(leItem);
			
			
			for (int i = 0; i < 5; i++)
			{
				if (item_DAO->inventario[i].getID() != 0 && item_DAO->inventario[i].getPeso() != 0 )
				{
					cout << "Item " << i << ":\n";
					cout << "ID  : " << item_DAO->inventario[i].getID() << "\n";
					cout << "Peso: " << item_DAO->inventario[i].getPeso() << "\n";
					cout << "Tipo: " << item_DAO->inventario[i].getTipo() << "\n";
					cout << "----------------" << endl;
				}
				

			}

		}
		leItem.close();

	}
	
	
	

 system("pause");
 return 0;
}