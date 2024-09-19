#include "../includes/Zombie.hpp"

Zombie::Zombie(){
	std::cout << GREEN "🧟 THE HORDE IS ALIIIIIIVE ! 🧟" RESET << std::endl;
}

Zombie::~Zombie(){
	std::cout << RED "🔪🧟 Zombie horde destructed ! 🔪🧟" RESET << std::endl;
}

void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_zombie_horde(std::string name){
	_name = name;
}
