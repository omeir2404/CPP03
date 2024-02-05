#ifndef ScavTrap_HPP
#define ScavTrap_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	private:
		bool keeping;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator=(const ScavTrap &copy);

    	void    attack(std::string const& target);
		void guardGate();

};

#endif