#include <iostream>
#include "ArvoreBase.h"

using namespace std;

int main()
{
	ArvoreBase arvore;

	arvore.inserirVal(10);
	arvore.inserirVal(18);
	arvore.inserirVal(4);
	arvore.inserirVal(5);
	arvore.inserirVal(13);


	cout << boolalpha;
	

	cout << "Raiz do 10: " << arvore.retornarRaiz(10)->valor << endl;
	cout << "Raiz do 18: " << arvore.retornarRaiz(18) << endl;
	cout << "Raiz do 4: " << arvore.retornarRaiz(4)->valor << endl;
	cout << "Raiz do 7: " << arvore.retornarRaiz(5)->valor << endl;
	cout << "Pesquisar 10: " << arvore.procurar(10) << endl;
	cout << "Remover 10: " << arvore.remover(10) << endl;
	cout << "Pesquisar 10: " << arvore.procurar(10) << endl;

	cout << "Pesquisar 5: " << arvore.procurar(5) << endl;
	cout << "Remover 5: " << arvore.remover(5) << endl;
	cout << "Pesquisar 5: " << arvore.procurar(5) << endl;

	system("pause");
	return 0;
}