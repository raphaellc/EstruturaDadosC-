#pragma once;
#include<string>
#include<iostream>
#include"Guerreiro.h"
#include"Barbaro.h"
#include"Bardo.h"
#include"Clerigo.h"
#include"Ladino.h"
#include"Mago.h"
#include"Paladino.h"
#include"Ranger.h"
#include"Sacerdote_da_Luz.h"
#include"Sacerdote_de_Trevas.h"

using namespace std;

int main() {

	Guerreiro Alpargatto;
	Alpargatto.andar();
	Alpargatto.atacar();
	Alpargatto.defender();
	Alpargatto.falar();
	Alpargatto.pular();

	Bardo Braulius;
	Braulius.Batuque_do_Mal();

	Clerigo Francisco;
	Francisco.MagiaCura();

	Barbaro Conan;
	Conan.MegaAtaquedoMachado();

	Ladino Wellington;
	Wellington.RoubarCarteira();

	Mago Morfeanor;
	Morfeanor.LancarMagia();

	Paladino Bolorio;
	Bolorio.ProtegerAliados();

	Ranger Fregor;
	Fregor.FlechadaNoJoelho();

	Sacerdote_da_Luz Yornham;
	Yornham.LuzAtordoante();

	Sacerdote_de_Trevas Sareniklo;
	Sareniklo.LevantarMortos();
	
	system("pause");
	return 0;
}