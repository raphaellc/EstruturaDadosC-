#include "Node.h"


Node::Node()
{
}

Node::Node(std::string name, int age)
{
	this->data = new Person(name, age);
}


Node::~Node()
{
}

Person * Node::getData()
{
	return this->data;
}

Node * Node::getNextNode()
{
	return this->nextNode;
}

void Node::setPerson(Person * value)
{
	this->data = value;
}

void Node::setNextNode(Node * value)
{
	this->nextNode = value;
}
