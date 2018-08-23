#include "Atirador.h"

Atirador::Atirador()
{
}

Atirador::~Atirador()
{
}

void Atirador::atirar()
{
	int arma;
	cout << "Escolha uma arma: 1=Pistola,2=Carabina e 3=Rifle\n";
	cin >> arma;

	if (arma == 1) {
		pistol.atirar();
	}
	else if (arma == 2) {
		carabina.atirar();
	}
	else {
		rifle.atirar();
	}

	cout << endl;

	char rec;
	cout << "Pressione R para recarregar.\n";
	cin >> rec;

	if ((rec ='r')||(rec='R')) {

		cout << "Recarregando...\n";
		if (arma == 1) {
			pistol.recarregar();
		}
		else if (arma == 2) {
			carabina.recarregar();
		}
		else {
			rifle.recarregar();
		}
	}
}

void Atirador::medkit()
{
	
	MedKit();
}

void Atirador::escudo()
{
	cout << endl;
	Armadura ();
}

void Atirador::trocar_arma()
{
	cout << endl;
	int arma;
	cout << "Escolha outra arma: 1=Pistola,2=Carabina e 3=Rifle\n";
	cin >> arma;

	cout << endl;

	if (arma == 1) {
		cout << "Voce trocou para a Pistola\n\n";
	}
	else if (arma == 2) {
		cout << "Voce trocou para a Carabina\n\n";
	}
	else if(arma==3){
		cout << "Voce trocou para o Rifle\n\n";
	}
	else {
		cout << "Essa arma nao existe\n\n";
	}
}
