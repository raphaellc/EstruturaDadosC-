#pragma once
#include "Person.h"
class Node
{
public:
	Node();
	Node(std::string name, int age);
	~Node();

	// Getters
	Person* getData();
	Node* getNextNode();

	// Setters
	void setPerson(Person * value);
	void setNextNode(Node * value);

private:
	Person * data;
	Node * nextNode;

};

