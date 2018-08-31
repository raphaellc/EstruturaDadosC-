#include "stdafx.h"
#include "Miseravel.h"


Miseravel::Miseravel()
{
	nome_ = "Anderson Miseravel";
	idade_ = 21;
	dinheiro_ = 10;
}


Miseravel::~Miseravel()
{
}

void Miseravel::mendiga()
{
	cout << "Voce tem " << dinheiro_ << " Reais:" << endl;
	cout << "Digite M para mendigar!!!" << endl;
	cin >> M;

	if (M == 'M' || 'm') {
		dinheiro_ += 10;
		cout << "Dinheiro:" << dinheiro_ << endl;
	}


}
