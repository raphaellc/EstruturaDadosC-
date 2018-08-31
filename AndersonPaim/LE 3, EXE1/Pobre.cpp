#include "stdafx.h"
#include "Pobre.h"


Pobre::Pobre()
{
	nome_ = "Anderson Pobre";
	idade_ = 20;
	dinheiro_ = 1000;

}


Pobre::~Pobre()
{
}

void Pobre::trabalha()
{
	cout << dinheiro_ << endl;
	cout << "Insira D para trabalhar e ganhar dinheiro" << endl;
	cin >> D;
	if (D == 'D' || 'd') {
		dinheiro_ += 200;
		cout << "Dinheiro:" << dinheiro_ << endl;
	
	}

}
