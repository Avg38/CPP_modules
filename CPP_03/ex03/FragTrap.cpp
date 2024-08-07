#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "*NoName*";
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) 
{
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "Copy FragTrap " << _name << " has been created" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return(*this);
}

void FragTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " need Hit Points and Energy Point to attack." << std::endl;
}

void	FragTrap::displayPoints(void)
{
	std::cout << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
	std::cout << "Attack Damages: " << _attackDamage << std::endl;
	std::cout << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is giving a high five!" << std::endl;
}
