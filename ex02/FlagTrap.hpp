#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {

	private:
		FlagTrap();
	public:
		FlagTrap(std::string name);
		~FlagTrap();

    	void    attack(std::string const& target);
		void    highFivesGuys();

};

#endif