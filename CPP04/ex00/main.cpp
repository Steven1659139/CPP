
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main() 
{
	std::cout << "[CONSTRUCTOR]\n";
	const Cat cat = Cat();
	const Dog dog = Dog();
	const WrongCat Wrong_cat = WrongCat();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	std::cout << "\n\n";


	std::cout << "[COPY CONSTRUCTOR]\n";
	const Cat Cat_cpy(cat);
	const Dog Dog_cpy(dog);
	const WrongCat wrong_cat_cpy(Wrong_cat);
	const Animal animal_cpy(*meta);
	std::cout << "\n\n";


	std::cout << "[TEST]\n";
	std::cout << "[ORIGIN]\n";
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	k->makeSound();
	meta->makeSound();
	std::cout << "\n[COPY]\n";
	std::cout << Cat_cpy.getType() << " " << std::endl;
	Cat_cpy.makeSound(); //will output the cat sound!
	std::cout << Dog_cpy.getType() << " " << std::endl;
	Dog_cpy.makeSound(); 
	std::cout << wrong_cat_cpy.getType() << " " << std::endl;
	Wrong_cat.makeSound();
	std::cout << animal_cpy.getType() << " " << std::endl;
	animal_cpy.makeSound();
	std::cout << "\n\n";


	std::cout << "[DESTRUCTOR]\n";

	delete i;
	delete j;
	delete k;
	delete meta;
	
	return 0; 
}
