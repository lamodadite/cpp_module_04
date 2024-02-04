#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj) : IMateriaSource()
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL) {
				delete this->_inventory[i];
			}
			if (obj._inventory[i] != NULL) {
				this->_inventory[i] = obj._inventory[i]->clone();
			}
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (this->_inventory[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	this->_inventory[i] = m;
	std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]->getType() == type) {
			std::cout << "create " << this->_inventory[i]->getType() << std::endl;
			return this->_inventory[i]->clone();
		}
	}
	std::cout << type << " is not exist!" << std::endl;
	return NULL;
}