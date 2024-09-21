#include <fstream>
#include <iostream>

std::string	replace_word(std::string &content, std::string &search, std::string &replace){
	std::string first_part = content.substr(0, content.find(search));
	std::string secont_part = content.substr(content.find(search) + search.size());
	return (first_part + replace + secont_part);
}

int main(int ac, char **av){
	if(ac != 4)
		return 1;
	std::string file_path(av[1]);
	std::string search = av[2];
	std::string replace = av[3];
	std::string file_replace(file_path + ".replace");
	std::ifstream file1(file_path.c_str());

	if (!file1.is_open())
	{
		std::cout << "error open" << std::endl;
		return 1;
	}
	std::ofstream file2(file_replace.c_str());
	if (!file2.is_open()) 
	{
		std::cout << "error open" << std::endl;
		file1.close();
		return 1;
	}
	for(std::string content; std::getline(file1, content);)
	{
		while(content.find(search) != std::string::npos){
			if(search == replace || search.empty())
				break ;
			content = replace_word(content, search, replace);
		}
		if(file1.eof())
			file2 << content;
		else 
			file2 << content << std::endl;
	}
	file1.close();
	file2.close();
	return 0;
}