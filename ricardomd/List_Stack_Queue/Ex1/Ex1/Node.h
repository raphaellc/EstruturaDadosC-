#pragma once
#include "Person.h"
class Node
{
public:
	Node();
	Node(Person * person);
	~Node();

	// Getters
	Person* getData();
	Node* getGenesis();
	Node* getIterator();

	// Setters
	Person* setPerson(Person * value);
	Node* getGenesisNode(Node * value);
	Node* getIterator(Node * value);

private:
	Person * data;
	Node * genesisNode;
	Node * iterator;
};

