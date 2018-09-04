#pragma once
class Ingresso
{
protected:
	int valor;
public:
	Ingresso();
	~Ingresso();
	virtual void imprimeValor() = 0;
};

