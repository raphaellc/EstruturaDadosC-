#pragma once

template <class T>
class No
{
public:
	No();
	~No();
	T * informacao; //informa��o que ser� armazenada
	No<T> * proximo; //ponteiro para o pr�ximo n�

};

template <class T>
No<T>::No() {};

template <class T>
No<T>::~No() {};
