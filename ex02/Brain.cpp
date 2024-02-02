#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}