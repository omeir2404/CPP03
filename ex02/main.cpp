#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {

    FlagTrap flagTrap("FlagTrap");

    flagTrap.attack("Enemy1");
    flagTrap.takeDamage(20);
    flagTrap.beRepaired(10);
    flagTrap.attack("Enemy2");
    flagTrap.takeDamage(30);
    flagTrap.beRepaired(5);
    flagTrap.attack("Enemy3");
    flagTrap.takeDamage(50);
    flagTrap.beRepaired(15);
    flagTrap.highFivesGuys();
    return 0;
}