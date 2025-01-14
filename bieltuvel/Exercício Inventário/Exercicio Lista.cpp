#include "pch.h"
#include <iostream>
#include "Lista.h"
#include "No.h"
#include "Player.h"
#include "Inventario.h"

int main()
{

	setlocale(LC_ALL, "ptb");
	//Uma lista de pessoas que fiz para testar
	Lista<Pessoa> * Teste = new Lista<Pessoa>();
	//Um novo inventário
	Inventario * inv = new Inventario();

	Pessoa * Gabriel;
	Gabriel = new Pessoa;
	Gabriel->nome = "Gabriel de Lima Ribeiro";
	Gabriel->idade = 20;

	Pessoa * Geromel;
	Geromel = new Pessoa;
	Geromel->nome = "Deus";
	Geromel->idade = 134;

	Pessoa * Nadinho;
	Nadinho = new Pessoa;
	Nadinho->nome = "LitteNado";
	Nadinho->idade = 59;

	Teste->inserirNaUltimaPos(Gabriel);
	Teste->inserirNaUltimaPos(Geromel);
	Teste->inserirNaUltimaPos(Nadinho);
	Teste->obterUltimaPessoa();

	std::cout << "_____________________________________________________" << std::endl;

	//Iniciando um player e dando nome a um item
	Player * Bieltuvel;
	Bieltuvel = new Player;
	Bieltuvel->item->nome = "Espada Foda";
	Bieltuvel->item->cod = 555;
	
	//Inserindo um Item do Player ao inventário
	inv->inserirNaUltimaPos(Bieltuvel->item);
	inv->obterUltimoItem();
	
	

	system("pause");
	return 0;
}

