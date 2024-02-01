#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	this->type = obj.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}


void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal's Sound" << std::endl;
}