#include "Carabina.h"



Carabina::Carabina()
{
	capacidade = 5;
	potencia = 40;
}


Carabina::~Carabina()
{
}

void Carabina::atirar()
{
	{
		if (capacidade > 0) {
			cout << "Piu Piu!! Voce atirou com a carabina e deu " << potencia << " de dano" << endl;
			capacidade = capacidade - 1;
		}
		else {
			cout << "Recarregue a arma" << endl;
		}
	}
}

void Carabina::recarregar()
{
	std::cout << "Voce recarregou com";
	Carabina_muni();
}
