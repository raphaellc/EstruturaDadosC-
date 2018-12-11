#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "FilaPessoas.h"
#include "PilhaPessoas.h"
//void percorreLista(No * no) {
//	if (no != nullptr) {
//		std::cout << no->pessoa->s_nome << std::endl;
//		percorreLista(no->proximo);
//	}
//}
int main() {
// Definição de uma pessoa
	Pessoa *pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	//ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	Lista<Pessoa> * lista_pessoa = new Lista<Pessoa>;
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	Pessoa * pessoa = new Pessoa();
	pessoa->i_idade = 10;
	pessoa->s_nome = "Raphael";
	no_pessoa->info = pessoa;
	no_pessoa->proximo = nullptr;
	lista_pessoa->insereFimLista(no_pessoa);
	No<Pessoa> * no_pessoa1 = new No<Pessoa>;
	no_pessoa1->info = pessoa1;
	lista_pessoa->insereFimLista(no_pessoa1);

	no_pessoa->info = pessoa;

	if (lista_pessoa->contemNaLista(*no_pessoa)) {
		std::cout << "ta ai carai" << std::endl;
	}
	else {
		std::cout << "nao ta ai carai" << std::endl;
	}
	PilhaPessoas * pilha1 = new PilhaPessoas;
	FilaPessoas * fila1 = new FilaPessoas;


	//definição da lista
	

	Pessoa * pessoa2;
	//definição da lista
	// Definição de uma pessoa
	pessoa2 = new Pessoa;
	pessoa2->s_nome = "Gigio";
	pessoa2->i_idade = 17;

	No <Pessoa> * no1 = new No<Pessoa>;
	No <Pessoa> * no2 = new No<Pessoa>;

	no1->info = pessoa1;
	no2->info = pessoa2;

	Lista<Pessoa> * lista1 = new Lista<Pessoa>;

	//adicionar esta pessoa no nó.

	//lp_lista_pessoas->insereFimLista(pessoa1);
	//adicionar o nó na lista

	/*Pessoa * DEUX = new Pessoa;
	DEUX->s_nome = "DEUX";
	DEUX->i_idade = 0;*/

	//adicionar novo nó na lista
	//lp_lista_pessoas->insereFimLista(DEUX);
	//lp_lista_pessoas->percorreLista(lp_lista_pessoas->lista);
	
	//pilha
	//pilha1->push(pessoa1);
	//pilha1->push(pessoa2);
	//pilha1->pop();

	//fila


	//fila1->enfileirar(pessoa1);
	//fila1->enfileirar(pessoa2);
	//fila1->desenfileirar();

	//fila1->lista->info->s_nome;
	//std::cout << fila1->lista->proximo->info->s_nome;
	

	system("pause");
	return 0;
}