#include "Guerreiro.h"

int main() {
	Guerreiro wr;

	
	int cond = wr.andar(1);
	if (cond == 1)
	{
		std::cout << "*caminhando*" << std::endl;
	}

	wr.pular();
	wr.defender();
	wr.espadada();

	system("pause");
	return 0;
}