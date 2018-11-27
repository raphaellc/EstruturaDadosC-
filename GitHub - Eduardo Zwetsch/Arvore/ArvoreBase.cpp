#include "ArvoreBase.h"



ArvoreBase::ArvoreBase()
{
}


ArvoreBase::~ArvoreBase()
{
}

bool ArvoreBase::procurar(int val)
{
	if (nElementos == 0)
	{
		return false;
	}
	else
	{
		return procurar(raiz, val);
	}
}

bool ArvoreBase::remover(int val)
{
	if (nElementos == 0)
	{
		return false;
	}
	else
	{
		return remover(raiz, val);
	}
}

void ArvoreBase::inserirVal(int i)
{
	novo = new No;
	novo->valor = i;
	novo->NoEsq = 0;
	novo->NoDir = 0;

	if (nElementos == 0)
	{
		raiz = novo;
		nElementos++;
	}
	else 
	{
		inserirVal(raiz, novo);
	}

}

No * ArvoreBase::percorrerDireita(No * ra)
{
	if (ra -> NoDir == 0) 
	{
		return ra;
	}
	else {
		percorrerDireita(ra -> NoDir);
	}
}

No * ArvoreBase::retornarRaiz(int val)
{
	if (nElementos == 0)
	{
		return nullptr;
	}
	else
	{
		return retornarRaiz(raiz, val);
	}
}

bool ArvoreBase::procurar(No * ra, int val)
{
	if (ra -> valor == val) {
		return true;
	}
	else if (ra -> valor > val) {
		if (ra -> NoEsq == nullptr) {
			return false;
		}
		else {
			return procurar(ra -> NoEsq, val);
		}

	}
	else {
		if (ra -> NoDir == nullptr) {
			return false;
		}
		else {
			return procurar(ra -> NoDir, val);
		}
	}
}

bool ArvoreBase::remover(No * ra, int val)
{
	return false;
	
	if (ra->valor == val) 
	{
		//	------	//
		if (ra -> NoDir == 0 && ra -> NoEsq == 0) 
		{
			ra -> valor = 0;
			ra = nullptr;
			return true;
		}
		else if (ra -> NoDir == 0 && ra -> NoEsq != 0) 
		{
			ra -> valor = ra -> NoEsq -> valor;
			ra -> NoEsq = 0;
			return true;
		}
		else if (ra -> NoDir != 0 && ra -> NoEsq == 0) {
			ra -> valor = ra -> NoDir -> valor;
			ra -> NoDir = 0;
			return true;
		}
		else if (ra -> NoDir != 0 && ra -> NoEsq != 0) 
		{
			//--------//
			if (ra -> NoEsq->NoEsq == 0 || ra -> NoEsq -> NoDir == 0) 
			{
				ra -> valor = ra -> NoEsq -> valor;
				ra -> NoEsq = 0;
				return true;
			}
			else if (ra -> NoDir -> NoEsq == 0 || ra -> NoDir -> NoDir == 0) 
			{
				ra -> valor = ra -> NoDir -> valor;
				ra -> NoDir = 0;
				return true;
			}
			else 
			{
				ra -> valor = percorrerDireita(ra -> NoEsq) -> valor;
				delete percorrerDireita(ra -> NoEsq);
				return true;
			}
			//--------//
		}
		//	------	//		
	}
}

void ArvoreBase::inserirVal(No * ra, No * n)
{
	if (ra -> valor == n -> valor)
	{
		delete n;
	}
	else if (n->valor < ra->valor)
	{
		if (ra -> NoEsq == 0)
		{
			ra -> NoEsq = n;
			nElementos++;
		}
		else
		{
			inserirVal(ra -> NoEsq, n);
		}
	}
	else
	{
		if (ra -> NoDir == 0)
		{
			ra -> NoDir = n;
			nElementos++;
		}
		else
		{
			inserirVal(ra -> NoDir, n);
		}
	}
}

No * ArvoreBase::retornarRaiz(No * ra, int val)
{
	if (ra -> valor == val) 
	{
		return nullptr;
	}
	
	/*else if (ra == nullptr) 
	{
		return nullptr;
	}*/
	
	else if (ra -> valor > val) 
	{
		if (ra -> NoEsq -> valor == val) 
		{
			return ra;
		}
		else 
		{
			retornarRaiz(ra -> NoEsq, val);
		}
	}
	else {
		if (ra -> NoDir -> valor == val) {
			return ra;
		}
		else {
			retornarRaiz(ra -> NoDir, val);
		}
	}
}
