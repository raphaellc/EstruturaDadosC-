#include "Pistola.h"

Pistola::Pistola()
{
	capacidade = 15;
	potencia = 20;

}

Pistola::~Pistola()
{
}

void Pistola::recarregar()
{
	cout << "Voce recarregou com";
	Pistola_muni();
}

void Pistola::atirar()
{
	if (capacidade > 0) {
		cout << "Piu Piu!! Voce atirou com a pistola e deu "<<potencia<<" de dano" << endl;
		capacidade = capacidade - 1;
	}
	else {
		cout << "Recarregue a arma" << endl;
	}
}
