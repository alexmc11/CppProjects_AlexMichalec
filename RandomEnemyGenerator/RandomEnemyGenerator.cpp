#include <iostream>
#include <string>
#include <ctime>
using namespace std;

enum EnemyType {zombie, vampire, ghost, witch};

struct Enemy {
	EnemyType type;
	string name;
	int health;
};

bool operador(Enemy a, Enemy b)
{
	if (a.name == b.name)
		return true;
	if (a.type == b.type)
		return true;
}

void main() 
{
	
}