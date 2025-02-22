// le2-ex2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream> 
#include "Guerreiro.h"  
#include "Mago.h" 
#include "SacerdoteDaLuz.h"
#include <ctime>
#include "SacerdoteDasTrevas.h"
#include "Clerigo.h"
#include "Bardo.h"
#include "Ladino.h"
#include "Barbaro.h"
#include "Paladino.h"
#include "Ranger.h"
using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese"); // usando gramatica do BR. 
	Guerreiro* Torb = new Guerreiro(); 

	

	 cout << "PERSONAGEM: GUERREIRO" << endl;
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

	 cout << "Estilo de Jogo:  " << Torb->getEstilo("Matador") << endl;
	  cout << "Torb:" << endl;
	   Torb->coment8();
	    cout << "-----------------" << endl;

	 cout << "Torb:" << Torb->provocar("Ei seu fracote!") << endl;
	   cout << "-----------------" << endl;

	   cout << "Nível: " << endl;
	Torb->lvl();
	
	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;

	////////////////////////////PARTEMAGO//////////// 

	Mago* Magao = new Mago();

	cout << "PERSONAGEM: MAGO" << endl;
	cout << endl;
	cout << "Nome do Mago: " << Magao->getNome("AKADUSH") << endl;
	cout << "Estilo: " << Magao->getEstilo("Fogoso") << endl;
	cout << "Sexo: " << Magao->getSexo("Masculino") << endl;
	Magao->Magia();
	cout << "Poder Supremo: "<< Magao->poderSupremo("Bolas de Fogo.") << endl;
	cout << "Provocação: " << Magao->provocacao("A morte se aproxima!") << endl;
	cout << "HP:" << endl;
	Magao->getHP();
	cout << "Nível: ";
	Magao->lvlM();

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	////////////////////PARTE SACERDOTE DA LUZ/////////////////

	SacerdoteDaLuz* sdl = new SacerdoteDaLuz();

	cout << "Nome do Mago(Sacerdote da Luz se enquadra em Mago): " << sdl->getNome("Amilienka") << endl;
	cout << "Estilo: " << sdl->getEstilo("Elétrico") << endl;
	cout << "Sexo: " << sdl->getSexo("Feminino") << endl;
	sdl->bastao();
	cout << "Poder Supremo: " << sdl->poderSupremo("Trovão, Raios...!") << endl;
	cout << "HP:" << endl;
	sdl->getHP();
	cout << "Provocação: " << sdl->provocacao("Lute cara a cara seu covarde!") << endl;
	cout << "Nível: ";
	sdl->lvlM();
	
	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	////////////////////PARTE SACERDOTE DAS TREVAS/////////////////

	SacerdoteDasTrevas* sdt = new SacerdoteDasTrevas();

	cout << "Nome do Mago(Sacerdote das Trevas se enquadra em Mago): " << sdt->getNome("Heinkenvald") << endl;
	cout << "Estilo: " << sdt->getEstilo("LOKO") << endl;
	cout << "Sexo: " << sdt->getSexo("Masculino") << endl;
	cout << "Poder Supremo: " << sdt->poderSupremo("Suga as almas!") << endl;
	cout << "HP:" << endl;
	sdl->getHP();
	cout << "Provocação: " << sdt->provocacao("MORRAM!MORRAM!!") << endl;
	cout << "Nível: ";
	sdt->lvlM();
	cout << "Aviso: " << endl;
	sdt->sugador();

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	////////////////////PARTE CLÉRIGO = MAGO/////////////////

	Clerigo* clerigo = new Clerigo();

	cout << "Nome do Mago(Clérigo se enquadra em Mago): " << clerigo->getNome("Deus") << endl;
	cout << "Estilo: " << clerigo->getEstilo("Calmo") << endl;
	cout << "Sexo: " << clerigo->getSexo("Masculino") << endl;
	clerigo->poderDivino();
	cout << "HP:" << endl;
	clerigo->getHP();
	cout << "Nível: ";
	clerigo->lvlM();

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	////////////////////PARTE Bardo = MAGO/////////////////

	Bardo* brd = new Bardo();

	cout << "Nome do Mago(Bardo se enquadra em Mago): " << brd->getNome("Zafira") << endl;
	cout << "Estilo: " << clerigo->getEstilo("Calma") << endl;
	cout << "Sexo: " << clerigo->getSexo("Feminino") << endl;
	cout << "Poder Supremo: " << brd->poderSupremo("Sua barra de vida aumenta!") << endl;
	brd->poder();
	cout << "HP:" << endl;
	brd->getHP();
	cout << "Nível: ";
	brd->lvlM();

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	//////////////////PARTE LADINO //////////////////////

	Ladino* ldn = new Ladino();

	cout << "Nome do Guerreiro(Ladino se enquadra em guerreiro): " << ldn->getNome("Zakias") << endl;
	cout << "Idade: " << ldn->getIdade(22) << endl;
	cout << "Cor do Cabelo: " << ldn->getCor("Cabelo Castanho") << endl;
	cout << "Armamento: " << ldn->getArma("Adaga") << endl;
	cout << "Altura: " << ldn->getTamanhoArm(1.8) << endl;
	cout << "Sexo: " << ldn->getSexo("Masculino") << endl;
	cout << "Estilo de Jogo:  " << ldn->getEstilo("Sneak") << endl;
	cout << "Nível: " << endl;
	ldn->lvl();
	cout << "Provocação: " << ldn->provocar("Eu vejo você, mas você não me vê.") << endl;

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	//////////////////PARTE BARBARO //////////////////////

	Barbaro* barb = new Barbaro();
	
	barb->setinimigo("Inimigo: Ladino");
	cout << "Nome do Guerreiro(Barbaro se enquadra em guerreiro): " << barb->getNome("Torvald") << endl;
	cout << "Idade: " << barb->getIdade(46) << endl;
	cout << "Cor do Cabelo: " << barb->getCor("Cabelo Ruivo") << endl;
	cout << "Armamento: " << barb->getArma("Espada de Duas Mãos") << endl;
	cout << "Altura: " << barb->getTamanhoArm(2.0) << endl;
	cout << "Sexo: " << barb->getSexo("Masculino") << endl;
	cout << "Estilo de Jogo:  " << barb->getEstilo("Matador") << endl;
	cout << "Nível: " << endl;
	ldn->lvl();
	cout << "Provocação: " << barb->provocar("Se está na minha frente. Está MORTO!") << endl;
	cout << barb->getInimigo() << endl;

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	//////////////////PARTE PALADINO //////////////////////

	Paladino* pala = new Paladino();

	pala->setFacanhas("Matou sozinho um exército de 500 mil homens.");
	cout << "Nome do Guerreiro(Paladino se enquadra em guerreiro): " << pala->getNome("Paladins") << endl;
	cout << "Idade: " << pala->getIdade(30) << endl;
	cout << "Cor do Cabelo: " << pala->getCor("Cabelo Loiro") << endl;
	cout << "Armamento: " << pala->getArma("Espada") << endl;
	pala->vesti();
	cout << "Altura: " << pala->getTamanhoArm(2.0) << endl;
	cout << "Sexo: " << pala->getSexo("Masculino") << endl;
	cout << "Estilo de Jogo:  " << pala->getEstilo("Justiceiro") << endl;
	cout << "Nível: " << endl;
	ldn->lvl();
	cout << "Provocação: " << pala->provocar("Por mim, nada paçaras!") << endl;
	cout << pala->getFacanhas() << endl;

	cout << endl;
	cout << endl;
	cout << "/------------------------------------------------------------------------------------------------------------------------------------------------------------------/" << endl;
	cout << endl;
	cout << endl;
	//////////////////PARTE RANGER //////////////////////

	Ranger* rang = new Ranger();
	rang->setAmor("Amor: NATUREZA.");
	cout << "Nome do Guerreiro(Paladino se enquadra em guerreiro): " << rang->getNome("Arvolero") << endl;
	cout << "Idade: " << rang->getIdade(18) << endl;
	cout << "Cor do Cabelo: " << rang->getCor("Careca") << endl;
	cout << "Armamento: " << rang->getArma("Arco") << endl;
	cout << "Altura: " << rang->getTamanhoArm(1.7) << endl;
	cout << "Sexo: " << rang->getSexo("Masculino") << endl;
	cout << "Estilo de Jogo:  " << rang->getEstilo("Defensor") << endl;
	cout << rang->getAmor() << endl;
	cout << "Nível: " << endl;
	ldn->lvl();
	cout << "Provocação: " << rang->provocar("Sinta a Fúria da natureza!") << endl;

	system("pause");
	return 0;

}