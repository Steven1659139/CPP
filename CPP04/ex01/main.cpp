
#include "Animal.hpp"


int main() 
{
	std::cout << "\n[CONSTRUCTOR]\n";

	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	std::cout << "\n[DESTRUCTOR]\n";
    for ( int i = 0; i < 4; i++ )
	{
        delete animals[i];
    }



	std::cout << "\n[COPY CONSTRUCTOR]\n";
	const Dog dog = Dog();
	const Dog dog_cpy = Dog(dog);
	
	std::cout << "\n[BRAIN]\n";
	dog.getBrain()->fill_brain();
	dog.getBrain()->print_brain();
	dog_cpy.getBrain()->print_brain();

	std::cout << "\n[BRAIN PTR]\n";
	std::cout << dog.getBrain() << std::endl;
	std::cout << dog_cpy.getBrain() << std::endl;

	std::cout << "\n[DESTRUCTOR]\n";


	return 0; 
}
