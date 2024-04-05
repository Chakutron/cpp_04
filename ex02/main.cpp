
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const A_Animal* j = new Dog();
    const A_Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    std::cout << "------------------------------------------------" << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << "------------------------------------------------" << std::endl;

    const A_Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    int k = 0;
    while (k < 4)
    {
        delete (animals[k]);
        k++;
    }
    std::cout << "------------------------------------------------" << std::endl;

    // Test to instantiate an abstract class
    //A_Animat test;
    /*A_Animal *test;
    test = new Cat();
    delete (test);
    std::cout << "------------------------------------------------" << std::endl;*/

    return 0;
}