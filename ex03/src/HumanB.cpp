#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(NULL), _name(name) {
	std::cout << GREEN << _name << " just Spawned" << std::endl;
}

HumanB::~HumanB(){
	std::cout << RED << _name << " has been destroyed" << std::endl;
}

void	HumanB::setname(std::string name){
	_name = name;
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}


void HumanB::attack(){
	if(_weapon == NULL){
		std::cout << _name << " has no weapon!" << std::endl;
		return ;
	}
	std::cout << NGREEN << _name << " attacks with their ";
	std::cout << NPURPLE << _weapon->getType() << RESET <<std::endl;
}