#include "stdafx.h"
#include "Guerreiro.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

Guerreiro::Guerreiro()
{
	
	Escudo = true;
	Espada = true;

	cout << "Nome: " << endl;
	cin >> Nome;

	cout << "Idade: " << endl;
	cin >> Idade;

	
}


Guerreiro::~Guerreiro()
{

}

string Guerreiro::getNome()
{
	
	cout << "O guerreiro chama-se: " << Nome << endl;

	return Nome;
}

int Guerreiro::getIdade()
{
	
	cout << "O guerreiro tem  " << Idade << " anos de combate";
	if (Idade > 15 && Idade < 55 ) {
		cout << " e melhor correr!!!" << endl;
	}
	else if (Idade < 55) {
		cout << "O guerreiro e velho mas ainda pode ti matar!!!" << endl;
	}
	else {
		cout << "O guerreiro e pequeno mas ainda pode ti matar!!! " << endl;
	}


	return Idade;
}

void Guerreiro::Ataque()
{
	cout << "Atacando!!!" << endl;
}

void Guerreiro::Andar()
{
	cout << "Andando!!!" << endl;
}

void Guerreiro::Falar()
{
	cout << "Falando!!!" << endl;
}

void Guerreiro::Curar()
{
	cout << "Curando!!!" << endl;
}

void Guerreiro::Equipamentos()
{

	cout << "Equipamentos" << endl;

	if (Escudo == true) {
		cout << "O guerreiro possui um escudo!" << endl;
	}
	else {
		cout << "O guerreiro esta sem protecao!" << endl;
	}

	if (Espada == true) {
		cout << "O guerreiro possui uma Espada!" << endl;
	}
	else {
		cout << "O guerreiro esta desarmado!" << endl;
	}
}

