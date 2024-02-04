#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &obj)
{
	std::cout << "assigning from " << obj.getType() << std::endl;
	return *this;
}

Ice* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}