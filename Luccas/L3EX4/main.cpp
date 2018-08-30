#include "Jogo.h"
#include "Guerreiro.h"
#include "Mago.h"
#include "Ladino.h"


int main(int argc, char* argv[])
{
	Jogo jogo;
	jogo.inicializar();
	jogo.executar();
	jogo.finalizar();

	Personagem* classe[3];
		classe[0] = new Guerreiro();
		classe[1] = new Mago();
		classe[2] = new Ladino();

	
	return 0;
}