
#include "Animal.hpp"


int main() 
{
	// const Animal* j = new Dog(); 
	// const Animal* i = new Cat();
	// delete j;//should not create a leak 
	// delete i;

	std::cout << "[CONSTRUCTOR]\n";

	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	std::cout << "\n[DESTRUCTOR]\n";
    for ( int i = 0; i < 4; i++ )
	{
        delete animals[i];
    }



	std::cout << "[COPY CONSTRUCTOR]\n";
	const Dog dog = Dog();
	const Dog dog_cpy = Dog(dog);




	return 0; 
}
