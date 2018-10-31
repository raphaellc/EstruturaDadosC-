#include <iostream>
#include <vector>
#include <queue>
#include "Pessoa.h"
int main() {
	/*** SOBRECARGA DE OPERADORES ***/
	//Declaração de Objetos da Classe Pessoa para teste de sobrecarga de operadores.
	Pessoa * pessoa1 = new Pessoa(10,"Raphael");
	Pessoa * pessoa2 = new Pessoa(10,"Bernardo");
	Pessoa * pessoa3 = new Pessoa(10,"Raphael");
	Pessoa * pessoa4 = new Pessoa(11,"Bernardo");
	if (pessoa1 == pessoa2)
		std::cout << "Errado: São diferentes" << std::endl;
	if (*pessoa1 == *pessoa3)
		std::cout << "Correto: São iguais" << std::endl;
	if(*pessoa2 < *pessoa4)
		std::cout << "Verdadeiro: é menor" << std::endl;


	/***STL***/
	/*VECTOR - QUEUE (FILA) -  STACK (PILHA)*/
	std::vector<int> * v = new std::vector<int>();
	std::vector<int>::iterator vec_it;
	std::queue<int> * q_fila = new std::queue<int>();
	v->push_back(10);
	v->push_back(20);
	//v->pop_back();

	
	/*for(int n : *v)
	std::cout << n << std::endl;*/

	//Percorre o vector com iteradores
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

	system("pause");

}