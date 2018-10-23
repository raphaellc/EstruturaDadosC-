#include "Node.h"


Node::Node()
{
}

Node::Node(Person* person)
{
	this->data = person;
}


Node::~Node()
{
}

Person * Node::getData()
{
	return this->data;
}

Node * Node::getGenesis()
{
	return this->genesisNode;
}

Node * Node::getIterator()
{
	return this->iterator;
}

Person * Node::setPerson(Person * value)
{
	return this->data = value;
}

Node * Node::getGenesisNode(Node * value)
{
	return this->genesisNode;
}

Node * Node::getIterator(Node * value)
{
	return this->iterator;
}
