#include "../includes/Zombie.hpp"
#include <iostream>

int main (){
	Zombie *horde = zombieHorde(5, PURPLE "horde" RESET);
	for(int i = 0; i < 5; i++)
	{
		std::cout << i << " ";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}