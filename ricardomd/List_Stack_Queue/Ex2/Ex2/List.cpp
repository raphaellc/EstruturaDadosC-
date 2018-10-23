#include "List.h"


List::List()
{
	this->size = 0;
}


List::~List()
{
}

void List::pushBack(Node * node)
{
	if (this->genesisNode == nullptr)
	{
		this->genesisNode = node;
		this->size += 1;
	}
	else
	{
		this->iterator = this->genesisNode;
		for (int i = 0; i < this->size; i += 1)
		{
			if (this->iterator->getNextNode() == nullptr)
			{
				this->iterator->setNextNode(node);
				this->size += 1;
			}
			else
			{
				this->iterator = this->iterator->getNextNode();
			}
		}
	}
}

void List::popBack()
{
	if (this->genesisNode == nullptr)
	{
		return;
	}
	else if (this->genesisNode->getNextNode() == nullptr)
	{
		Node * tempNode = this->genesisNode;
		this->genesisNode = nullptr;
		delete tempNode;
		this->size -= 1;
		return;
	}

	this->iterator = this->genesisNode;
	for (int i = 0; i < this->size; i += 1)
	{
		if (this->iterator->getNextNode() == nullptr)
		{
			Node * tempNode = this->iterator;
			delete tempNode;
			this->size -= 1;
			return;
		}
		else
		{
			this->iterator = this->iterator->getNextNode();
		}
	}
}

int List::getSize()
{
	return this->size;
}

Node * List::getLastNode()
{
	return nullptr;
}
