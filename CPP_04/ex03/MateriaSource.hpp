#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
	~MateriaSource() {}
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
};

#endif