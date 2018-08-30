#include "Guerreiro.h"
#include "Clerigo.h"
#include "Mago.h"
#include "Ladino.h"
#include "sacerdote_da_luz.h"
#include "sacerdote_das_trevas.h"
#include "Bardo.h"
#include "Barbaro.h"
#include "Paladino.h"
#include "Ranger.h"


int main()
{
	Guerreiro Fred;

	setlocale(LC_ALL, "ptb");

	std::cout << "Guerreiro: Fred"<< std::endl << std::endl;

	Fred.Dados();

	Fred.andar();
	Fred.pular();
	Fred.Atacar();
	Fred.Defender();
	Fred.Falar();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Clerigo Paposo;

	std::cout << "Clerigo: Paposo"<< std::endl << std::endl;

	Paposo.Dados();

	Paposo.andar();
	Paposo.pular();
	Paposo.Atacar();
	Paposo.Defender();
	Paposo.Falar();
	Paposo.Cura();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Mago Megumim;

	std::cout << "Mago: Megumim" << std::endl << std::endl;

	Megumim.Dados();

	Megumim.andar();
	Megumim.pular();
	Megumim.Atacar();
	Megumim.Defender();
	Megumim.Falar();
	Megumim.EXPLOSION();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Ladino Raposo;

	std::cout << "Ladino: Raposo" << std::endl << std::endl;

	Raposo.Dados();

	Raposo.andar();
	Raposo.pular();
	Raposo.Atacar();
	Raposo.Defender();
	Raposo.Falar();
	Raposo.Apunhalada_das_sombras();
	Raposo.Roubar();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	sacerdote_da_luz Aqua;

	std::cout << "sacerdote da luz: Aqua" << std::endl << std::endl;

	Aqua.andar();
	Aqua.pular();
	Aqua.Atacar();
	Aqua.Defender();
	Aqua.Falar();
	Aqua.Purificacao();
	

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	sacerdote_das_trevas Ainz;

	std::cout << "sacerdote das trevas: Ainz Ooal Gown" << std::endl << std::endl;

	Ainz.Dados();

	Ainz.andar();
	Ainz.pular();
	Ainz.Atacar();
	Ainz.Defender();
	Ainz.Falar();
	Ainz.Invocar();
	Ainz.Muralha();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Bardo Trovador;

	Trovador.Dados();

	Trovador.andar();
	Trovador.pular();
	Trovador.Atacar();
	Trovador.Defender();
	Trovador.Falar();
	Trovador.Cantada();
	Trovador.Ninar();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Barbaro Cobrolho;

	std::cout << "Barbaro: Cobrolho" << std::endl << std::endl;

	Cobrolho.Dados();

	Cobrolho.andar();
	Cobrolho.pular();
	Cobrolho.Atacar();
	Cobrolho.Defender();
	Cobrolho.Falar();
	Cobrolho.Cobrolhada();
	Cobrolho.Furia();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Paladino Crusado;

	std::cout << "Paladino: Crusado" << std::endl << std::endl;

	Crusado.Dados();

	Crusado.andar();
	Crusado.pular();
	Crusado.Atacar();
	Crusado.Defender();
	Crusado.Falar();
	Crusado.Deus_vult();
	Crusado.Santa_granada();

	std::cout << std::endl << "------------------------------------------------------------------------------------------" << std::endl << std::endl;

	Ranger Ragnar;

	std::cout << "Ranger: Ragnar" << std::endl << std::endl;

	Ragnar.Dados();

	Ragnar.andar();
	Ragnar.pular();
	Ragnar.Atacar();
	Ragnar.Defender();
	Ragnar.Falar();
	Ragnar.Clamufagem();
	Ragnar.Flechada();
	Ragnar.Joelho();

	std::cout << std::endl << std::endl << std::endl;

	system("pause");
	return 0;
}