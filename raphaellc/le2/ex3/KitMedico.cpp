#include "KitMedico.h"



KitMedico::KitMedico()
{
}


KitMedico::~KitMedico()
{
}

int KitMedico::usa(int vida)
{
	int nova_vida;
	//vida máxima é 100;
	if (vida < 100)
		if ((100 - vida) <= 10) {
			nova_vida = vida + (100 - vida);
			this->fatorCura -= (100 - vida);
		}
		else {
			nova_vida = vida + this->fatorCura;
			this->fatorCura = 0;
		}
	else
		return 100;
		return nova_vida;
			
}
