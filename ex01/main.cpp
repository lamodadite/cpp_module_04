#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::string str;
	Animal *meta[10];

	for (int i = 0; i < 10; i++) 
		meta[i] = new Dog();
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete meta[i];
	std::cout << std::endl;

	Dog *d = new Dog();
	Dog *d2 = new Dog();
	std::cout << std::endl;
	str = d->getBrain()->ideas[0];
	std::cout << "default Dog1's first idea is " << str << std::endl;

	d->getBrain()->ideas[0] = "something";
	str = d->getBrain()->ideas[0];
	std::cout << "modified Dog1's first idea is " << str << std::endl;

	*d2 = *d;
	str = d2->getBrain()->ideas[0];
	std::cout << "After the assignment, Dog2's first idea is " << str << std::endl;

	std::cout << std::endl;
	delete d;
	d = NULL;
	delete d2;
	d2 = NULL;
	return 0;
}