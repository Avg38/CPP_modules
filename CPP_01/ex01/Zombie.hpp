#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;
	void	setName(std::string n);
};

Zombie	*zombieHorde(int N, std::string name);

#endif