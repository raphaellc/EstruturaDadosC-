#include <iostream>

int fatorial(int num);

int main() {

	fatorial(5);
	system("pause");
	return 0;
}

int fatorial(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	else {
		return num * fatorial(num - 1);
	}
}