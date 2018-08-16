#pragma once
#include <string>
using namespace std;
class Guerreiro
{
private:
	string nome;
	int vida;
	int stamina;
	int forca;
	int velocidade;
public:
	Guerreiro();
	~Guerreiro();
	void andar();
	void atacar();
	void defender();
	void falar();
	void pular();
};