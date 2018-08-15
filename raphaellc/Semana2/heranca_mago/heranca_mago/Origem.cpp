#include <iostream>
#include "Druida.h"
using namespace std;
int main()
{
	Druida* drudoidao = new Druida();
	std::cout << drudoidao->getEscMagia() << std::endl;
	std::cout << drudoidao->getPoder() << std::endl;
	int hora = 420;
	if(hora == 420)
		drudoidao->getHigh();
	if (drudoidao->invocarMagia()) {
		std::cout << "invocandoMagiammm" << std::endl;
	}
	system("pause");
	return 0;
}