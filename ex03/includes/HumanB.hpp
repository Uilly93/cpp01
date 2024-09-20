#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "colors.hpp"
#include <iostream>
#include "Weapon.hpp"

class	HumanB{
	public:
	HumanB(std::string name);
	~HumanB();
	const std::string	&getname() const;
	void				setname(std::string name);
	void				setWeapon(Weapon &weapon);
	void				attack();
	private:
	Weapon *_weapon;
	std::string _name;
};

#endif