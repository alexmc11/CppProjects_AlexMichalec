#include <vector>
#include <map>
#include <string>
#include <iostream>

void main()
{
	std::map <std::string, int> rank;
	rank["Leuc"] = 100;
	rank["Pepe"] = 500;
	rank["Juan"] = 300;
	rank["Hola"] = 200;
	int points;
	std::string name;
	std::cin >> name;
	std::cin >> points;
	rank[name] = points;

	for (std::map<std::string, int>::iterator it = rank.begin(); it != rank.end(); ++it)
	{
		
		std::cout << it->first << " => " << it->second << '\n';
	}
}