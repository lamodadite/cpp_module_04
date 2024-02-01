#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	this->type = obj.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "  /\\_/\\ " << std::endl;
	std::cout << " ( o.o )" << std::endl;
	std::cout << "  > ^ < " << std::endl;
}