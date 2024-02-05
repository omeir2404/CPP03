#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    FragTrap FragTrap("FragTrap");

    FragTrap.attack("Enemy1");
    FragTrap.takeDamage(20);
    FragTrap.beRepaired(10);
    FragTrap.attack("Enemy2");
    FragTrap.takeDamage(30);
    FragTrap.beRepaired(5);
    FragTrap.attack("Enemy3");
    FragTrap.takeDamage(50);
    FragTrap.beRepaired(15);
    FragTrap.highFivesGuys();
    return 0;
}