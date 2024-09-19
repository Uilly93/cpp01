#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include "colors.hpp"

class Zombie{
	public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	set_zombie_horde(std::string name);
	private:
	std::string _name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif