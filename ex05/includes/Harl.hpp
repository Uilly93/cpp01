#ifndef HARL_HPP
#define  HARL_HPP

#include <iostream>
#include "colors.hpp"

class Harl{
	public:
	Harl();
	~Harl();
	void complain(std::string level);
	private:
	std::string _level;
	void _debug (void);
	void _info (void);
	void _warning (void);
	void _error (void);
	struct	_container{
		std::string level;
		void (Harl::*func) ();
	};

	_container container[4];
};

#endif