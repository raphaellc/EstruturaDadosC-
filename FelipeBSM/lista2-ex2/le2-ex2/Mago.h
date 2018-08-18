#pragma once 
#include <string>; 
//MAGO.H 
using namespace std;

class Mago
{
private:
	string poders;
	string provoca;
protected:

	string nome;
	int HP;
	string Estilo;
	string sexo;

public:

	Mago();
	~Mago();

	
	string getNome(string name);
	string getEstilo(string est);
	void getHP();
	void Magia();
	string provocacao(string prov);
	string poderSupremo(string ps);
	string getSexo(string sex);
	void lvlM();


};