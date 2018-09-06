#include <iostream>
#include <string>

#include "ticket.h"
#include "Inferior.h"
#include "Superior.h"
#include "Normal.h"

int main()
{
	ticket *baseTicket = new ticket();
	Normal *normalTicket = new Normal();
	Inferior *inferiorTicket = new Inferior();
	Superior *superiorTicket = new Superior();

	std::cout << "Method of Ticket class: ";
	baseTicket->printValue();
	std::cout << "Method of NormalTicket class: ";
	normalTicket->printValue();
	std::cout << "Method of InferiorTicket class: ";
	inferiorTicket->getLocation();
	std::cout << "Method of SuperiorTicket class: ";
	superiorTicket->printSuperiorValue();


	system("pause");
	return 0;
}