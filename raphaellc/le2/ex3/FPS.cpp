//FPS
#include "Atirador.h"
#include <iostream>
using namespace std;
int main(){
	Atirador* atirador = new Atirador();
	char op;
	int arma;
	cout << "Controles\n";
	cout << "Pressione T para Atirar\n";
	cout << "Pressione R para Recarregar\n";
	cout << "Pressione E para usar o Kit Médico\n";
	cout << "Pressione 1, 2, 3 para trocar de armas\n";
	cout << "Pressione A para atirar \n";
	cout << "pressione S para sair \n";
	while (true) {
		cout << "Escolha a Arma! \n";
		cin >> arma;
		atirador->trocaArma(arma);
		cin >> op;
		cout << "\n";
		if (op == 't') {
			cout << "Atirando " << atirador->atira() << endl;
		}
		if (op == 's') break;
	}
	system("pause");
	return 0;
}