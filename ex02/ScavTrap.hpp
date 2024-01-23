#ifndef ScavTrap_HPP
#define ScavTrap_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		~ScavTrap();

    	void    attack(std::string const& target);
		void guardGate();

};

#endif