#include <fstream>
#include <iostream>
#include "../includes/colors.hpp"

std::string	replace_word(std::size_t pos, std::string &content, std::string &search, std::string &replace){
	std::string first_part = content.substr(0, content.find(search, pos));
	std::string secont_part = content.substr(content.find(search, pos) + search.size());
	return (first_part + replace + secont_part);
}

int main(int ac, char **av){
	if(ac != 4)
	{
		std::cerr << RED << "you need 3 arguments <file> <search> <replace>" << RESET << std::endl;
		return 1;
	}
	std::string file_path(av[1]);
	std::string search = av[2];
	std::string replace = av[3];
	std::string file_replace(file_path + ".replace");
	std::ifstream infile(file_path.c_str());

	if (!infile.is_open())
	{
		std::cerr << RED << "error open" << RESET << std::endl;
		return 1;
	}
	std::ofstream outfile(file_replace.c_str());
	if (!outfile.is_open()) 
	{
		std::cerr << RED << "error open" << RESET << std::endl;
		infile.close();
		return 1;
	}
	for(std::string content; std::getline(infile, content);)
	{
		std::size_t pos = 0;
		while(content.find(search, pos) != std::string::npos){
			if(search == replace || search.empty())
				break ;
			content = replace_word(pos, content, search, replace);
			pos = content.find(search, pos) + replace.size();
		}
		if(infile.eof())
			outfile << content;
		else
			outfile << content << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}