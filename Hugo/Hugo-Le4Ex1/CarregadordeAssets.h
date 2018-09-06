#pragma once
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class CarregadordeAssets
{
private:
	int i_num_assets;
public:
	CarregadordeAssets();
	~CarregadordeAssets();
	bool CarregarAssets(fstream & arq_recursos);
};

