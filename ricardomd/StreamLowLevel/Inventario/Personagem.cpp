#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::carregarInventario(Item inv[10])
{
	for (int i = 0; i < 10; i++)
	{
		this->inventario[i].setId(inv[i].getId());
		this->inventario[i].setPeso(inv[i].getPeso());
		this->inventario[i].setTipo(inv[i].getTipo());
	}
}

void Personagem::inserirItem(std::ostream & os)
{
	os.write(reinterpret_cast<char*>(&item_atual), sizeof(Item));
}

void Personagem::inserirItemEm(std::ostream & os, int indice)
{
	std::streampos pos(indice * sizeof(Item));
	os.seekp(pos);
	std::cout << "O item ser� escrito na posi��o: " << os.tellp() << std::endl;
	os.write(reinterpret_cast<char*>(&item_atual), sizeof(Item));
}

void Personagem::carregaItens(std::istream & is)
{
	int indice = 0;
	while(!is.eof()){
		
		is.read(reinterpret_cast<char *>(&inventario[indice]), sizeof(Item));
		if (is.gcount() == 0) break;
		std::cout << "Id: " << inventario[indice].id << "Peso: " << inventario[indice].peso << "Tipo: " << inventario[indice].tipo << std::endl;
		indice++;
		
	}
}

