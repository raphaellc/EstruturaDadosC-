// ex1-le2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//Lista - - - Ex 1;
//GUERREIRO.main
#include "pch.h" // isso aqui DEVE ser a mesma coisa que '#include "stdfax.h"', mas n tenho certeza.
#include <iostream>
#include "Guerreiro.h" 
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); // usando gramatica do BR.
	Guerreiro* Torb = new Guerreiro(); /* assim eu nunca usei o 'new' antes,
									   não sei se este é o melhor jeito de usar.*/
	     
	int lvl;
	srand(time(0));
	lvl = (rand() % 100) + 1;
	cout << "Nome do Guerreiro: " << Torb->getNome("Torb") << endl;
	 cout << "Torb:" << endl;
	  Torb->coment1();
	   cout << "-----------------" << endl;
	  
	cout << "Idade: " << Torb->getIdade(55) << endl;
	 cout << "Torb:" << endl;
	  Torb->coment2();
	   cout << "-----------------" << endl;

	cout << "Cor do Cabelo: " << Torb->getCor("Cabelo Loiro") << endl;
	 cout << "Torb:" << endl;
	  Torb->coment3();
	   cout << "-----------------" << endl;
	  
	cout << "Armamento: " << Torb->getArma("Mini-Machado") << endl;
	 cout << "Torb:" << endl;
	  Torb->coment4();
	   cout << "-----------------" << endl;
	   
	cout << "Altura: " << Torb->getTamanhoArm(1.4) << endl;
	 cout << "Torb:" << endl;
	  Torb->coment5();
	   cout << "-----------------" << endl;

	cout << "Sexo: " << Torb->getSexo("Masculino") << endl;
	 cout << "Torb:" << endl;
	  Torb->coment6();
	   cout << "-----------------" << endl;
	 
	cout << "Humor: " << Torb->getHumor("Pistola(Brabão)") << endl;
	 cout << "Torb:" << endl;
	  Torb->coment7();
	   cout << "-----------------" << endl;

	cout << "Estilo de Jogo:  " << Torb->getEstilo("Sneak") << endl;
	 cout << "Torb:" << endl;
	  Torb->coment8();
	   cout << "-----------------" << endl;

	  cout << "Torb:" << endl;
	    Torb->provocar();
		cout << "-----------------" << endl;

		cout << "Nível: " << lvl << endl;
		if(lvl < 50)
		{
			cout << "Você pode mais que isso!" << endl;
		}
		else
		{
			Torb->lvl();
		}
	system("pause");
	return 0;
}

