#pragma once
#include "No.h"
//Classe Lista com Template com todos os métodos pedidos e atributos
template <class T>
class Lista
{
public:
	Lista();
	~Lista();

	No<T> * cabeca;
	No<T> * cauda;

	void inserirNaUltimaPos(T * p);
	void removerPessoa();
	int obterTamanhoLista();
	bool esvaziarLista();
	void obterUltimaPessoa();

protected:

	int tam;
};

template<class T>
inline Lista<T>::Lista()
{
	this->tam = 0;
}

template<class T>
inline Lista<T>::~Lista()
{
}

template<class T>
void Lista<T>::inserirNaUltimaPos(T * p)
{
	No<T> * temp = new No<T>;
	temp->info = p;
	if (this->cabeca == nullptr)
	{
		this->cabeca = temp;
		tam++;
	}
	else
	{
		this->cauda = this->cabeca;
		while (this->cauda->proximo != nullptr) {
			this->cauda = this->cauda->proximo;
		}
		this->cauda->proximo = temp;
		tam++;
	}
}

template<class T>
void Lista<T>::removerPessoa()
{
	if (this->cabeca != nullptr)
	{
		if (this->cabeca->proximo == nullptr)
		{
			delete this->cabeca->info;
			this->cabeca = nullptr;
		}
		else
		{
			this->cauda = this->cabeca;
			while (this->cauda->proximo != nullptr)
			{
				this->cauda = this->cauda->proximo;
				if (this->cauda->proximo == nullptr)
				{
					delete this->cauda->info;
					this->cauda = nullptr;
				}
			}
		}
	}

}

template<class T>
int Lista<T>::obterTamanhoLista()
{
	return tam;
}

template<class T>
bool Lista<T>::esvaziarLista()
{
	if (cabeca != nullptr)
	{
		this->cauda = this->cabeca;
		while (this->cauda->proximo != nullptr)
		{
			this->cauda = this->cabeca->proximo;
			delete this->cabeca;
			this->cabeca = this->cauda;
		}
	}
	if (this->cabeca == nullptr)
	{
		return true;
	}
}

template<class T>
void Lista<T>::obterUltimaPessoa()
{
	if (this->cabeca == nullptr)
	{
		std::cout << "Lista Vazia" << std::endl;
	}
	else
	{
		this->cauda = this->cabeca;
		while (cauda->proximo != nullptr)
		{
			this->cauda = this->cauda->proximo;
		}
		if (this->cauda->proximo == nullptr)
		{
			std::cout << "O último elemento da lista é: " << this->cauda->info->nome << std::endl;
		}
	}
}
