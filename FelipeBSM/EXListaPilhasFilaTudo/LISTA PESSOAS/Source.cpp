#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
#include "PilhaPessoas.h"
#include "FilaPessoas.h"
#include "Inventario.h"
#include "Player.h"
//void percorreLista(No * no) {
//	if (no != nullptr) {
//		std::cout << no->pessoa->s_nome << std::endl;
//		percorreLista(no->proximo);
//	}
//}
int main() 
{
	setlocale(LC_ALL, "Portuguese");

	
	/*ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	PilhaPessoas * vamove = new PilhaPessoas();

	Pessoa * pessoa1;
	//definição da lista
	// Definição de uma pessoa
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	//adicionar esta pessoa no nó.
		
	lp_lista_pessoas->insereFimLista(pessoa1);
	//adicionar o nó na lista
	
	Pessoa * DEUX = new Pessoa;
	DEUX->s_nome = "DEUX";
	DEUX->i_idade = 0;
	
	//adicionar novo nó na lista
	lp_lista_pessoas->insereFimLista(DEUX);
	lp_lista_pessoas->percorreLista(lp_lista_pessoas->lista);
	vamove->topo(lp_lista_pessoas); */


	ListaPessoas * lp_lista = new ListaPessoas();
	FilaPessoas * fila = new FilaPessoas();


	Pessoa * pessoa1;
	//definição da lista
	// Definição de uma pessoa
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Baby Baby do Biruleibe leibe";
	pessoa1->i_idade = 28;

	Pessoa * pessoa2;
	//definição da lista
	// Definição de uma pessoa
	pessoa2 = new Pessoa;
	pessoa2->s_nome = "Garibaldo do Telhado de Bilu Tetéia";
	pessoa2->i_idade = 29;
	
	Pessoa * pessoa3;
	//definição da lista
	// Definição de uma pessoa
	pessoa3 = new Pessoa;
	pessoa3->s_nome = "Duro duro do prematuro da minha sacada?";
	pessoa3->i_idade = 30;
	
	
	fila->enfileirar(pessoa1);
	fila->enfileirar(pessoa2);
	fila->enfileirar(pessoa3);
	fila->desenfileirar();
	
	//PARTE NOVA...

	Inventario* LIXO = new Inventario;

	Player* player = new Player;
	player->item->item_merda = " B . . . . . . . O ";
	player->item->numero = 1;


	LIXO->inserirNaUltimaPos(player->item);

	std::cout << " --- AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH --- " << std::endl;

	LIXO->obterUltimoItem();
	system("pause");
	return 0;
}


