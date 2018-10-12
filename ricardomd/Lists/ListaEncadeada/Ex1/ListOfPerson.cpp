#include "ListOfPerson.h"



ListOfPerson::ListOfPerson()
{
	this->size = 0;
}


ListOfPerson::~ListOfPerson()
{
}

// Metodo para inserir um item a lista na ultima posicação disponivel.
void ListOfPerson::pushBack(Node * node)
{
	// Checa se o genesisNode (Primeiro nodo da lista) é nulo, se for,
	// quer dizer que esta é o primeiro item sendo inserido na lista
	if (this->genesisNode == nullptr)
	{
		this->genesisNode = node;
		this->size += 1;
		this->genesisNode->setIndex(this->size);
	}

	// Se nao for o primeiro...
	else
	{
		// Variavel apenas de referencia para começar a iteração
		Node * tempNode = this->genesisNode;
		for (int i = 1; i <= this->size; i += 1)
		{
			// Se chegamos no nodo onde o proximo nodo é nulo, é aqui mesmo que devemos inserir
			if (tempNode->getNextNode() == nullptr)
			{
				node->setIndex(this->size + 1);
				tempNode->setNextNode(node);
				node->setPreviousNode(tempNode);
				this->size += 1;
			}
			// Se nao, continuamos adiante na lista.
			else
			{
				// PS: tempNode se torna o ponteiro para o NextNode do tempNode
				tempNode = tempNode->getNextNode();
			}
		}
	}
}

void ListOfPerson::pushFront(Node * node)
{
	// Checa se o genesisNode (Primeiro nodo da lista) é nulo, se for,
	// quer dizer que esta é o primeiro item sendo inserido na lista
	if (this->genesisNode == nullptr)
	{
		this->genesisNode = node;
		this->size += 1;
		this->genesisNode->setIndex(this->size);
	}
	// Se não for o primeiro....
	else
	{
		Node * tempNode = this->genesisNode;
		this->genesisNode = node;
		this->genesisNode->setIndex(1);
		this->genesisNode->setNextNode(tempNode);
		tempNode->setPreviousNode(this->genesisNode);
		this->size += 1;
		fixIndexes(this->genesisNode);
	}
}

void ListOfPerson::insertAt(Node * node, int index)
{
	// Se o index for maior que o tamanho da lista
	// ou index for menor que zero, gera um erro.
	if (this->size < index || index < 1)
	{
		std::cout << "List is too short for that position\n";
		return;
	}

	// se o size e index forem iguais, podemos apenas usar o pushBack();
	if (this->size == index)
	{
		this->pushBack(node);
		return;
	}

	// Se o index for a primeira posicao da lista, podemos apenas usar o pushFront();
	if (index == 1)
	{
		this->pushFront(node);
		return;
	}

	// Agora que checamos se o usuario esta adicionando em alguma posicao no meio da lista.
	// Podemos iniciar o processo....
	// Variaveis para segurar os valores do nodo anterior, proximo e para adicionar.
	Node * currentNode = this->genesisNode;
	Node * previousNode = nullptr;
	Node * nextNode = nullptr;

	// Este primeiro For, é para acharmos o nodo correspondente
	// Ao index anterior ao desejado, para que possamos pegar o nextNode dele.
	for (int i = 1; i <= this->size; i += 1)
	{
		// Notem o index-1, é para pegar o anterior.
		if (currentNode->getIndex() == index-1)
		{
			previousNode = currentNode;
		}
		if (currentNode->getIndex() == index)
		{
			nextNode = currentNode;
			break;
		}

		// Continuamos a iteração até achar o nodo necessario
		currentNode = currentNode->getNextNode();
	}

	// Restaurando a corrente de nodos, adicionando o nodo desejado
	// entre o previous e o next.
	previousNode->setNextNode(node);
	node->setPreviousNode(previousNode);
	nextNode->setPreviousNode(node);
	node->setNextNode(nextNode);
	node->setIndex(nextNode->getIndex());
	this->size += 1;

	fixIndexes(node);
}

void ListOfPerson::removeLast()
{
	// Checa se o usuario esta tentando remover itens de uma lista vazia
	if (this->genesisNode == nullptr)
	{
		std::cout << "This list is empty!!!\n";
		return;
	}


	// Nada de novo... só um metodo que itera os nodos até chegar no ultimo
	// deleta ele e o ponteiro do anterior.
	Node * currentNode = this->genesisNode;
	for (int i = 1; i <= this->size; i += 1)
	{
		// Notem o size-1, estamos na verdade pegando o nodo antes do ultimo.
		// setando o ponteiro dele de next para nulo
		// e deletando o obj da memoria.
		if (i == this->size-1)
		{
			delete currentNode->getNextNode();
			currentNode->setNextNode(nullptr);
			this->size -= 1;
		}
		currentNode = currentNode->getNextNode();
	}
}

