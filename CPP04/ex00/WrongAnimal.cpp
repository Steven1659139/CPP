#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Undefine wrong animal";
	std::cout << "Default WrongAnimal constructor call" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "Copy WrongAnimal constructor call" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	this->type = src.type;
	std::cout <<  "Copy WrongAnimal assignment operator call" << std::endl;
	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "* medley of Wrong animals sounds *" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}