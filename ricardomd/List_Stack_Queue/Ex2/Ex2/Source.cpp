#include <iostream>
#include "List.h"

int main()
{
	List * list = new List();
	list->pushBack(new Node("ricardo", 32));
	list->pushBack(new Node("Daciolo", 45));
	list->pushBack(new Node("Andre", 19));
	list->popBack();
	std::cout << list->getSize() << "\n";

	system("pause");
	return 0;
}