#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(NULL), _name(name) {
	std::cout << GREEN << _name << " just Spawned" << RESET << std::endl;
}

HumanB::~HumanB(){
	std::cout << RED << _name << " has been destroyed" RESET << std::endl;
}

void	HumanB::setname(std::string name){
	_name = name;
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}


void HumanB::attack(){
	if(_weapon == NULL){
		std::cout << NRED << _name << RED <<" has no weapon!" << RESET << std::endl;
		return ;
	}
	std::cout << NGREEN << _name << " attacks with their ";
	std::cout << NPURPLE << _weapon->getType() << RESET <<std::endl;
}