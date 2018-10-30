#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
#include "PilhaPessoas.h"
//void percorreLista(No * no) {
//	if (no != nullptr) {
//		std::cout << no->pessoa->s_nome << std::endl;
//		percorreLista(no->proximo);
//	}
//}
int main() {

	//ListaPessoas * lp_lista_pessoas = new ListaPessoas();

	PilhaPessoas * pilha1 = new PilhaPessoas;

	Pessoa * pessoa1;
	//definição da lista
	// Definição de uma pessoa
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	Pessoa * pessoa2;
	//definição da lista
	// Definição de uma pessoa
	pessoa2 = new Pessoa;
	pessoa2->s_nome = "Gigio";
	pessoa2->i_idade = 17;

	//adicionar esta pessoa no nó.

	//lp_lista_pessoas->insereFimLista(pessoa1);
	//adicionar o nó na lista

	/*Pessoa * DEUX = new Pessoa;
	DEUX->s_nome = "DEUX";
	DEUX->i_idade = 0;*/

	//adicionar novo nó na lista
	//lp_lista_pessoas->insereFimLista(DEUX);
	//lp_lista_pessoas->percorreLista(lp_lista_pessoas->lista);
	pilha1->push(pessoa1);
	pilha1->push(pessoa2);
	pilha1->pop();
	
	std::cout << pilha1->topo().s_nome;


	system("pause");
	return 0;
}