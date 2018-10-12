#pragma once
#include "Node.h"
#include <iostream>
class ListOfPerson
{
public:
	ListOfPerson();
	~ListOfPerson();

	// Metodo para inserir item no fim da lista
	void pushBack(Node * node);

	// Metodo para inserir item no começo da lista
	void pushFront(Node * node);

	// Metodo para inserir item na lista baseado a uma posição
	void insertAt(Node * node, int index);

	// Metodo para remover o ultimo item da lista.
	void removeLast();

	// Metodo para remover o primeiro item da lista.
	void removeFirst();

	// Metodo para remover um nodo em uma posição ou um nodo especifico.
	bool remove(int index);
	bool remove(Person * person);

	// Metodo para ver se uma lista contem um obj
	bool contains(Person * person);

	// Metodo para limpar a Lista
	void eraseList();

	// Metodo para arrumar os indexes
	void fixIndexes(Node * node);
	void fixIndexes();

	// Getters
	Node * getGenesisNode();
	void setSize(int value);
	int getSize();

private:
	int size;
	Node * genesisNode;
};

