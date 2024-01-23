#include "FlagTrap.hpp"

#include <iostream>

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FlagTrap constructor called" << std::endl;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->hitPoints = 100;
}

FlagTrap::~FlagTrap() {
    std::cout << "FlagTrap destructor called" << std::endl;
}

void    FlagTrap::attack(std::string const& target) {
    if ( this->energyPoints <= 0 ) {
        std::cout << "< FlagTrap > - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< FlagTrap > - " << this->name << " attacks " << target << " at range, causing " << this->attackDamage << " points of damage !" << std::endl;
    this->energyPoints -= 1;
}

void    FlagTrap::highFivesGuys() {
    std::cout << "FlagTrap " << this->name << " wants to high five! Dont leave him hanging :)" << std::endl;
}