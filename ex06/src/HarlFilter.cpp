#include "../includes/HarlFilter.hpp"

HarlFilter::HarlFilter(){
	container[0].level = "DEBUG";
	container[0].func = &HarlFilter::_debug;
	container[1].level = "INFO";
	container[1].func = &HarlFilter::_info;
	container[2].level = "WARNING";
	container[2].func = &HarlFilter::_warning;
	container[3].level = "ERROR";
	container[3].func = &HarlFilter::_error;
	std::cout << GREEN << "constructor called" << RESET << std::endl;
}

HarlFilter::~HarlFilter(){
	std::cout << RED << "destructor called" << RESET << std::endl;
}

void HarlFilter::_debug(){
	std::cout << NGREEN << "      [DEBUG]" << RESET << std::endl;
	std::cout << GREEN << "Debug function called" << RESET << std::endl;
}

void HarlFilter::_info(){
	std::cout << NBLUE << "      [INFO]" << RESET << std::endl;
	std::cout << BLUE << "Info function called" << RESET << std::endl;
}

void HarlFilter::_warning(){
	std::cout << NORANGE << "      [WARNING]" << RESET << std::endl;
	std::cout << ORANGE << "Warning function called" << RESET << std::endl;
}

void HarlFilter::_error(){
	std::cout << NRED << "      [ERROR]" << RESET << std::endl;
	std::cout << RED << "Error function called" << RESET << std::endl;
}


void	HarlFilter::complain(std::string level){
	for(int i = 0; i < 4; i++){
		if(container[i].level == level){
				(this->*container[i].func)();
		}
	}
}

int	HarlFilter::complain_identifier(std::string level){
	for(int i = 0; i < 4; i++){
		if(container[i].level == level){
			return i;
		}
	}
	return -1;
}