#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type){
	_type = type;
	std::cout << NPURPLE << _type << GREEN << " 🛠️  Weapon Built 🛠️" << RESET << std::endl;
}

Weapon::~Weapon(){
	std::cout << NPURPLE << _type << RED << " 🛠️  Weapon Destroyed 🛠️" << RESET << std::endl;
}

void	Weapon::setType(std::string type){
	_type = type;
}

const std::string	&Weapon::getType() const{
	return _type;
}
