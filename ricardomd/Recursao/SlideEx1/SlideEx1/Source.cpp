#include <iostream>
void inverte(std::string text, int chars);

int main() {
	inverte("abc", 3);
	std::cout << "\n";

	system("pause");
	return 0;
}

void inverte(std::string texto, int chars) {
	if (chars == 0) return;
	else {
		std::cout << texto.at(chars-1);
		chars--;
		inverte("abc", chars);
	}
}
