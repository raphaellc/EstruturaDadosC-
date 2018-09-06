#include <iostream>
#include <string>
#include "People.h"
#include "Miserable.h"
#include "Pobre.h"
#include "Rich.h"


int main()
{
	People *people = new People("Pessoa", 30);
	people->justBe();

	Miserable *miserable = new Miserable("Miseravel", 50);
	miserable->beg();

	Pobre *pobre = new Pobre("Pobre", 20);
	pobre->work();

	Rich *rich = new Rich("Rich", 60);
	rich->goShopping();



	system("pause");
	return 0;
}