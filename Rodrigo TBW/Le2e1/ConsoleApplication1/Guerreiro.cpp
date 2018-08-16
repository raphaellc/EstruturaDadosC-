#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::SetLevel(int xp)
{

	level = xp;

}

void Guerreiro::SetSexo(char sex)
{
	sexo = sex;
}

void Guerreiro::SetDextresa(int dex)
{
	dextresa = dex;
}

void Guerreiro::SetNome(string nomes)
{
	nome = nomes;
}

void Guerreiro::SetAltura(float tamanho)
{
	altura = tamanho;
}

void Guerreiro::SetVida(int lifePoints)
{
	vida = lifePoints;
}

void Guerreiro::Atacar()
{
	float dano = (5 * level) * (dextresa / 5);

	cout << "voce atocou com um dano de: " << dano << endl;

}

void Guerreiro::UsarArco()
{

	if (dextresa >= 15) {

		cout << "Voce equipou o arco" << endl;

	}
	else
	{

		cout << "Voce nao consegue equipar o arco!" << endl;

	}


}

int Guerreiro::MostrarLevel()
{
	cout << "O seu level é: " << level << endl;

	return level;
}

string Guerreiro::MostrarNome()
{

	cout << "seu nome é: " << nome << endl;

	return nome;
}

bool Guerreiro::Vivo()
{
	if (vida > 0) {

		cout << "Voce esta vivo" << endl;

		return true;

	}
	else
	{
		cout << "Voce esta morto" << endl;
		return false;
	}

}
