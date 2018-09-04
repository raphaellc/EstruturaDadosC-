#pragma once
#include"Ingresso.h"
#include"VIP.h"
#include"IngressoNormal.h"
#include"CamaroteInferior.h"
#include"CamaroteSuperior.h"
#include<iostream>

int main()
{
	setlocale(LC_ALL, "ptb");

	VIP* x = new VIP();
	IngressoNormal* y = new IngressoNormal();
	CamaroteInferior* z = new CamaroteInferior();
	CamaroteSuperior* w = new CamaroteSuperior();

	x->imprimeValor();
	y->imprimeValor();
	z->imprimeValor();
	z->definirLocalizacao(45);
	z->imprimeLocalizcao();
	w->imprimeValor();
	w->definirLocalizacao(66);
	w->imprimeLocalizcao();
	
	system("pause");
	return 0;
}