#include "Arvore.h"

Arvore::Arvore()
{
	nElementos = 0;
	raiz = 0;
}

Arvore::~Arvore()
{
}

void Arvore::inserir(int i)
{
	novo = new No;
	novo->valor = i;
	novo->NoEsq = 0;
	novo->NoDir = 0;
	if (nElementos == 0)//Se a arvore estiver vazia
	{
		raiz = novo;
		nElementos++;
	}
	else //Se já existe algum no
	{
		inserir(raiz, novo);
	}
}

bool Arvore::pesquisar(int v)
{
	if (nElementos == 0)
	{
		return false;
	}
	else
	{
		return pesquisar(raiz, v);
	}
}

bool Arvore::remover(int v)
{
	if (nElementos == 0)
	{
		return false;
	}
	else
	{
		return remover(raiz, v);
	}
}

No* Arvore::percorrerDireita(No* r)
{
	if (r->NoDir == 0) {
		return r;
	}
	else {
		percorrerDireita(r->NoDir);
	}
}

No * Arvore::retornarRaiz(int v)
{
	if (nElementos == 0)
	{
		return nullptr;
	}
	else
	{
		return retornarRaiz(raiz, v);
	}
}

void Arvore::inserir(No * r, No * n)
{
	if (r->valor == n->valor)
	{
		delete n;
	}
	else if (n->valor < r->valor)
	{
		if (r->NoEsq == 0)
		{
			r->NoEsq = n;
			nElementos++;
		}
		else
		{
			inserir(r->NoEsq, n);
		}
	}
	else
	{
		if (r->NoDir == 0)
		{
			r->NoDir = n;
			nElementos++;
		}
		else
		{
			inserir(r->NoDir, n);
		}
	}
}

bool Arvore::pesquisar(No * r, int v)
{
	if (r->valor == v) {
		return true;
	}
	else if (r->valor > v) {
		if (r->NoEsq == nullptr) {
			return false;
		}
		else {
			return pesquisar(r->NoEsq, v);
		}

	}
	else {
		if (r->NoDir == nullptr) {
			return false;
		}
		else {
			return pesquisar(r->NoDir, v);
		}
	}
}

bool Arvore::remover(No * r, int v)
{
	if (r->valor == v) {
		if (r->NoDir == 0 && r->NoEsq == 0) {
			r->valor = 0;
			r = nullptr;
			return true;
		}
		else if (r->NoDir == 0 && r->NoEsq != 0) {
			r->valor = r->NoEsq->valor;
			r->NoEsq = 0;
			return true;
		}
		else if (r->NoDir != 0 && r->NoEsq == 0) {
			r->valor = r->NoDir->valor;
			r->NoDir = 0;
			return true;
		}
		else if (r->NoDir != 0 && r->NoEsq != 0) {
			if (r->NoEsq->NoEsq == 0 || r->NoEsq->NoDir == 0) {
				r->valor = r->NoEsq->valor;
				r->NoEsq = 0;
				return true;
			}
			else if (r->NoDir->NoEsq == 0 || r->NoDir->NoDir == 0) {
				r->valor = r->NoDir->valor;
				r->NoDir = 0;
				return true;
			}
			else {
				r->valor = percorrerDireita(r->NoEsq)->valor;
				delete percorrerDireita(r->NoEsq);
				return true;
			}
		}
	}
	else if (r->valor > v) {
		if (r->NoEsq == nullptr) {
			return false;
		}
		else {
			return remover(r->NoEsq, v);
		}
	}
	else {
		if (r->NoDir == nullptr) {
			return false;
		}
		else {
			return remover(r->NoDir, v);
		}
	}
}

No * Arvore::retornarRaiz(No * r, int v)
{
	if (r->valor == v) {
		return nullptr;
	}
	else if (r == nullptr) {
		return nullptr;
	}
	else if (r->valor > v) {
		if (r->NoEsq->valor == v) {
			return r;
		}
		else {
			retornarRaiz(r->NoEsq, v);
		}
	}
	else {
		if (r->NoDir->valor == v) {
			return r;
		}
		else {
			retornarRaiz(r->NoDir, v);
		}
	}
}