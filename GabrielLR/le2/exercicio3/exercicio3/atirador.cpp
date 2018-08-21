#include "atirador.h"

atirador::atirador()
{
}

atirador::~atirador()
{
}

void atirador::usarKit()
{
	hp.~kitMedico();
}

void atirador::disparar()
{
	int escolha;
	std::cout << "Com qual arma quer disparar?\n"
		         "1. Pistola, 2. Carabina, 3. Rifle" << std::endl;
	std::cin >> escolha;

	if (escolha == 1) 
	{
		this->_9mm.recarregar();
		this->_9mm.atirar(this->_9mm.getPower());
	}
	else if (escolha == 2) 
	{
		this->carabina.recarregar();
		this->carabina.atirar(this->carabina.getPower());
	}

	else if (escolha == 3) 
	{
		this->rifle.recarregar();
		this->rifle.atirar(this->rifle.getPower());
	}

}

void atirador::vestir()
{
	shield.status();
}
