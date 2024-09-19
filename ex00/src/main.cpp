#include "../includes/Zombie.hpp"

int main (){
	Zombie *new_zombie;
	
	new_zombie = newZombie(NGREEN "Heap_zombie" RESET);
	randomChump(NRED "Stack_zombie" RESET);
	new_zombie->announce();
	delete new_zombie;
	return 0;
}