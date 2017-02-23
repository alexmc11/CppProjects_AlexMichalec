#include <iostream>
#include <ctime>
#include <string>

enum Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};

class Zombie;

Weapon GiveWeapon()
{
	int i = rand() % 6;
	switch (i) {
	case 0:
		return FISTS;
		break;
	case 1:
		return GUN;
		break;
	case 2:
		return SHOTGUN;
		break;
	case 3:
		return REVOLVER;
		break;
	case 4:
		return SNIPER;
		break;
	case 5:
		return MACHINE_GUN;
		break;
	}
}

class Player
{
public:
	Player();
	Weapon weapon;
	float precision;
	int life;
	void attack(Zombie &);
	bool IsAlive();


private:

};

Player::Player() : weapon(GiveWeapon()), precision((rand() % 11)/10.0f), life(rand() % 101)
{

}


class Zombie
{
public:
	Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack(Player &);
	bool isalive();
private:

};

Zombie::Zombie() : distanceToPlayer((rand() % 181)+20), speed(rand() % 21 /1.0f), damage(rand() % 21 / 1.0f), life(rand() % 101)
{

}

void Player::attack(Zombie &z)
{
	int dmg;
	switch (weapon) {
	case FISTS:
		dmg = 0;
		break;
	case GUN:
		dmg = 1;
		break;
	case SHOTGUN:
		dmg = 2;
		break;
	case REVOLVER:
		dmg = 3;
		break;
	case SNIPER:
		dmg = 4;
		break;
	case MACHINE_GUN:
		dmg = 5;
		break;
	}
	z.life = z.life - (dmg * precision);
}

bool Player::IsAlive()
{
	return life > 0;
}

void Zombie::attack(Player &p)
{
	if (distanceToPlayer <= 0)
		p.life = p.life - damage;
	else
		distanceToPlayer--;
}
bool Zombie::isalive()
{
	return life > 0;
}

void main()
{
	srand(time(nullptr));
	Player player;
	Zombie zombies[10];
	bool zombiesAreAlive;

	do {
		zombiesAreAlive = false;
		for (int i = 0; i < 10; i++)
		{
			if (zombies[i].life < 0) 
			{
				player.attack(zombies[i]);
				zombies[i].attack(player);
				zombiesAreAlive = true;
			}
			std::cout << "Player \n" << "life " << player.life << "weapon " << player.weapon << "precision " << player.precision << "\n";

			std::cout << "Zombie " << i << '\n' << "life " << zombies[i].life << "distance " << zombies[i].distanceToPlayer << "speed " << zombies[i].speed << "damage " << zombies[i].damage << '\n';


			

		}
	
		} while (player.IsAlive() && zombiesAreAlive);
		
		if (zombiesAreAlive = true)
			std::cout << "You Lose";
		else
			std::cout << "You Win";
}




