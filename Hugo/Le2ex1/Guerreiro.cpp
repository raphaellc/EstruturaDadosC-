#include "Guerreiro.h"
#include<iostream>
using namespace std;
Guerreiro::Guerreiro()
{
	nome = "Alpargatto Despacito";
	vida = 100;
	stamina = 100;
	forca = 250;
	velocidade = 50;
}
Guerreiro::~Guerreiro()
{
}
void Guerreiro::andar()
{
	cout << "Eu andei" << endl;
}
void Guerreiro::atacar()
{
	cout << "Toma essa seu patife" << endl;
}
void Guerreiro::defender()
{
	cout << "Defender-me-ei!!!" << endl;
}
void Guerreiro::falar()
{
	cout << "BONDIA!!" << endl;
}
void Guerreiro::pular()
{
	cout << "Eu gosto de pular" << endl;
}