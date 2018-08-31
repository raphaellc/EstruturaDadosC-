#include"Novo.h"
#include"Velho.h"
#include<iostream>

int main() {
	Novo* novo = new Novo;
	Velho* velho = new Velho;

	novo->Endereco();
	novo->Valor();
	velho->Endereco();
	velho->Valor();

	system("Pause");
	return 0;
}