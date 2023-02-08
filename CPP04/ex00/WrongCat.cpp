#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor call" << std::endl;
}

WrongCat::WrongCat(std::string name)
{
	this->type = "WrongCat";
	this->name = name;

}
WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor call" << std::endl;
}
WrongCat::WrongCat(const WrongCat &rhs)
{
	*this = rhs;
	std::cout << "Copy WrongCat constructor call" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	this->type = rhs.type;
	std::cout <<  "Copy WrongCat assignment operator call" << std::endl;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "PHOMP PHOOOOOOOMP" << std::endl;
}