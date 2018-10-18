#include <iostream>
#include "ListOfPerson.h"
#include "Node.h"

void printMenu();
void printEntireList(ListOfPerson * list);

int main()
{
	// Variaveis temporarias para rodar o programa
	bool exit = false;
	int userChoice;
	std::string name;
	int age;
	int index;
	Person * tempPerson;

	// Iniciando a Lista
	ListOfPerson * list = new ListOfPerson();

	while (!exit)
	{
		printMenu();
		std::cin >> userChoice;

		switch (userChoice)
		{
		case 1:
			std::cout << "Type a name: ";
			std::cin >> name;
			std::cout << "Type the age: ";
			std::cin >> age;
			list->pushBack(new Node(name, age));
			break;
		case 2:
			std::cout << "Type a name: ";
			std::cin >> name;
			std::cout << "Type the age: ";
			std::cin >> age;
			std::cout << "Type the index: ";
			list->pushFront(new Node(name, age));
			break;
		case 3:
			std::cout << "Type a name: ";
			std::cin >> name;
			std::cout << "Type the age: ";
			std::cin >> age;
			std::cout << "Type the index: ";
			std::cin >> index;
			list->insertAt(new Node(name, age), index);
			break;
		case 4:
			list->removeLast();
			break;
		case 5:
			list->removeFirst();
			break;
		case 6:
			std::cout << "Digite o index: ";
			std::cin >> index;
			list->remove(index);
			break;
		case 7:
			std::cout << "Type a name: ";
			std::cin >> name;
			std::cout << "Type the age: ";
			std::cin >> age;
			tempPerson = new Person(name, age);
			if (list->remove(tempPerson))
			{
				std::cout << "Person removed from the list!!!\n";
			}
			else
			{
				std::cout << "No such person in the list!!!\n";
			}
			break;
		case 8:
			list->eraseList();
			break;
		case 9:
			std::cout << "Type a name: ";
			std::cin >> name;
			std::cout << "Type the age: ";
			std::cin >> age;
			tempPerson = new Person(name, age);
			if (list->contains(tempPerson))
			{
				std::cout << "The list contain this Node!!!!\n";
			}
			else
			{
				std::cout << "The list does not contains this node!!!\n";
			}
			delete tempPerson;
			break;
		case 10:
			printEntireList(list);
			break;
		case 11:
			exit = true;
			break;
		default:
			break;
		}
	}

	return 0;
}

void printMenu()
{
	std::cout << "1. pushBack()\n";
	std::cout << "2. pushFront()\n";
	std::cout << "3. insertAt()\n";
	std::cout << "4. removeLast()\n";
	std::cout << "5. removeFirst()\n";
	std::cout << "6. remove(index)\n";
	std::cout << "7. remove(Node)\n";
	std::cout << "8. eraseList()\n";
	std::cout << "9. contains(Node)?\n";
	std::cout << "10. printList()\n";
	std::cout << "11. Exit Program\n";
}

void printEntireList(ListOfPerson * list)
{
	if (list->getGenesisNode() == nullptr)
	{
		std::cout << "The list is Empty!!!\n";
		return;
	}
	Node * node = list->getGenesisNode();
	for (int i = 1; i <= list->getSize(); i += 1)
	{
		if (i == 1)
		{
			std::cout << "####### List of Persons ###########\n";
			std::cout << "Index: " << list->getGenesisNode()->getIndex() << "\n";
			std::cout << "Name:  " << list->getGenesisNode()->getPerson()->getName() << "\n";
			std::cout << "Age:   " << list->getGenesisNode()->getPerson()->getAge() << "\n";
			std::cout << "===================================\n";
		}
		else
		{
			node = node->getNextNode();
			std::cout << "Index: " << node->getIndex() << "\n";
			std::cout << "Name:  " << node->getPerson()->getName() << "\n";
			std::cout << "Age:   " << node->getPerson()->getAge() << "\n";
			std::cout << "===================================\n";
		}
	}
}