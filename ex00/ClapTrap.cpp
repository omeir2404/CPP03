#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

unsigned int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}

// void ClapTrap::setName(std::string name)
// {
//     this->name = name;
// }

// void ClapTrap::setHitPoints(unsigned int hitPoints)
// {
//     this->hitPoints = hitPoints;
// }

// void ClapTrap::setEnergyPoints(unsigned int energyPoints)
// {
//     this->energyPoints = energyPoints;
// }

// void ClapTrap::setAttackDamage(unsigned int attackDamage)
// {
//     this->attackDamage = attackDamage;
// }

