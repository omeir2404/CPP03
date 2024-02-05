#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
    ClapTrap("default_clap_name", 100, 50, 30)
{
	std::cout << "DiamondTrap constructor" << std::endl;
	_name = "default";
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name", 100, 50, 30)
{
	std::cout << "DiamondTrap param constructor" << std::endl;
	_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& copy)
{
	std::cout << "Diamondtrap operator =" << std::endl;
	ClapTrap::operator=(copy);
	_name = copy._name;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->_name <<
	" and i am originated from the ClapTrap named " << ClapTrap::name << "." <<
	std::endl;
}

void 		DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}
