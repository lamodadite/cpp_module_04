#include "Cure.hpp"

Cure::Cure() : type("Cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria()
{
	this->type = obj.type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &obj)
{
	std::cout << "assigning from " << obj.getType() << std::endl;
	return *this;
}

std::string const Cure::&getType() const
{
	return this->type;
}

Cure* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << " heals " << target.getType() << "\'s wounds" << std::endl;
}