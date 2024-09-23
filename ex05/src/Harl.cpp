#include "../includes/Harl.hpp"

Harl::Harl(){
	container[0].level = "DEBUG";
	container[0].func = &Harl::_debug;
	container[1].level = "INFO";
	container[1].func = &Harl::_info;
	container[2].level = "WARNING";
	container[2].func = &Harl::_warning;
	container[3].level = "ERROR";
	container[3].func = &Harl::_error;
	std::cout << GREEN << "constructor called" << RESET << std::endl;
}

Harl::~Harl(){
	std::cout << RED << "destructor called" << RESET << std::endl;
}

void Harl::_debug(){
	std::cout << NGREEN << "      [DEBUG]" << RESET << std::endl;
	std::cout << GREEN << "Debug function called" << RESET << std::endl;
}

void Harl::_info(){
	std::cout << NBLUE << "      [INFO]" << RESET << std::endl;
	std::cout << BLUE << "Info function called" << RESET << std::endl;
}

void Harl::_warning(){
	std::cout << NORANGE << "      [WARNING]" << RESET << std::endl;
	std::cout << ORANGE << "Warning function called" << RESET << std::endl;
}

void Harl::_error(){
	std::cout << NRED << "      [ERROR]" << RESET << std::endl;
	std::cout << RED << "Error function called" << RESET << std::endl;
}

void	Harl::complain(std::string level){
	for(int i = 0; i < 4; i++){
		if(container[i].level == level)
			(this->*container[i].func)();
	}
}