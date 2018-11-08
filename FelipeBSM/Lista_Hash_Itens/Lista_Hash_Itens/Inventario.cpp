#include "pch.h"
#include "Inventario.h"
#include <fstream>

Inventario::Inventario()
{
}


Inventario::~Inventario()
{
}

//definindo tipo para nao precisar escrever tudo isso quando fou uasar multimap ou pair
typedef std::unordered_multimap <std::string, Item > NOME;
typedef std::pair<std::string, Item> par;

void Inventario::FuncaoParaHash()
{
	std::string opcao;
	std::string nome;
	int dano;

	std::fstream arqEntrada; //criando arquivo

	arqEntrada.open("Item.txt", std::ios::in);

	arqEntrada >> nome; //passadno primeiro o nome e depois o dano
	arqEntrada >> dano;

	std::cout << "Você pode escolher QUALQUER ITEM, BASTA ESCREVER O QUE QUER! " << std::endl;
	std::cin >> opcao;


	std::cout << "SEU IVENTÁRIO. " << std::endl;




	Item espada1(nome, dano); // passando as variaveis do arquivo
	Item espada2("Espada-Rara ", 20);
	Item espada3("Espada-Comum", 10);

	Item espada4(opcao, 1000);

	//se eu nao usase o typedef teria que escrever tudo aquilo de novo aqui . . .
	NOME inventario;
	NOME::iterator IT;
	par inv_;

	//passando a string  - assim para todos
	inv_.first = espada1.getNome();
	inv_.second = espada1;
	inventario.insert(inv_); //insert

	inv_.first = espada2.getNome();
	inv_.second = espada2;
	inventario.insert(inv_);

	inv_.first = espada3.getNome();
	inv_.second = espada3;
	inventario.insert(inv_);

	inv_.first = espada4.getNome();
	inv_.second = espada4;
	inventario.insert(inv_);

	//puxa as infos - reconhece os itens 
	IT = inventario.find("Espada-Lendária");
	IT = inventario.find("Espada-Rara");
	IT = inventario.find("Espada-Comum");
	IT = inventario.find(opcao);

	IT = inventario.begin(); //IT = comeco da hash

	while (IT != inventario.end()) //enquanto nao for o fim da hash
	{
		std::cout << "Nome do Item: " << IT->first << std::endl;
		//std::cout << "Poder: " << IT->second << std::endl;
		IT++;

	}

	std::cout << inventario.count("Espada-Lendária") << std::endl;
	std::cout << inventario.count("Espada-Rara") << std::endl;
	std::cout << inventario.count("Espada-Comum") << std::endl;
	std::cout << inventario.count(opcao) << std::endl;

}

typedef std::unordered_multimap <std::string, int > OI;
typedef std::pair<std::string, int> parA;

void Inventario::FuncaoParaHash2()
{
	OI ITS;
	parA IT2;
	OI::iterator itera;

	std::string str1 = " ESPADA - LENDÁRIA.";
	std::string str2 = " ESPADA - RARA.";
	std::string str3 = " ESPADA - COMUM.";

	int opcao[3];
	std::string opcao2;

	for (int i = 0; i < 3; i++)
	{


		std::cout << "Escolha o seu " << i + 1 << " item:" << std::endl;
		std::cout << "1." << str1 << std::endl;
		std::cout << "2." << str2 << std::endl;
		std::cout << "3." << str3 << std::endl;
		std::cin >> opcao[i];


	}

	std::cout << std::endl;
	std::cout << std::endl;

	if (opcao[0] == 1 && opcao[1] == 2 && opcao[2] == 3)
	{
		std::cout << "SEU INVENTÁRIO: " << std::endl;
		IT2.first = str1;
		IT2.second = 86;
		ITS.insert(IT2);
		itera = ITS.find(str1);
		std::cout << "1. " << itera->first << " " << itera->second << std::endl;
		///////////////////
		IT2.first = str2;
		IT2.second = 64;
		ITS.insert(IT2);
		itera = ITS.find(str2);
		std::cout << "2. " << itera->first << " " << itera->second << std::endl;
		///////////////////
		IT2.first = str3;
		IT2.second = 32;
		ITS.insert(IT2);
		itera = ITS.find(str3);
		std::cout << "3. " << itera->first << " " << itera->second << std::endl;
	}
	else if (opcao[0] == 2 && opcao[1] == 1 && opcao[2] == 3)
	{
		std::cout << "SEU INVENTÁRIO: " << std::endl;
		IT2.first = str2;
		IT2.second = 64;
		ITS.insert(IT2);
		itera = ITS.find(str2);
		std::cout << "1. " << itera->first << " " << itera->second << std::endl;
		///////////////////
		IT2.first = str1;
		IT2.second = 86;
		ITS.insert(IT2);
		itera = ITS.find(str1);
		std::cout << "2. " << itera->first << " " << itera->second << std::endl;
		///////////////////
		IT2.first = str3;
		IT2.second = 32;
		ITS.insert(IT2);
		itera = ITS.find(str3);
		std::cout << "3. " << itera->first << " " << itera->second << std::endl;

	}
	else if (opcao[0] == 3 && opcao[1] == 1 && opcao[2] == 2)
	{
		std::cout << "SEU INVENTÁRIO: " << std::endl;
		IT2.first = str3;
		IT2.second = 32;
		ITS.insert(IT2);
		itera = ITS.find(str3);
		std::cout << "1. " << itera->first << " " << itera->second << std::endl;
		///////////////////
		IT2.first = str1;
		IT2.second = 86;
		ITS.insert(IT2);
		itera = ITS.find(str1);
		std::cout << "2. " << itera->first << " " << itera->second << std::endl;
		///////////////////
		IT2.first = str2;
		IT2.second = 64;
		ITS.insert(IT2);
		itera = ITS.find(str2);
		std::cout << "3. " << itera->first << " " << itera->second << std::endl;

	}
	std::cout << " . . . " << std::endl;
	std::cout << "Você gostaria de deletar seu inventário? " << std::endl;
	std::cin >> opcao2;

	if (opcao2 == "sim")
	{
		std::string opcao3;
		std::cout << "Os itens " << opcao[0] << " // " << opcao[1] << " // " << opcao[2] << "Serão deletados. Tem certeza disso? " << std::endl;
		std::cin >> opcao3;
		std::cout << " . . . " << std::endl;
		if (opcao3 == "sim")
		{
			
			std::cout << "DELETADO." << std::endl;
			//MENTIRA, NAO TA DELETANDO NADA, VOU FAZER ISSO USANDO LISTA
		}
		else if (opcao3 == "nao")
		{
			std::cout << " . . . " << std::endl;
			//goto label;

		}
	}
	/*else if (opcao2 == "nao")
	{
	label:;
		std::cout << "O que gostarias de fazer? " << std::endl;
		std::cout << "1. Adicionar um novo item. " << std::endl << "2. Tirar um Item." << std::endl;

	}*/
	//VOU IMPLEMENTAR ISSO TUDO NOVAMENTE DEPOIS USANDO LISTA.


}
