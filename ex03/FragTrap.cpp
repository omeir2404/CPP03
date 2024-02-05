#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(): ClapTrap("Default_name", 100, 50, 20)
{
    std::cout << "< FragTrap > - " << this->name << " constructed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap "<< getName() << " constructor called" << std::endl;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->hitPoints = 100;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::attack(std::string const& target) {
    if ( this->energyPoints <= 0 ) {
        std::cout << "< FragTrap > - " << getName() << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< FragTrap > - " << getName() << " attacks " << target << " at range, causing " << this->attackDamage << " points of damage !" << std::endl;
    this->energyPoints -= 1;
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " wants to high five! Dont leave him hanging :)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}