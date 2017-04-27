#include <deque>
#include <vector>
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
	it ++;
	it = prices2.insert(it, 10);

	//Imprimir la primera deque usando un backward iterator

	std::cout << "DEQUE" << std::endl;
	
	for (std::deque<float>::reverse_iterator rit = prices.rbegin(); rit != prices.rend(); ++rit)
	{
		std::cout << ' ' << *rit;
	}

	std::cout << std::endl;

	//Imprimir la segunda deque de otra forma

	for (std::deque<float>::iterator it = prices2.begin(); it != prices2.end(); ++it)
	{
		std::cout << ' ' << *it; 
	}

	std::cout << std::endl;

	//Lo mismo con vector

	//definir vector
	std::vector<float> vect_prices(10, 10.5);

	//cambiar ultimo valor
	vect_prices[9] = 32.43f;

	//borrar primer valor
	vect_prices.erase(vect_prices.begin());

	//assignar a un nuevo vector el valor del original
	std::vector<float> vect_prices2 = vect_prices;

	//insertar dos valores al inicio
	vect_prices2.insert(vect_prices2.begin(), 20.31f), vect_prices2.insert(vect_prices2.begin(), 5.64f);

	//insertar el valor 10 en la segunda posicion

	vect_prices2.insert(vect_prices2.begin() + 1, 10);

	//Imprimir el primer vector usando un backward iterator

	std::cout << "VECTORS" << std::endl;

	for (std::vector<float>::reverse_iterator rit = vect_prices.rbegin(); rit != vect_prices.rend(); ++rit)
	{
		std::cout << ' ' << *rit;
	}

	std::cout << std::endl;

	//Imprimir el vector de otra forma

	for (std::vector<float>::iterator it = vect_prices2.begin(); it != vect_prices2.end(); ++it)
	{
		std::cout << ' ' << *it;
	}

	std::cout << std::endl;



}
