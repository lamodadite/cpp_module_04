#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal()
{
	this->brain = new Brain(*obj.brain);
	this->type = obj.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		*this->brain = *obj.brain;
		this->type = obj.type;
	}
	return *this;
}

void Dog::makeSound() const 
{
	std::cout << "░░░░░░░░░▄░░░░░░░░░░░░░░▄" << std::endl;
	std::cout << "░░░░░░░░▌▒█░░░░░░░░░░▄▀▒▌" << std::endl;
	std::cout << "░░░░░░░▌▒▒█░░░░░░░░▄▀▒▒▒▐" << std::endl;
	std::cout << "░░░░░░▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐" << std::endl;
	std::cout << "░░░░░▄▄▀▒░▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐" << std::endl;
	std::cout << "░░░▄▀▒▒▒░░░▒▒▒░░░▒▒▒▀██▀▒▌" << std::endl;
	std::cout << "░░▐▒▒▒▄▄▒▒▒▒░░░▒▒▒▒▒▒▒▀▄▒▒▌" << std::endl;
	std::cout << "░░▌░░▌█▀▒▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐" << std::endl;
	std::cout << "▐░░░▒▒▒▒▒▒▒▒▌██▀▒▒░░░▒▒▒▀▄▌" << std::endl;
	std::cout << "░▌░▒▄██▄▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▌" << std::endl;
	std::cout << "▌▒▀▐▄█▄█▌▄░▀▒▒░░░░░░░░░░▒▒▒" << std::endl;
	std::cout << "▐▒▒▐▀▐▀▒░▄▄▒▄▒▒▒▒▒▒░▒░▒░▒▒▒▒▌" << std::endl;
	std::cout << "▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒▒▒░▒░▒░▒▒▐" << std::endl;
	std::cout << "░▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒░▒░▒░▒░▒▒▒▌" << std::endl;
	std::cout << "░▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▄▒▒▒▒▌" << std::endl;
	std::cout << "░░▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀" << std::endl;
	std::cout << "░░░░▀▄▒▒▒▒▒▒▒▒▒▒▄▄▀" << std::endl;
	std::cout << "░░░░░░▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀" << std::endl;
	std::cout << "░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▀" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}