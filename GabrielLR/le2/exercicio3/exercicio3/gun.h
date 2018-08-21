#pragma once
#include <iostream>

class gun
{
protected:

	int capacity, reg;
	float power;
	bool miraLaser;

public:
	gun();
	~gun();

	virtual void recarregar();
	void atirar(int power);

	int getPower();
	void setPower(int _power);
};