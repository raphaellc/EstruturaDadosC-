#include "Guerreiro.h"

int main()
{
	Guerreiro WAraghas;

	WAraghas.SetLevel(10);
	WAraghas.SetAltura(1.75f);
	WAraghas.SetNome("Araghas");
	WAraghas.SetSexo('M');
	WAraghas.SetVida(0);
	WAraghas.SetDextresa(20);

	WAraghas.Atacar();
	WAraghas.MostrarLevel();
	WAraghas.MostrarNome();
	WAraghas.UsarArco();
	WAraghas.Vivo();

	system ("pause");

	return 0;
}