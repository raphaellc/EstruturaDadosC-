#include "Guerreiro.h"
#include "Paladino.h"
#include "Barbaro.h"
#include "Mago.h"
#include "Ladino.h"
#include "Bardo.h"
#include "Ranger.h"
#include "Sacerdote_Luz.h"
#include "Sacerdote_Trevas.h"
#include "Clerigo.h"




int main() {
	Guerreiro guerreiro;
	Paladino paladino;
	Barbaro barbaro;
	Mago mago;
	Bardo bardo;
	Ladino ladino;
	Ranger ranger;
	Sacerdote_Luz luz;
	Sacerdote_Trevas trevas;
	Clerigo clerigo;

	/*cout << "De o nome do paladino: ";
	cin >> paladino.nome;
	cout << "Nome: " << paladino.nome << endl;
	*/

	cout << "Guerreiro:\n";
	guerreiro.andar();
	guerreiro.pular();
	guerreiro.esconder();
	guerreiro.atacar(guerreiro.dano);
	guerreiro.defender();

	cout << "\nPaladino:\n";
	paladino.andar();
	paladino.pular();
	paladino.esconder();
	paladino.atacar(paladino.dano);
	paladino.defender();

	cout << "\nBarbaro:\n";
	barbaro.andar();
	barbaro.pular();
	barbaro.esconder();
	barbaro.atacar(barbaro.dano);
	barbaro.gritar();

	cout << "\nMago:\n";
	mago.andar();
	mago.pular();
	mago.esconder();
	mago.usarMagia(mago.dano);
	mago.defender();

	cout << "\nBardo:\n";
	bardo.andar();
	bardo.pular();
	bardo.esconder();
	bardo.atacar(bardo.dano);
	bardo.tocarMusica();
	

	cout << "\nLadino:\n";
	ladino.andar();
	ladino.pular();
	ladino.esconder();
	ladino.atacar(ladino.dano);
	ladino.roubar();

	cout << "\nRanger:\n";
	ranger.andar();
	ranger.pular();
	ranger.esconder();
	ranger.atirar(ranger.dano);
	ranger.defender();

	cout << "\nSacerdote da Luz:\n";
	luz.andar();
	luz.pular();
	luz.esconder();
	luz.atacar(luz.dano);
	luz.iluminar();

	cout << "\nSacerdote das Trevas:\n";
	trevas.andar();
	trevas.pular();
	trevas.esconder();
	trevas.atacar(trevas.dano);
	trevas.Assombrar();

	cout << "\nClerigo:\n";
	clerigo.andar();
	clerigo.pular();
	clerigo.esconder();
	clerigo.atacar(clerigo.dano);
	clerigo.curar();

	




	system("pause");
	return 0;
}