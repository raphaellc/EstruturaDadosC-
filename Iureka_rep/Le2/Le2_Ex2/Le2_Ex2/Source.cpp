/*Modifique a solução do problema 1 de forma a contemplar as seguintes classes: clérigo, mago,
ladino, sacerdote da luz, sacerdote das trevas, bardo, bárbaro, paladino e ranger. Procure
primeiramente agrupar estas classes por características comuns e na fase de projeto organize uma
árvore hierárquica para auxiliá-lo na criação das classes base e derivadas. Se precisares de
informações sobre estas classes consulte à Internet.PersonagemMago                                               Ladino  Bardo  Bárbaro  Paladino  RangerClérigo  sacerdote da luz  sacerdote das trevas*/#include"Barbaro.h"
#include"Bardo.h"
#include"Clerigo.h"
#include"Ladino.h"
#include"Paladino.h"
#include"Ranger.h"
#include"SacerdoteLuz.h"
#include"SacerdoteTrevas.h"
#include"Mago.h"

int main()
{
	Barbaro barbaro;
	barbaro.amedrontar();
	barbaro.atacar();
	barbaro.pular();
	barbaro.defender();
	barbaro.curar();
	barbaro.murroNaCara();

	std::cout << std::endl;

	Bardo bardo;
	bardo.amedrontar();
	bardo.atacar();
	bardo.pular();
	bardo.defender();
	bardo.curar();
	bardo.musica();

	std::cout << std::endl;

	Ladino ladino;
	ladino.amedrontar();
	ladino.atacar();
	ladino.pular();
	ladino.defender();
	ladino.curar();
	ladino.furto();
	
	std::cout << std::endl;

	Ranger ranger;
	ranger.amedrontar();
	ranger.atacar();
	ranger.pular();
	ranger.defender();
	ranger.curar();
	ranger.flechada();

	std::cout << std::endl;

	Paladino paladino;
	paladino.amedrontar();
	paladino.atacar();
	paladino.pular();
	paladino.defender();
	paladino.curar();
	paladino.sacrificio();

	std::cout << std::endl;

	Mago mago;
	mago.amedrontar();
	mago.atacar();
	mago.pular();
	mago.defender();
	mago.curar();
	mago.magia();

	std::cout << std::endl;

	Clerigo clerigo;
	clerigo.amedrontar();
	clerigo.atacar();
	clerigo.pular();
	clerigo.defender();
	clerigo.curar();
	clerigo.magia();
	clerigo.curarOutro();

	std::cout << std::endl;

	SacerdoteLuz sacLuz;
	sacLuz.amedrontar();
	sacLuz.atacar();
	sacLuz.pular();
	sacLuz.defender();
	sacLuz.curar();
	sacLuz.magia();
	sacLuz.iluminar();

	std::cout << std::endl;
	
	SacerdoteTrevas sacTrevas;
	sacTrevas.amedrontar();
	sacTrevas.atacar();
	sacTrevas.pular();
	sacTrevas.defender();
	sacTrevas.curar();
	sacTrevas.magia();
	sacTrevas.buracoNegro();


	system("pause");
	return 0;
}