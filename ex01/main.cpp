#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    // Create a ScavTrap object
    ScavTrap scavTrap("John");

    // Test the attack function
    scavTrap.attack("Enemy");

    // Test the takeDamage function
    scavTrap.takeDamage(20);

    // Test the beRepaired function
    scavTrap.beRepaired(10);

    // Test the guardGate function
    scavTrap.guardGate();
    return 0;
}