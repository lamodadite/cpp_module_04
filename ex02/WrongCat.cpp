#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal()
{
	this->type = obj.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}
