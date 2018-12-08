#pragma once

struct No {
	int valor;
	No* NoEsq, *NoDir;
};

class ArvoreBase
{
public:
	ArvoreBase();
	~ArvoreBase();

	bool procurar(int val);
	bool remover(int val);

	void inserirVal(int i);

	No* percorrerDireita(No* ra);
	No* retornarRaiz(int val);

protected:

	int nElementos;

	bool procurar(No* ra, int val);
	bool remover(No* ra, int val);

	void inserirVal(No* ra, No * n);
	
	No* raiz, *novo, *nodo;
	No* retornarRaiz(No* ra, int val);

};