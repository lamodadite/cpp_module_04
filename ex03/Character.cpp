#include "Character.hpp"

Character::Character() : _name("default")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character " << name <<  " constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &obj) : ICharacter()
{
	std::cout << "Character copy constructor called" << std::endl;
	this->_name = obj._name;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

Character& Character::operator=(const Character &obj)
{
	if (this != &obj) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (obj._inventory[i] != NULL) {
				this->_inventory[i] = obj._inventory[i]->clone();
			}
		}
		this->_name = obj._name;
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	int i = 0;

	if (m == NULL) {
		std::cout << this->_name << " tried to equip but it's nothing" << std::endl;
		return ;
	}
	while (this->_inventory[i] != NULL && i < 4) {
		i++;
	}
	if (i >= 4) {
		std::cout << this->_name << "'s inventory is full!" << std::endl;
		return ;
	}
	this->_inventory[i] = m;
	std::cout << this->_name << " equips " << m->getType() << " at inventory " << i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) {
		std::cout << "wrong index. " << this->_name << " has 4 slots!" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL) {
		std::cout << this->_name << " doesn't have Materia at " << idx << std::endl;
		return ;
	}
	std::cout << this->_name << " unequip " << this->_inventory[idx]->getType() << " at slot " << idx << std::endl;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL) {
		std::cout << this->_name << " can't use because idx is wrong!" << std::endl;
		return ;
	}
	std::cout << this->_name;
	this->_inventory[idx]->use(target);
}
