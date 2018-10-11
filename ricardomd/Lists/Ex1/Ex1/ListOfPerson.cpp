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

void ListOfPerson::insertAt(Node * node, int index)
{
	// Precisamos de varios ponteiros temporarios para essa iteração
	Node * nodeToAdd = node;
	Node * tempNode = node;
	Node * currentNode = this->genesisNode;


	// Este primeiro For, é para acharmos o nodo correspondente
	// Ao index anterior ao desejado, para que possamos pegar o nextNode dele.
	for (int i = 1; i <= this->size; i += 1)
	{
		// Notem o index-1, é para pegar o anterior.
		if (currentNode->getIndex() == index-1)
		{
			// tempNode vai ser usado como referencia no proximo For.
			tempNode = currentNode->getNextNode();

			// Adicionamos o nodo como next.
			nodeToAdd->setIndex(index);
			currentNode->setNextNode(nodeToAdd);
			this->size += 1;
			break;
		}
		else
		{
			// Continuamos a iteração até achar o nodo necessario
			currentNode = currentNode->getNextNode();
		}
	}

	// deixando a variavel currentNode como o primeiro item da lista
	currentNode = this->genesisNode;
	for (int i = 1; i < this->size; i += 1)
	{
		if (i >= index)
		{
			// Agora estamos conectando as pontas soltas desde que adicionamos o novo
			// nodo desejado pelo usuario, lembram que pegamos o "tempNode" e mantivemos
			// como referencia? É agora que usamos ele para começar a reconectar os nodos adiante

			// tempNode vira o proximo o node que o usuario adicionou
			currentNode->setNextNode(tempNode);

			// incrementando o index
			currentNode->getNextNode()->incrementIndex();

			// Nossa variavel currentNode vira o proximo nodo (para a proxima iteracao do for).
			currentNode = currentNode->getNextNode();

			// !!!NOTEM!!!
			// tempNode é a primeira variavel a ser usada no for, temos que manter ela stored
			// na memoria para a proxima iteração do for!!!!
			tempNode = tempNode->getNextNode();
		}
		else
		{
			// continuamos iterando....
			currentNode = currentNode->getNextNode();
		}
	}
}

void ListOfPerson::removeLast()
{
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

void ListOfPerson::eraseList()
{
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
