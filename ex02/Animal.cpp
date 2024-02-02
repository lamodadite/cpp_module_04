#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}
