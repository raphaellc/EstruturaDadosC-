#include "stdafx.h"
#include <iostream>
#include <map>
#include "Item.h"
#include <unordered_map>
#include <fstream>

//Definindo um multimap e um par
typedef std::unordered_multimap <std::string, Item > conjunto;
typedef std::pair<std::string, Item> par;

//Variávies globais para uso de arquivo
std::string nome, descricao;
int peso;

int main()
{
	//Criando um inventário do tipo CONJUNTO e o seu Iterador
	conjunto inventario;
	conjunto::iterator it_conjunto;
	//Criando um Pair
	par inv;

	//iniciando o arquiv com as informações do item 1
	std::fstream arquivo;
	arquivo.open("info.txt", std::ios::in);
	//colocando as três informações dentro das respectivas variáveis
	arquivo >> nome;
	arquivo >> descricao;
	arquivo >> peso;

	//Iniciando objetos do tipo Item, sendo o primeiro com as infos vindas do arquivo
	Item arma(nome, descricao, peso), casaco("Casaco", "Muito quente", 20), latinha("Latinha", "Mata a sede", 10), arma2("Arma", "Outra delicia", 32);
	
	//Guardando as variáveis no par e inserindo no Hash
	inv.first = arma.getNome();
	inv.second = arma;
	inventario.insert(inv);

	inv.first = casaco.getNome();
	inv.second = casaco;
	inventario.insert(inv);
	
	inv.first = latinha.getNome();
	inv.second = latinha;
	inventario.insert(inv);

	inv.first = arma2.getNome();
	inv.second = arma2;
	inventario.insert(inv);
	
	//Encontrando os itens pelo nome do indice (mesmo nome dos itens)
	it_conjunto = inventario.find("Arma");
	it_conjunto = inventario.find("Casaco");
	it_conjunto = inventario.find("Latinha");
	it_conjunto = inventario.find("Arma");

	//Imprimindo na tela o nome dos itens e seus pesos
	it_conjunto = inventario.begin();
	while (it_conjunto != inventario.end())
	{
		std::cout << "Nome: " << it_conjunto->first << " Peso: " << it_conjunto->second.peso << std::endl;
		it_conjunto++;
	}
	//Contando quantos itens do tipo ARMA existem na tabela Hash
	std::cout << inventario.count("Arma") << std::endl;
	system("pause");
	return 0;
}

