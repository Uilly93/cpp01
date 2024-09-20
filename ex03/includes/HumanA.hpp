#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "colors.hpp"
#include <iostream>
#include "Weapon.hpp"

class	HumanA{
	public:
	HumanA(std::string name, Weapon const &weapon);
	~HumanA();
	const std::string	&getname() const;
	void				setname(std::string name);
	void				attack();
	private:
	Weapon const &_weapon;
	std::string _name;
};

#endif