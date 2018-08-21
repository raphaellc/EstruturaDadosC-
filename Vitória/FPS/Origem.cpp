#include<iostream>
#include"Atirador.h"


using namespace std;

int main() {
	Atirador atira;
	atira.atirar();
	atira.escudo();
	atira.medkit();
	atira.trocar_arma();

	system("pause");
	return 0;
}