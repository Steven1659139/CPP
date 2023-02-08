
#include "AAnimal.hpp"


int main() 
{
	// const AAnimal* j = new Dog(); 
	// const AAnimal* i = new Cat();
	// delete j;//should not create a leak 
	// delete i;

	// const AAnimal abstract_animal = new AAnimal; 

	const AAnimal* aanimals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ )
	{
        delete aanimals[i];
    }

	return 0; 
}
