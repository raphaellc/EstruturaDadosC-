#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
//void percorreLista(No * no) {
//	if (no != nullptr) {
//		std::cout << no->pessoa->s_nome << std::endl;
//		percorreLista(no->proximo);
//	}
//}
int main() {
	ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	
	
	// Definição de uma pessoa
	Pessoa * pessoa1;
	pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;
	lp_lista_pessoas->insereFimLista(pessoa1);
	////adicionar esta pessoa no nó.
	//n_no = new No;
	//n_no->pessoa = pessoa1;
	//n_no->proximo = nullptr;
	//l_lista->insereFimLista(n_no);
	////adicionar o nó na lista
	//n_lista_pessoas = n_no;

	//Pessoa * DEUX = new Pessoa;
	//DEUX->s_nome = "DEUX";
	//DEUX->i_idade = 0;
	//No * n_no1 = new No;
	//n_no1->pessoa = DEUX;
	//n_no1->proximo = nullptr;
	////adicionar novo nó na lista
	//n_lista_pessoas->proximo = n_no1;

	//Pessoa * eymael = new Pessoa;
	//eymael->s_nome = "Eyeyeymael";
	//eymael->i_idade = 65;
	//
	//No * n_no2 = new No;
	//n_no2->pessoa = eymael;
	//n_no2->proximo = nullptr;

	//adicionando novo nó na lista
	//n_lista_pessoas->proximo->proximo = n_no2;

	//percorrer a lista
	//utilizaremos uma variavel auxiliar
	//inicializamos a variavel auxiliar apontando para
	//a ???????????????????????????????????????????
	// n_...?????????????
	//n_lista_... ???????????????
	//n_lista_aux = n_lista_pessoas;
	//enquanto não chegar no fim da lista
	//percorreLista(n_lista_pessoas);
	/*while (n_lista_aux != nullptr)
	{
		std::cout << n_lista_aux->pessoa->s_nome << std::endl;
		n_lista_aux = n_lista_aux->proximo;
	}*/


	system("pause");
	return 0;
}