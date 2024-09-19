#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name){
	if(n < 1)
		return NULL;
	Zombie *zombieHorde = new Zombie[n];
	for(int i = 0; i < n; i++)
		zombieHorde[i].set_zombie_horde(name);
	return zombieHorde;
}
