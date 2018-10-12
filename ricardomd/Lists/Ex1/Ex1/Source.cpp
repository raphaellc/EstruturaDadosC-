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
			std::cin >> index;
			list->insertAt(new Node(name, age), index);
			break;
		case 3:
			list->removeLast();
			break;
		case 4:
			list->eraseList();
			break;
		case 5:
			printEntireList(list);
			break;
		case 6:
			exit = true;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}

void printMenu()
{
	std::cout << "1. Add a new person to the end of the list\n";
	std::cout << "2. Add a new person to a specific position\n";
	std::cout << "3. Remove last person of the list\n";
	std::cout << "4. Erase the entire list\n";
	std::cout << "5. Print the entire List\n";
	std::cout << "6. Exit Program\n";
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