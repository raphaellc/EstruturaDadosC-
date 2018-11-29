#include"Arvore.h"
#include<iostream>

using namespace std;

int main()
{
	Arvore arvore;

	arvore.inserir(15);
	arvore.inserir(10);
	arvore.inserir(22);
	arvore.inserir(7);
	arvore.inserir(17);

	cout << boolalpha;

	/*cout << "Podando o 22: " << arvore.podar(22) << endl;
	cout << "Pesquisar 17: " << arvore.pesquisar(17) << endl;
	cout << "Pesquisar 22: " << arvore.pesquisar(22) << endl;*/

	cout << "Raiz do 22: " << arvore.retornarRaiz(22)->valor << endl;
	cout << "Raiz do 15: " << arvore.retornarRaiz(15) << endl;
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