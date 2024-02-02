#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &obj);
		Cure& operator=(const Cure &obj);
		virtual ~Cure();
		std::string const Cure::&getType() const
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif