#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _inventory[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource& operator=(const MateriaSource &obj);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif