#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
    std::cout << "------------------------------------------------" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will NOT output the cat sound!
	meta2->makeSound();
	delete meta2;
	delete i2;
    std::cout << "------------------------------------------------" << std::endl;

	const WrongCat* i3 = new WrongCat();
	std::cout << i3->getType() << " " << std::endl;
	i3->makeSound(); //will output the cat sound!
	delete i3;
    std::cout << "------------------------------------------------" << std::endl;

	return (0);
}