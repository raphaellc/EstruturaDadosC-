#include<iostream>
#include"Guerreiro.h"
#include"Clerigo.h"
#include"Bardo.h"
#include"Barbaro.h"
#include"Ladino.h"
#include"Paladino.h"
#include"Mago.h"
#include"Ranger.h"
#include"Sacerdote_Luz.h"
#include"Sacerdote_Negro.h"

int main() {
	Guerreiro guer;
	cout << "Guerreiro:" << endl;
	guer.andar();
	guer.falar();
	guer.atacar();
	guer.defender();
	cout << endl;

	Clerigo cle;

	cout << "Clerigo:" << endl;
	cle.andar();
	cle.falar();
	cle.atacar();
	cle.defender();
	cle.cura();
	cout << endl;

	Bardo bar;
	cout << "Bardo:" << endl;
	bar.andar();
	bar.falar();
	bar.atacar();
	bar.defender();
	bar.SomMortal();
	cout << endl;

	Barbaro barba;
	cout << "Barbaro:" << endl;
	barba.andar();
	barba.falar();
	barba.atacar();
	barba.defender();
	barba.SuperForca();
	cout << endl;
	
	Ladino lad;
	cout << "Ladino:" << endl;
	lad.andar();
	lad.falar();
	lad.atacar();
	lad.defender();
	lad.thief();
	cout << endl;

	Paladino pala;
	cout << "Paladino:" << endl;
	pala.andar();
	pala.falar();
	pala.atacar();
	pala.defender();
	pala.Abencoar();
	cout << endl;

	Mago ma;
	cout << "Mago:" << endl;
	ma.andar();
	ma.falar();
	ma.atacar();
	ma.defender();
	ma.Magia();
	cout << endl;

	Ranger ran;
	cout << "Ranger:" << endl;
	ran.andar();
	ran.falar();
	ran.atacar();
	ran.defender();
	ran.FlechadaNaCara();
	cout << endl;

	Sacerdote_Luz saL;
	cout << "Sacerdote da Luz:" << endl;
	saL.andar();
	saL.falar();
	saL.atacar();
	saL.defender();
	saL.Lumina();
	cout << endl;

	Sacerdote_Negro saN;
	cout << "Sacerdote Negro:" << endl;
	saN.andar();
	saN.falar();
	saN.atacar();
	saN.defender();
	saN.Darkside();
	cout << endl;


	system("pause");
	return 0;
}