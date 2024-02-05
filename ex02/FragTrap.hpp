#ifndef FragTrap_HPP
#define FragTrap_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &copy);


    	void    attack(std::string const& target);
		void    highFivesGuys();

};

#endif