void ListOfPerson::removeFirst()
{
	// Checando se o usuario esta removendo itens de uma lista vazia.
	if (this->genesisNode == nullptr)
	{
		std::cout << "This list is empty!!!\n";
		return;
	}

	// Se não, fazemos o processo.
	this->genesisNode = this->genesisNode->getNextNode();
	this->genesisNode->setPreviousNode(nullptr);
	this->size -= 1;
	this->fixIndexes();

}

bool ListOfPerson::remove(int index)
{
	// Se o index for maior que o tamanho da lista
	// ou index for menor que zero, gera um erro.
	if (this->size < index || index < 1)
	{
		std::cout << "Error...\n";
		return false;
	}
	
	Node * nodeToDelete = nullptr;
	Node * previousNode = nullptr;
	Node * nextNode = nullptr;
	Node * currentNode = this->genesisNode;
	
	for (int i = 1; i <= this->size; i += 1)
	{
		if (currentNode->getIndex() == index - 1)
		{
			previousNode = currentNode;
		}
		else if (currentNode->getIndex() == index)
		{
			nodeToDelete = currentNode;
		}
		else if (currentNode->getIndex() == index + 1)
		{
			nextNode = currentNode;
		}
		currentNode = currentNode->getNextNode();
	}
	previousNode->setNextNode(nextNode);
	nextNode->setPreviousNode(previousNode);
	delete nodeToDelete;
	this->size -= 1;
	this->fixIndexes();
	return true;
}

bool ListOfPerson::remove(Person * person)
{
	Node * nodeToDelete = nullptr;
	Node * previousNode = nullptr;
	Node * nextNode = nullptr;
	Node * currentNode = this->genesisNode;

	for (int i = 1; i <= this->size; i += 1)
	{
		if (currentNode->getPerson()->getName() == person->getName() &&
			currentNode->getPerson()->getAge() == person->getAge())
		{
			previousNode = currentNode->getPreviousNode();
			nextNode = currentNode->getNextNode();
			previousNode->setNextNode(nextNode);
			nextNode->setPreviousNode(previousNode);
			this->size -= 1;
			this->fixIndexes();
			return true;

		}
		currentNode = currentNode->getNextNode();
	}
	return false;
}

bool ListOfPerson::contains(Person * person)
{
	Node * currentNode = this->genesisNode;

	for (int i = 1; i <= this->size; i += 1)
	{
		if (currentNode->getPerson()->getName() == person->getName() &&
			currentNode->getPerson()->getAge() == person->getAge())
		{
			return true;
		}
		else
		{
			currentNode = currentNode->getNextNode();
		}
	}
	return false;
}

void ListOfPerson::eraseList()
{
	// Se a lista já estiver limpa, nao precisamos limpar :)
	if (this->genesisNode == nullptr)
	{
		std::cout << "The list is already empty!!!\n";
		return;
	}
	Node * currentNode = this->genesisNode;
	Node * nextNode = this->genesisNode;
	
	// Este primeiro For vai até o final da lista, pegar o ultimo item.
	// NOTA: Essa é uma forma horrivel de fazer isso, o ideal seria implementar
	// um previousNode pointer dentro do nodo, mas já é 12:30 e eu acordo as 6 da manha
	// ain't nobody got time for that!
	for (int i = 1; i <= this->size; i += 1)
	{
		for (int j = 1; j <= this->size; j += 1)
		{
			// Nesse for só estamos esperando chegar no ultimo item e fazer a mesma coisa que fizemos no eraseLast :)
			currentNode = currentNode->getNextNode();
			if (j == this->size-1)
			{
				delete currentNode->getNextNode();
				currentNode->setNextNode(nullptr);
				this->size -= 1;
			}
		}
		currentNode = this->genesisNode;
	}

	// Quando tudo esta feito, genesis volta a ser nulo, esperando pra novos itens serem adicionados :)
	this->genesisNode = nullptr;
	this->size = 0;
}

void ListOfPerson::fixIndexes(Node * node)
{
	// Percorremos a lista até o final dele, arrumando os indexes dos proximos nodos
	for (int i = node->getIndex(); i < this->size; i += 1)
	{
		if (node->getIndex() == node->getNextNode()->getIndex())
		{
			node = node->getNextNode();
			node->incrementIndex();
		}
		if (node->getIndex() < node->getNextNode()->getIndex())
		{
			node = node->getNextNode();
			node->decreaseIndex();
		}
	}
}

void ListOfPerson::fixIndexes()
{
	Node * node = this->genesisNode;
	// Percorremos a lista até o final dele, arrumando os indexes dos proximos nodos
	for (int i = 1; i <= this->size; i += 1)
	{
		node->setIndex(i);
		node = node->getNextNode();
	}
}

Node * ListOfPerson::getGenesisNode()
{
	return this->genesisNode;
}

void ListOfPerson::setSize(int value)
{
	this->size = value;
}

int ListOfPerson::getSize()
{
	return this->size;
}
