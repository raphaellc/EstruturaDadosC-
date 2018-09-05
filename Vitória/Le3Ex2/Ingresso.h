#pragma once

class Ingresso
{
public:
	Ingresso();
	~Ingresso();
	virtual void ImpValor() = 0;
protected:
	int valor;
};

