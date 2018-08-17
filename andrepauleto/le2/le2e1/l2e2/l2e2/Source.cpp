#pragma once;

#include <string>
#include <iostream>
#include <locale.h>
#include "Clerigo.h"
#include "Mago.h"
#include "SacerdoteLuz.h"
#include "SacerdoteTrevas.h"
#include "Bardo.h"
#include "Barbaro.h"
#include "Ranger.h"
#include "Ladino.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	Clerigo* clerigo = new Clerigo();
	clerigo->getStatus();
	clerigo->andar();
	clerigo->pular();
	clerigo->defender();
	clerigo->esquivar();
	clerigo->atacar();
	clerigo->curar();

	std::cout << "\n";

	Mago* mago = new Mago();
	mago->getStatus();
	mago->andar();
	mago->pular();
	mago->defender();
	mago->esquivar();
	mago->atacar();
	mago->lancarMeteoro();

	std::cout << "\n";

	SacerdoteLuz* sacerdoteLuz = new SacerdoteLuz();
	sacerdoteLuz->getStatus();
	sacerdoteLuz->andar();
	sacerdoteLuz->pular();
	sacerdoteLuz->defender();
	sacerdoteLuz->esquivar();
	sacerdoteLuz->atacar();
	sacerdoteLuz->lancarMagiaLuz();

	std::cout << "\n";

	SacerdoteTrevas* sacerdoteTrevas = new SacerdoteTrevas();
	sacerdoteTrevas->getStatus();
	sacerdoteTrevas->andar();
	sacerdoteTrevas->pular();
	sacerdoteTrevas->defender();
	sacerdoteTrevas->esquivar();
	sacerdoteTrevas->atacar();
	sacerdoteTrevas->lancarMagiaTrevas();

	std::cout << "\n";

	Bardo* bardo = new Bardo();
	bardo->getStatus();
	bardo->andar();
	bardo->pular();
	bardo->defender();
	bardo->esquivar();
	bardo->atacar();
	bardo->tocarMusica();

	std::cout << "\n";

	Barbaro* barbaro = new Barbaro();
	barbaro->getStatus();
	barbaro->andar();
	barbaro->pular();
	barbaro->defender();
	barbaro->esquivar();
	barbaro->atacar();
	barbaro->enfurecer();

	std::cout << "\n";

	Ranger* ranger = new Ranger();
	ranger->getStatus();
	ranger->andar();
	ranger->pular();
	ranger->defender();
	ranger->esquivar();
	ranger->atacar();
	ranger->atirarComArco();

	std::cout << "\n";

	Ladino* ladino = new Ladino();
	ladino->getStatus();
	ladino->andar();
	ladino->pular();
	ladino->defender();
	ladino->esquivar();
	ladino->atacar();
	ladino->ficarInvisivel();

	std::cout << "\n";

	system("pause");
	return 0;
}