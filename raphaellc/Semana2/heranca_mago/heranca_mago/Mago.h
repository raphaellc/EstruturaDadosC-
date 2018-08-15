#pragma once
class Mago
{
public:
	Mago();
	~Mago();
	int getPoder();
	int getEscMagia();
	bool andar();
	virtual bool invocarMagia();
protected:
	int poder, escola_magia;
};

