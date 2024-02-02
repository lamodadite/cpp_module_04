#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal()
{
	this->brain = new Brain(*obj.brain);
	this->type = obj.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->brain = obj.brain;
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

Brain* Cat::getBrain() const
{
	return this->brain;
}