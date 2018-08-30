#include "Jogo.h"
#include"Ladrao.h"
#include"Guerreiro.h"
#include"Mago.h"
int main(int argc, char* argv[])
{
	Jogo jogo;
	jogo.inicializar();
	jogo.executar();
	jogo.finalizar();

	return 0;
}