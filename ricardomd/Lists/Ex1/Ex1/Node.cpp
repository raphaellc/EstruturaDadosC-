#include "Node.h"



Node::Node(std::string name, int age)
{
	this->person = new Person(name, age);
}


Node::~Node()
{
}

void Node::setIndex(int value)
{
	this->index = value;
}

void Node::setPerson(Person * value)
{
	this->person = value;
}

void Node::setNextNode(Node * value)
{
	this->nextNode = value;
}

void Node::incrementIndex()
{
	this->index += 1;
}

int Node::getIndex()
{
	return this->index;
}

Person * Node::getPerson()
{
	return this->person;
}

Node * Node::getNextNode()
{
	return this->nextNode;
}
