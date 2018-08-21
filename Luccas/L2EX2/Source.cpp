#include <iostream>
#include "Warrior.h"
#include "Mage.h" 
#include "Cleric.h"
#include "Rogue.h"
#include "Ranger.h"
#include "Bard.h"
#include "Barbarian.h"
#include "Paladin.h"
#include "DarkPriest.h"
#include "LightPriest.h"


int main() {

setlocale(LC_ALL, "ptb");

	Warrior Bizi;
	Bizi.correr();
	Bizi.bloquear();
	Bizi.atacar();
	Bizi.esquivar();
	Bizi.descansar();

	Mage Arog;
	Arog.lançarboladefogo();

	Cleric Frey;
	Frey.rezar();

	Rogue Will;
	Will.furtar();

	Ranger Halt;
	Halt.atirar();

	Bard Liam;
	Liam.tocar();

	Barbarian Rolo;
	Rolo.enfurecer();

	Paladin Uter;
	Uter.curar();

	DarkPriest Marn;
	Marn.enfeitiçar();

	LightPriest Norm;
	Norm.iluminar();
	
	
	system("pause");
	return 0;
}