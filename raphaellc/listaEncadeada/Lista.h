#pragma once
#include "No.h"
template <class T>
class Lista
{
public:
	Lista();
	~Lista();
	No<T> * lista, *lista_aux;
	void percorreLista(No<T> * lista);
	void insereFimLista(No<T> * no);
	void inserirInicioLista(No<T> * no);
	bool removeUltimoNo(No<T> * lst);
	T * removePrimeiroNo();
	void insereEm(int posicao, No<T> * no);
	int obtemTamanhoLista();
	bool listaVazia();//true = vazia; false = n�o vazia
	void esvaziaLista();
	bool contemNaLista(const No<T> no, No<T> * param_lista);
	//bool removerNo(const No<T> no);
	//int obtemPosicao(No<T> no);

protected:
	int tam;
};


template <class T>
Lista<T>::Lista()
{
	this->tam = 0;
}
template <class T>
Lista<T>::~Lista()
{
}
template <class T>
void Lista<T>::percorreLista(No<T> * lista)
{
	if (lista != nullptr) {
		lista_aux = lista;
		percorreLista(lista->proximo);
	}
}
template <class T>
void Lista<T>::insereFimLista(No<T> * no)
{
	if (this->lista == nullptr) { //se � vazia
		this->lista = no;//insere o primeiro elemento
		this->tam++;
	}
	else {
		this->lista_aux = this->lista; //inicializa variavel aux
									   //enquanto n�o chegou no �ltimo n� da lista
		while (this->lista_aux->proximo != nullptr) {
			this->lista_aux = this->lista_aux->proximo;
		}
		//lista_aux aponta para o �ltimo n� da lista
		this->lista_aux->proximo = no; //atribui novo n�
		this->tam++;
	}
}
template<class T>
void Lista<T>::inserirInicioLista(No<T>* no)
{
	if (!listaVazia()) {
		no->proximo = lista;
		lista = no;
		tam++;
	}
	else {
		lista = no;
		tam++;
	}
}
template <class T>
void Lista<T>::insereEm(int posicao, No<T> * no)
{
	//declarar o �ndice
	int i = 0;
	No<T> * no_ant = nullptr;
	//inicializa o ponteiro para percorrer a lista
	this->lista_aux = this->lista;
	no_ant = this->lista;
	if (posicao <= this->tam) {

		while (i <= posicao) {
			if (i == posicao) {
				//atualiza o n�
				if (listaVazia()) {
					insereFimLista(no);
				}
				else {
					if (posicao == 0) {
						//@todo insereInicioLista ou push_front
						no->proximo = this->lista;
						this->lista = no;
					}
					else {
						no->proximo = this->lista_aux;
						no_ant->proximo = no;
					}
				}
				this->tam++;
			}
			//atualiza o n� anterior
			no_ant = this->lista_aux;
			this->lista_aux = this->lista_aux->proximo;
			i++;
		}
	}
	else {
		//posicao inv�lida
	}
}
template <class T>
int Lista<T>::obtemTamanhoLista()
{
	return this->tam;
}
template <class T>
bool Lista<T>::listaVazia()
{
	if (this->lista == nullptr)
		return true;
	else
		return false;
}
template <class T>
void Lista<T>::esvaziaLista()
{
	if (this->lista != nullptr) {
		this->lista_aux = this->lista;
		while (this->lista_aux != nullptr) {
			//primeiro passo: atualizar lista_aux para o pr�ximo n�
			this->lista_aux = this->lista->proximo;
			//segundo passo: deletar o n�
			delete this->lista;
			//terceiro passo: atualizar a lista para o pr�ximo n�
			this->lista = this->lista_aux;
		}
	}
}
template<class T>
bool Lista<T>::contemNaLista(const No<T> no, No<T> * param_lista)
{
	//recebe o n�
	//percorre a lista at� encontrar o n�
	//pra cada n� comparar a info que cont�m o tipo T, ou a informa��o desejada

	if (param_lista != nullptr) {
		//lista_aux = lista;
		if (param_lista->info == no.info)
			return true;
		else
			return contemNaLista(no, param_lista->proximo);
	}
	return false;

}
template <class T>
bool Lista<T>::removeUltimoNo(No<T> * lst) {
	if (lst != nullptr) {
		if (lst->proximo != nullptr) {
			this->lista_aux = lst;
			lista = lst->proximo;
			percorreLista(lista);

		}
		else {
			//cheguei no �ltimo elemento
			lista_aux->proximo = nullptr; //penultimo atualiza ponteiro pr�ximo
			delete lst; //deleta ultimo n�
			return true;
		}
	}
	return false;

}

template<class T>
T * Lista<T>::removePrimeiroNo()
{
	T * info = nullptr;
	if (!listaVazia()) {
		lista_aux = lista;
		lista = lista->proximo;
		info = lista_aux->info;
		delete lista_aux;
		tam--;
	}
	return info;
}

