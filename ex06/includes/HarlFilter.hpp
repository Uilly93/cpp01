#ifndef HARLFILTER_HPP
#define  HARLFILTER_HPP

#include <iostream>
#include "colors.hpp"

enum choice {
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR
};

class HarlFilter{
	public:
	HarlFilter();
	~HarlFilter();
	void	complain(std::string level);
	int		complain_identifier(std::string level);
	private:
	std::string _level;
	void _debug (void);
	void _info (void);
	void _warning (void);
	void _error (void);
	struct	_container{
		std::string level;
		void (HarlFilter::*func) ();
	};

	_container container[4];
};

#endif