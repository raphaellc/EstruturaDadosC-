#include "Imovel.h"
#include "Novo.h"
#include "Velho.h"

int main()
{
	Novo* Novinha = new Novo();
	Velho* Velinha = new Velho();

	Novinha->Imp();
	Velinha->Imp();

	system("pause");
	return 0;
}