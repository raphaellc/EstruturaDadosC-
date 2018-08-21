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

	Warrior Brandili;
	Brandili.run();
	Brandili.block();
	Brandili.attack();
	Brandili.dodge();
	Brandili.rest();

	Mage Rabbit;
	Rabbit.castarcane();

	Cleric Malafaia;
	Malafaia.prayandpay();

	Rogue Shaw;
	Shaw.backstab();

	Ranger JakePaul;
	JakePaul.barrage();

	Bard Bibi;
	Bibi.play();

	Barbarian Klin;
	Klin.berserk();

	Paladin Jesus;
	Jesus.protect();

	DarkPriest Tigor;
	Tigor.charm();

	LightPriest LoganPaul;
	LoganPaul.massheal();
	
	
	system("pause");
	return 0;
}