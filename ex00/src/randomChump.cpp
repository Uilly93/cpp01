#include "../includes/Zombie.hpp"

void	randomChump(std::string name){
	Zombie zombie(name);
	zombie.set_zombie_name(name);
	zombie.announce();
}
