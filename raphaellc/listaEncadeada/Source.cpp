#include <iostream>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
#include <vector>
#include <queue>
//void percorreLista(No * no) {
//	if (no != nullptr) {
//		std::cout << no->pessoa->s_nome << std::endl;
//		percorreLista(no->proximo);
//	}
//}
int main() {
	ListaPessoas * lp_lista_pessoas = new ListaPessoas();
	std::vector<int> * v = new std::vector<int>();
	std::vector<int>::iterator vec_it;
	std::queue<int> * q_fila = new std::queue<int>();
	v->push_back(10);
	v->push_back(20);
	//v->pop_back();
	
	/*for(int n : *v)
		std::cout << n << std::endl;*/

	/*for (vec_it = v->begin() ; vec_it != v->end() ; vec_it++)
		std::cout << *vec_it << std::endl;*/

	q_fila->push(10);
	q_fila->push(20);
	q_fila->push(30);

	std::cout << q_fila->front() << std::endl;
	std::cout << q_fila->back() << std::endl;
	q_fila->pop();
	std::cout << q_fila->front() << std::endl;
	std::cout << q_fila->back() << std::endl;
	// Definição de uma pessoa
	/*Pessoa * pessoa1;
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
	
	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	std::cout << (pessoa1 == pessoa1) << std::endl;
	//std::cout << pessoa1 == deux << std::endl;
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