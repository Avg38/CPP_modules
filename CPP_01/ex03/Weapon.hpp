#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();
	std::string const	&getType() const;
	void		setType(std::string new_type);
};

#endif