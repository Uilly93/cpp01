#include "../includes/Zombie.hpp"

Zombie	*newZombie(std::string name){
	Zombie *new_zombie = new Zombie(name);
	new_zombie->set_zombie_name(name);
	return new_zombie;
}
