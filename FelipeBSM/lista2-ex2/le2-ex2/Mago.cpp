#include "pch.h"
#include "Mago.h"
#include <iostream> 
#include <ctime> 
using namespace std;

Mago::Mago()
{

}

Mago::~Mago()

{

}


string Mago::getNome(string name)
{
	nome = name;
	return nome;
}

string Mago::getEstilo(string est)
{
    Estilo = est;
	return Estilo;
}

void Mago::getHP()
{
	srand(time(0));
	int hpz = (rand() % 100) + 1;;
	if (hpz < 10)
	{
		cout << hpz << "%" << endl;
		cout << "STATUS: Vida MUITO BAIXA." << endl;
	}

	else if (hpz < 30)
	{
		cout << hpz << "%" << endl;
		cout << "STATUS: Vida BAIXA." << endl;
	}
	else if (hpz < 50)
	{
		cout << hpz << "%" << endl;
		cout << "STATUS: Vida MÉDIA." << endl;
	}
	else
	{
		cout << hpz << "%" << endl;
		cout << "STATUS: NÃO SE PREOCUPE." << endl;
	}

}

string Mago::provocacao(string prov)
{   
	provoca = prov;
	return provoca;
	
}

void Mago::Magia()
{
	cout << "Magia: Fogo." << endl;
}

string Mago::poderSupremo(string ps)
{
	poders = ps;
	return poders;
	
}

string Mago::getSexo(string sex)
{
	sexo = sex;
	return sexo;
}

void Mago::lvlM()
{
	srand(time(0));
	int nlv = (rand() % 200) + 2;
	if (nlv < 50)
	{
		cout << nlv << endl;
		cout << "Nível BAIXO." << endl;
	}
	else
	{
		cout << nlv << endl;
		cout << "Nível ALTO." << endl;
	}

}