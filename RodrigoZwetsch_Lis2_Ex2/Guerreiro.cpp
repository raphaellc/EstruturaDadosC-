#include "Guerreiro.h"
#include "string.h"

Guerreiro::Guerreiro()
{
	força = 10;
	dano = 20;
	vida = 200;
	estamina = 150;
	mana = 30;
	defesa = 50;
}

Guerreiro::~Guerreiro()
{
}

int Guerreiro::getForça()
{
	return força;
}

int Guerreiro::getDano()
{
	return dano;
}

int Guerreiro::getVida()
{
	return vida;
}

int Guerreiro::getEstamina()
{
	return estamina;
}

int Guerreiro::getMana()
{
	return mana;
}

int Guerreiro::getDefesa()
{
	return defesa;
}

void Guerreiro::andar()
{
	std::cout << "Ando um metro." << std::endl;
}

void Guerreiro::pular()
{
	std::cout << "Pulou." << std::endl;
}

void Guerreiro::Atacar()
{
	std::cout << "Atacou e causou " << dano << " de dano." << std::endl;
}

void Guerreiro::Defender()
{
	std::cout << "Defendeu um ataque e levou " << (20*10)/ defesa << " de dano." << std::endl;
}

void Guerreiro::Falar()
{
	std::cout << "Você falou algo que idiota." << std::endl;
}

void Guerreiro::Dados()
{
	std::cout << "Força: " << getForça() << std::endl;
	std::cout << "Dano: " << getDano() << std::endl;
	std::cout << "Vida: " << getVida() << std::endl;
	std::cout << "Estamina: " << getEstamina() << std::endl;
	std::cout << "Mana: " << getMana() << std::endl;
	std::cout << "Defesa: " << getDefesa() << std::endl << std::endl;
}
