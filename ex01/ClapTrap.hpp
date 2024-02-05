#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{    
	protected:
        std::string		name;
        unsigned int	hitPoints;
        unsigned int	energyPoints;
        unsigned int	attackDamage;

    public:
		ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int	hitPoints, unsigned int	energyPoints, unsigned int	attackDamage);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    //tests functions
        std::string getName();
        unsigned int getHitPoints();
        unsigned int getEnergyPoints();
        unsigned int getAttackDamage();
        void setName(std::string name);
        void setHitPoints(unsigned int hitPoints);
        void setEnergyPoints(unsigned int energyPoints);
        void setAttackDamage(unsigned int attackDamage);
};


#endif
