#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

    DiamondTrap DiamondTrap("Minecraft");

    DiamondTrap.attack("Enemy1");
    DiamondTrap.takeDamage(20);
    DiamondTrap.beRepaired(10);
    DiamondTrap.attack("Enemy2");
    DiamondTrap.takeDamage(30);
    DiamondTrap.beRepaired(5);
    DiamondTrap.attack("Enemy3");
    DiamondTrap.takeDamage(50);
    DiamondTrap.beRepaired(15);
    DiamondTrap.highFivesGuys();
    DiamondTrap.whoAmI();
    return 0;
}