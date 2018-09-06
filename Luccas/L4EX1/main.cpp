#include "Jogo.h"
#include"Warlock.h"
#include"Druida.h"
int main(int argc, char* argv[])
{
	Jogo jogo;
	jogo.inicializar();
	jogo.executar();
	jogo.finalizar();
	
	return 0;
}