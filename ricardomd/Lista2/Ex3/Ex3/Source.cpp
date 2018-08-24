#include <iostream>
#include "Character.h"

int main()
{
	Character* hero = new Character();

	//Hero calls its inner object Rifle to shoot();
	hero->rifle.shoot();
	//Hero calls its inner object Rifle to shoot();
	hero->rifle.shoot();
	//Hero calls its inner object Rifle to shoot();
	hero->rifle.shoot();
	//Hero calls its inner object Rifle to shoot();
	hero->rifle.reload();
	//Hero calls rifle, rifle calls ammunition object to reaload();
	hero->rifle.shoot();
	//Hero calls its inner object Armor.
	hero->armor.lastStand();
	//Hero call its inner object Medkit.
	hero->medkit.heal();

	system("PAUSE");
	return 0;
}