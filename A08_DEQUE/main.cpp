#include <deque>
#include <iostream>
#include <string>

void main() {
	//definir deque
	std::deque <float> prices(10, 10.5);

	//cambiar ultimo valor
	prices[9] = 32.43f;

	//borrar primer valor
	prices.pop_front();

	//assignar a una nueva deque el valor de la original
	std::deque <float> prices2 = prices;

	//insertar dos valores al inicio
	prices2.push_front(20.31f), prices2.push_front(5.64f);

	//insertar el valor 10 en la segunda posicion
	std::deque<float>::iterator it = prices2.begin();
	it += 2;
	it = prices2.insert(it, 10);

	//Imprimir la primera deque usando un backward iterator		for (std::deque<float>::reverse_iterator rit = prices2.rbegin(); rit != prices2.rend(); ++rit)
	{
		std::cout << ' ' << *rit;
	}

	//Imprimir la segunda deque de otra forma

	for (std::deque<float>::iterator it = prices2.begin(); it != prices2.end(); ++it)
	{
		std::cout << ' ' << *it; 
	}
}
