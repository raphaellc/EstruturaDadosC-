#include "stdafx.h"
#include "ConsoleApplication1.h"
#include "guerreiro.h"

int main()
{
	guerreiro wr;
	
	wr.andar();
	wr.disparar();
	wr.proteger();
	wr.recarregar();

	system("pause");
    return 0;
}