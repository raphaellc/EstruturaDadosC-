#include "Rifle.h"



Rifle::Rifle()
{
	capacidade = 30;
	potencia = 30;
}


Rifle::~Rifle()
{
}

void Rifle::atirar()
{
	{
		if (capacidade > 0) {
			cout << "Piu Piu!! Voce atirou com o rifle e deu " << potencia << " de dano" << endl;
			capacidade = capacidade - 1;
		}
		else {
			cout << "Recarregue a arma" << endl;
		}
	}
}

void Rifle::recarregar()
{
	std::cout << "Voce recarregou com";
	Rifle_Muni();
}
