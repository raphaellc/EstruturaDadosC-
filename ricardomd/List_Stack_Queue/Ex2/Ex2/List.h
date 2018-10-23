#pragma once
#include "Node.h"
class List
{
public:
	List();
	~List();

	void pushBack(Node* node);
	void popBack();

	int getSize();
	bool eraseList();

	Node* getLastNode();


private:
	int size;
	Node * genesisNode;
	Node * iterator;
};

