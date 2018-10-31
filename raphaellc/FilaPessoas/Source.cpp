#include <iostream>
#include "FilaPessoas.h"
#include <string>

int main() {
	auto fila_pessoas = new FilaPessoas;
	
	auto pessoa1 = new Pessoa;
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	
	auto  DEUX = new Pessoa;
	DEUX->s_nome = "DEUX";
	DEUX->i_idade = 0;

	fila_pessoas->enfilierar(pessoa1);
	fila_pessoas->enfilierar(DEUX);
	//Saída esperada:
	//daciolo
	//DEUX
	std::cout << fila_pessoas->inicioFila().s_nome << std::endl;
	std::cout << fila_pessoas->fimFila().s_nome << std::endl;

	fila_pessoas->desenfileirar();
	//saída esperada: 
	//DEUX
	//DEUX
	std::cout << fila_pessoas->inicioFila().s_nome << std::endl;
	std::cout << fila_pessoas->fimFila().s_nome << std::endl;

	system("pause");
	return 0;
}