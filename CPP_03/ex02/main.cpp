#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap fragTrap1;
	FragTrap fragTrap2(fragTrap1);
	ScavTrap scavTrap3;
	ClapTrap clapTrap4(scavTrap3);

	fragTrap2 = FragTrap("Foo");
	clapTrap4 = FragTrap("Bar");

	while (clapTrap4.getHitPoints())
	{
		fragTrap2.attack(clapTrap4.getName());
		clapTrap4.takeDamage(fragTrap2.getAttackDamage());
		clapTrap4.beRepaired(fragTrap2.getAttackDamage() / 3);
		std::cout << std::endl;
		fragTrap2.displayPoints();
		std::cout << std::endl;
		clapTrap4.displayPoints();
		std::cout << std::endl;
	}
	fragTrap2.highFivesGuys();
	return 0;
}
