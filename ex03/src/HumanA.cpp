#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const &weapon): _weapon(weapon){
	_name = name;
	std::cout << GREEN << _name << " just Spawned" << std::endl;
};

HumanA::~HumanA(){
	std::cout << RED << _name << " has been destroyed" << std::endl;
}

void	HumanA::setname(std::string name){
	_name = name;
}

void HumanA::attack(){
	std::cout << NGREEN << _name << " attacks with their ";
	std::cout << NPURPLE << _weapon.getType() << RESET <<std::endl;
}
