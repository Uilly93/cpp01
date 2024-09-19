#include <iostream>
#include "../includes/colors.hpp"

int main (){
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory adress of string:    " << NPURPLE << &string << RESET << std::endl;
	std::cout << "memory adress of stringPTR: " << NPURPLE << stringPTR << RESET << std::endl;
	std::cout << "memory adress of stringREF: " << NPURPLE << &stringREF << RESET << std::endl;

	std::cout << "memory adress of string:    " << NGREEN << string << RESET << std::endl;
	std::cout << "memory adress of stringPTR: " << NGREEN << *stringPTR << RESET << std::endl;
	std::cout << "memory adress of stringREF: " << NGREEN << stringREF << RESET << std::endl;
	return 0;
}