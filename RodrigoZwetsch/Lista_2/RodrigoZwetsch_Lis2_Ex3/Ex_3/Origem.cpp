#include "Atirador.h"
#include "Kit_Medico.h"
#include <iostream>

int main()
{
	Atirador Terrorista;

	Terrorista.Curar();
	Terrorista.Proteger();

	// Pistola
	Terrorista.Usar_Arma();
	Terrorista.Trocar_Arma();

	// Carabina
	Terrorista.Usar_Arma();
	Terrorista.Trocar_Arma();

	// Rifle
	Terrorista.Usar_Arma();
	Terrorista.Trocar_Arma();

	system("pause");
	return 0;
	// Vida baix 25
	// usar kit medico / vida = 75
	// usar kit medico / sem kit medico

	// armadura = 0
	// usar colete / colete = 100

	// Pistola 12 balas
	// Atira com pistola - 3 tiros
	// total de balas = 9
	// recarregar pistola / pistola 12 balar

	// Trocar arma

	// Carabina 32 balas
	// Atira com Carabina - 5 tiros
	// total de balas = 27
	// recarregar Carabina / Carabina 32 balar

	// Trocar arma

	// Rifel 10 balas
	// Atira com Rifel - 2 tiros
	// total de balas = 8
	// recarregar Rifel / Rifel 10 balar

}
