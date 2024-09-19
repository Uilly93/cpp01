#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout << GREEN "🧟 IT'S ALIIIIIIVE ! 🧟" RESET << std::endl;
	_name = name;
}

Zombie::~Zombie(){
	std::cout << RED "🔪🧟 Zombie destructed ! 🔪🧟" RESET << std::endl;
}

void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_zombie_name(std::string name){
	_name = name;
}
