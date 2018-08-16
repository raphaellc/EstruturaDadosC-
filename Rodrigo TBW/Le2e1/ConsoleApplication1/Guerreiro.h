#pragma once
#include <iostream>
#include<string>


using namespace std;

class Guerreiro
{
protected:
	
	int level;
	int dextresa;
	char sexo;
	string nome;
	float altura;
	int vida;

public:
	
	Guerreiro();
	~Guerreiro();
	void SetLevel(int xp);
	void SetSexo(char sex);
	void SetDextresa(int dex);
	void SetNome(string nomes);
	void SetAltura(float tamanho);
	void SetVida(int lifePoints);
	void Atacar();
	void UsarArco();
	int MostrarLevel();
	string MostrarNome();
	bool Vivo();

};

