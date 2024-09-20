#include <fstream>
#include <iostream>

int main(int ac, char **av){
	if(ac != 4)
		return 1;

	std::string file_path(av[1]);
	std::string file_replace(file_path + ".replace");
	std::ifstream file1(file_path.c_str());
	std::ofstream file2(file_replace.c_str());

	if (!file1)
	{
		std::cout << "error open" << std::endl;
		return 1;
	}
	if (!file2) 
	{
		std::cout << "error open" << std::endl;
		return 1;
	}
	for(std::string content; std::getline(file1, content);)
	{
		if(content.find(av[2]))
			;
		if(file1.eof())
			file2 << content;
		else 
			file2 << content << std::endl;
	}

	return 0;
}