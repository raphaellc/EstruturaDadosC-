#include <iostream>
#include "Guerreiro.h"

int main() {
	Guerreiro Caesar(1, 1, 2, 10, 10, 5, 2);
	Caesar.ataque(Caesar.getArma, Caesar.getEstLuta, Caesar.getEscLuta,
		          Caesar.getForca, Caesar.getDextreza);
	system("pause");
	return 0;

}