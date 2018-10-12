#pragma once
#include "Person.h"
#include <string>
class Node
{
public:
	Node(std::string name, int age);
	~Node();

	// Aumenta o index em 1, para realocamento.
	void incrementIndex();

	// Setters
	void setIndex(int value);
	void setPerson(Person * value);
	void setNextNode(Node * value);

	// Getters
	int getIndex();
	Person * getPerson();
	Node * getNextNode();

private:
	int index;
	Person * person;
	Node * nextNode;
};

