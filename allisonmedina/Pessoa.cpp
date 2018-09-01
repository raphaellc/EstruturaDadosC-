#include "stdafx.h"
#include "Pessoa.h"


Pessoa::Pessoa()
{
	
}


Pessoa::~Pessoa()
{
}

void Pessoa::Pessoa1()
{
	// In

	std::cout << "Input your name: ";
	std::getline (std::cin,name);  // Recebe a linha, podendo acrescentar espaçamento.
	std::cout << "Your age: ";
	std::cin >> age;
	
	
	//Out

	std::cout << "My name is " << name << " and I've "<< age << " old. \n" ;
	again:
	std::cout << "\nDo you work? ";
	if (key = _getch() == 's')
	{
		std::cout << "Yes\n";
		return works(); // Pobre
	}
	else if (key = _getch() == 'n')
	{
		std::cout << "No\n";
		std::cout << "\n Are'u a lot money? ";
		if (key = _getch() == 's')
		{
			std::cout << "Yes\n";
			return purchase(); // Rico
		}
		else
		{
			std::cout << "No\n";
			return Beggar(); //Não trabalha e não tem muito dinheiro = Miserável.
		}
	}
	else
	{
		std::cout << "Invalid option! "; //Retorna para as perguntas se inserido outras letras.
		goto again;
	}


}
std::string Pessoa::getName()
{	 	
	return name;
}
int Pessoa::getAge()
{		
	return age;
}
/*Rica Pessoa::Money()
{
	Money().getMoney();

	return Money();
}*/
