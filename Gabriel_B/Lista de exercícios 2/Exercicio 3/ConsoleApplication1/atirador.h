#pragma once
#include "medikit.h"
#include "armadura.h"
#include "carabina.h"
#include "pistola.h"
#include "rifle.h"
#include "municaoc.h"
#include "municaop.h"
#include "municaor.h"


class atirador : public municaoc, public municaop, public municaor, public carabina, public pistola, public rifle, public armadura, public medikit

{
public:
	atirador();
	int Vida, Kits, Armadura;
	~atirador();
	int getVida(int Vid);
	int getArmadura(int Armadur);

	


};

