#pragma once 
#include <string> 
#include <iostream> 
using namespace std;
// GUERREIRO.h 

class Guerreiro
{
private:
	string provocac;

protected:

	//atributos 

	string nome;
	int idade;
	string corCabelo;
	string arma;
	float tamanhoArmadura;
	string sexo;
	string humor;
	string EstilodeGame;
	

public:



	Guerreiro(); // construtor. 
	~Guerreiro(); // destrutor. 



	  // metodos  

	string getNome(string n);
	void coment1();

	int getIdade(int d);
	void coment2();

	string getCor(string c);
	void coment3();

	string getArma(string a);
	void coment4();

	float getTamanhoArm(float arm);
	void coment5();

	string getSexo(string sex);
	void coment6();

	string getHumor(string h);
	void coment7();

	string getEstilo(string e);
	void coment8();

	string provocar(string pro);

	void lvl();

};