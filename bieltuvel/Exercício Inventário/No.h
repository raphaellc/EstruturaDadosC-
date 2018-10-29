//Classe Nó com Template
#pragma once
#include "Pessoa.h"

template <class T> 
class No
{
public:
	No();
	~No();

	No<T> * proximo;
	T * info;
};

template <class T>
No<T>::No(){}

template <class T>
No<T>::~No() {}
