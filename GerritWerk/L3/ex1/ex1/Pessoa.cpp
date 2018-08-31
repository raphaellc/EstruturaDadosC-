#include "Pessoa.h"



Pessoa::Pessoa()
{
	nomeZinho = "Zé";
	idd = 22;

}


Pessoa::~Pessoa()
{
}

string Pessoa::nome()
{
	cout << nomeZinho << endl;
	return nomeZinho;
}

int Pessoa::idade()
{
	cout << idd << endl;
	return idd;
}
