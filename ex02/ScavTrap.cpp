/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oharoon <oharoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:56:49 by ael-khni          #+#    #+#             */
/*   Updated: 2024/02/05 17:24:46 by oharoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default_name", 100, 50, 20)
{
    this->keeping = false;

    std::cout << "< ScavTrap > - " << this->name << " constructed." << std::endl;
}
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
    this->keeping = false;

    std::cout << "< ScavTrap > - " << this->name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "< ScavTrap > - " << this->name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( this->energyPoints <= 0 ) {
        std::cout << "< ScavTrap > - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< ScavTrap > - " << this->name << " attacks " << target << " at range, causing " << this->attackDamage << " points of damage !" << std::endl;
    this->energyPoints -= 1;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    this->keeping = copy.keeping;
    return (*this);
}


void    ScavTrap::guardGate() {
    if (!keeping)
    {
        std::cout << "< ScavTrap > - " << this->name << " is now in Gate keeper mode." << std::endl;
        keeping = true;
    }
    else
        std::cout << "< ScavTrap > - " << this->name << " is already in Gate keeper mode." << std::endl;
}