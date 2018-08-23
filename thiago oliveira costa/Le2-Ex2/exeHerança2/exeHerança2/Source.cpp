#include"Guerreiro.h"
#include"Barbaro.h"
#include"clerigo.h"
#include"Bardo.h"
#include"Ladino.h"
#include"Mago.h"
#include"Paladino.h"
#include"ranger.h"
#include"SarcerdoteDaLuz.h"
#include"SarcerdoteDaTrevas.h"

int main()
{
	Guerreiro * guerreiro = new Guerreiro;
	Barbaro * barbaro = new Barbaro;
	clerigo * creli = new clerigo;
	Bardo * bardo = new Bardo;
	Ladino * ladino = new Ladino;
	Mago * mago = new Mago;
	Paladino * paladino = new Paladino;
	ranger * rang = new ranger;
	SarcerdoteDaLuz * Luz = new SarcerdoteDaLuz;
	SarcerdoteDaTrevas* Trevas = new SarcerdoteDaTrevas;

	//guerreiro
	
	guerreiro->andar();
	guerreiro->atacar();
	guerreiro->defender();
	guerreiro->pular();
	guerreiro->berro();
	guerreiro->esmagar();
	guerreiro->provocar();
	guerreiro->buffar();
	
	
	//mago
	mago->mAndar();
	mago->Matacar();
	mago->BolaDeFogo();
	mago->Explosao();
	mago->Meteoro();
	mago->mPular();

	//Bardo

	bardo->BAndar();
	bardo->Batacar();
	bardo->BPular();
	bardo->tocarCura();
	bardo->tocarCifonia();
	bardo->tocarMelodia();

	//Barbaro

	barbaro->BAAndar();
	barbaro->BAAtaque();
	barbaro->BADenfender();
	barbaro->BAPular();
	barbaro->empurrar();
	barbaro->atordoa();
	barbaro->selvageria();
	barbaro->terremoto();
	
	//Creligo

	creli->cAndar();
	creli->cDenfender();
	creli->cPular();
	creli->cAtaque();
	creli->curaGrupal();
	creli->luzSgrada();
	creli->raioCeleste();
	creli->curar();

	//Ladino

	ladino->lAndar();
	ladino->lAtacar();
	ladino->ldefender();
	ladino->lPular();
	ladino->invisibilidade();
	ladino->steal();
	ladino->supressa();
	ladino->apanhalar();

	// Range
	rang->RAAndar();
	rang->RADenfender();
	rang->RAPular();
	rang->RAtaque();
	rang->flechaEletrica();
	rang->flechaEsplosiva();
	rang->flechaGrudante();
	rang->flechaPerfurante();
   
	// Sarcerdote De Luz
	Luz->sLandar();
	Luz->sLatacar();
	Luz->SluzAbensuada();
	Luz->ataqueDivino();
	Luz->ataqueSagrado();
	Luz->flechaDeLuz();
	

	//Sarcedote das trevas
	Trevas->sTandar();
	Trevas->sTatacar();
	Trevas->buracoNegro();
	Trevas->invocasaoSombria();
	Trevas->raioDaMorte();
	Trevas->venenoMortal();

 
	system("pause");
	return 0;
	
}