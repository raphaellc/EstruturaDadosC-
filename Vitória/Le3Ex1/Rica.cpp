#include "Rica.h"
#include<iostream>



Rica::Rica()
{
	nome = "Hugo";
	dinheiro = 100000;
}


Rica::~Rica()
{
}

void Rica::fazCompras()
{
	cout << nome << " comprou uma ilha e possui " << dinheiro << " nasua conta bancaria\n";

}
