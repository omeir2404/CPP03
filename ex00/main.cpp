#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("Test ClapTrap");

    // Test the getName() function
    std::cout << "Name: " << clapTrap.getName() << std::endl;

    // Test the getHitPoints() function
    std::cout << "Hit Points: " << clapTrap.getHitPoints() << std::endl;

    // Test the getEnergyPoints() function
    std::cout << "Energy Points: " << clapTrap.getEnergyPoints() << std::endl;

    // Test the getAttackDamage() function
    std::cout << "Attack Damage: " << clapTrap.getAttackDamage() << std::endl;

    // Test the attack() function
    clapTrap.attack("Enemy");

    // Test the takeDamage() function
    clapTrap.takeDamage(30);

    // Test the beRepaired() function
    clapTrap.beRepaired(20);

    ClapTrap clap1;

    ClapTrap clap2;

    for (int i = 0; i < 11; i++)
	{
		clap1.attack(clap2.getName());
		clap2.takeDamage(2);
		clap2.beRepaired(1);		
	}
	clap1.beRepaired(1);

    return 0;
}