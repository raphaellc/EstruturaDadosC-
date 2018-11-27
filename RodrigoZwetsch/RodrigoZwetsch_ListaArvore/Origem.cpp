#include <iostream>
#include<string>
#include "No.h"
#include "ListaPessoas.h"
#include "Lista.h"
#include"PilhaPessoas.h"
#include"FilaPessoas.h"
#include<stack>
#include<queue>
#include"Inventario.h"
#include"Player.h"

#include"Arvore.h"

using namespace std;

int main() {


	Inventario*lst_item = new Inventario;

	Player* player = new Player;

	player->item->nome_do_item = "Capacetasco";

	player->item->num = 1;

	lst_item->insereFimInventario(player->item);

	Arvore arvore;

	arvore.inserir(15);
	arvore.inserir(10);
	arvore.inserir(22);
	arvore.inserir(7);
	arvore.inserir(17);

	cout << boolalpha;


	cout << "Raiz do 22: " << arvore.retornarRaiz(22)->valor << endl;

	cout << "Raiz do 15: " << arvore.retornarRaiz(15)->valor << endl;

	cout << "Raiz do 10: " << arvore.retornarRaiz(10)->valor << endl;

	cout << "Raiz do 7: " << arvore.retornarRaiz(7)->valor << endl;

	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;

	cout << "Remover 22: " << arvore.remover(22) << endl;

	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;

	cout << "Pesquisar 17: " << arvore.pesquisar(17) << endl;

	cout << "Remover 17: " << arvore.remover(17) << endl;

	cout << "Pesquisar 17: " << arvore.pesquisar(17) << endl;

	system("pause");
	return 0;
}
