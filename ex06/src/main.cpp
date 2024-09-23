#include "../includes/HarlFilter.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << RED << "you need 1 argument <DEBUG|INFO|WARNING|ERROR>" << RESET << std::endl;
		return 1;
	}
	HarlFilter harlFilter;
	std::string complain_string = av[1];
	int complain = harlFilter.complain_identifier(complain_string);
	switch (complain) {
		case DEBUG:
			harlFilter.complain("DEBUG");
		case INFO:
			harlFilter.complain("INFO");
		case WARNING:
			harlFilter.complain("WARNING");
		case ERROR:
			harlFilter.complain("ERROR");
			break ;
	}
}