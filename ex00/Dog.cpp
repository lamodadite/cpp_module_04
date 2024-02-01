#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->type = obj.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
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