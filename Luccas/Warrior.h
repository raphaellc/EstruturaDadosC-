#pragma once
#include <string>
class Warrior
{

public:
	Warrior();
	~Warrior();
	void correr();
	void bloquear();
	void atacar();
	void esquivar();
	void descansar();

private:
	int vida = 100;
	int stamina = 100;
	int escudo = 50;
	int idade = 31;
	std::string nome = "Bizi";
};