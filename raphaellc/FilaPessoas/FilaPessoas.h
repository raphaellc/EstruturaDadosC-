/* Autor: Raphael Leite Campos
 * Data Atualização: 31/10/18
 * Especificação: Insere nó no final da lista; Início da fila coincide com o início da lista, 
 * e final da fila com o final da lista.
 */
#pragma once
#include "Lista.h"
#include "Pessoa.h"
class FilaPessoas :
	public Lista<Pessoa>
{
public:
	FilaPessoas();
	~FilaPessoas();
	void enfilierar(Pessoa * p);
	void desenfileirar();
	//retorna a pessoa do início da fila
	Pessoa inicioFila();

	//retorna a pessoa do final da fila
	Pessoa fimFila();
};

