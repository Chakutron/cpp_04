
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    std::cout << "------------------------------------------------" << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << "------------------------------------------------" << std::endl;

    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    int k = 0;
    while (k < 4)
    {
        delete (animals[k]);
        k++;
    }
    std::cout << "------------------------------------------------" << std::endl;

    return 0;
}