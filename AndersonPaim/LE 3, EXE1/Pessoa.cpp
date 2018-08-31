#include "stdafx.h"
#include "Pessoa.h"


Pessoa::Pessoa()
{
	nome_ = "Anderson Paim";
	idade_ = 18;

}


Pessoa::~Pessoa()
{
}

string Pessoa::nome()
{
	cout << nome_ << endl;

	return string();
}

int Pessoa::idade()
{

	cout << idade_ << endl;

	return 0;
}
