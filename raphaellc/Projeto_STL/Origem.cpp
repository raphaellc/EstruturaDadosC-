#include <iostream>
#include <vector>
#include <queue>
int main() {

	std::vector<int> * v = new std::vector<int>();
	std::vector<int>::iterator vec_it;
	std::queue<int> * q_fila = new std::queue<int>();
	v->push_back(10);
	v->push_back(20);
	//v->pop_back();

	/*for(int n : *v)
	std::cout << n << std::endl;*/

	/*for (vec_it = v->begin() ; vec_it != v->end() ; vec_it++)
	std::cout << *vec_it << std::endl;*/

	q_fila->push(10);
	q_fila->push(20);
	q_fila->push(30);

	std::cout << q_fila->front() << std::endl;
	std::cout << q_fila->back() << std::endl;
	q_fila->pop();
	std::cout << q_fila->front() << std::endl;
	std::cout << q_fila->back() << std::endl;

	system("pause");

}