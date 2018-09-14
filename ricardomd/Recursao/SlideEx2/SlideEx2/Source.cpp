#include <iostream>

bool pal(std::string palavra, int tamanho);
std::string resultado;
std::string palavra = "texto";

int main() {

	if (pal(palavra, 5)) {
		std::cout << "Palavra igual!\n";
	}
	else {
		std::cout << "Palavra diferente!\n";
	}

	system("pause");
	return 0;
}

bool pal(std::string palavra, int tamanho) {
	if (tamanho == 0) {
		if (palavra == resultado) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		resultado += palavra[tamanho - 1];
		return pal(palavra, tamanho - 1);
	}
}