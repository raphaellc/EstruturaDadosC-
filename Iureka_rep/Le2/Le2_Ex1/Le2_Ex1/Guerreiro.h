/*Você precisa desenvolver um RPG e neste jogo é necessário criar uma classe guerreiro. Defina os
atributos que caracterizam um guerreiro (mínimo 5 e no máximo 10) e uma coleção de
comportamentos (mínimo 5). A implementação destes métodos pode ser feita de forma
simplificada, por exemplo, escrevendo alguma mensagem no console.*/
#include <iostream>
#include <string>
#pragma once
//using namespace std;

class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	
	void atacar();
	void pular();
	void amedrontar();
	void curar();
	void defender();


protected:
	int forca, stamina, vida, pocoes;
	std::string nome;
	
};

