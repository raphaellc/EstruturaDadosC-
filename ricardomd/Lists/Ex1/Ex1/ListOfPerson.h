#pragma once
#include "Node.h"
#include <iostream>
class ListOfPerson
{
public:
	ListOfPerson();
	~ListOfPerson();

	// Metodo para inserir item na lista
	void pushBack(Node * node);

	// Metodo para inserir item na lista baseado a uma posição
	void insertAt(Node * node, int index);

	// Metodo para remover o ultimo item da lista.
	void removeLast();

	// Metodo para limpar a Lista
	void eraseList();

	// Getters
	Node * getGenesisNode();
	void setSize(int value);
	int getSize();

private:
	int size;
	Node * genesisNode;
};

