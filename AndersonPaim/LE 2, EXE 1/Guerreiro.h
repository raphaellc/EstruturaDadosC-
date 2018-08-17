#pragma once
#include <string>
#include <iostream>

using namespace std;

class Guerreiro
{


public:
	Guerreiro();
	~Guerreiro();

	string getNome();
	int getIdade();
	bool Escudo;
	bool Espada;
	void Equipamentos();
	void Ataque();
	void Andar();
	void Falar();
	void Curar();

protected:

	string Nome;
	int Idade;





};

/*

2. Modifique a solução do problema 1 de forma a contemplar as seguintes classes: clérigo, mago,
ladino, sacerdote da luz, sacerdote das trevas, bardo, bárbaro, paladino e ranger. Procure
primeiramente agrupar estas classes por características comuns e na fase de projeto organize uma
árvore hierárquica para auxiliá-lo na criação das classes base e derivadas. Se precisares de
informações sobre estas classes consulte à Internet.

*/