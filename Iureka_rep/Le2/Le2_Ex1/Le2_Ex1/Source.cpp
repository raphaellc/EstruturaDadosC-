/*  Você precisa desenvolver um RPG e neste jogo é necessário criar uma classe guerreiro. Defina os
atributos que caracterizam um guerreiro (mínimo 5 e no máximo 10) e uma coleção de
comportamentos (mínimo 5). A implementação destes métodos pode ser feita de forma
simplificada, por exemplo, escrevendo alguma mensagem no console.  */
#include "Guerreiro.h"

int main()
{
	Guerreiro player;
	player.amedrontar();
	player.atacar();
	player.pular();
	player.defender();
	player.curar();
		
	system("pause");
	return 0;
}