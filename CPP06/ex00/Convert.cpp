/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:26:34 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 14:47:47 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Converter::Converter() {}

Converter::Converter(const Converter &rhs) 
{
	*this = rhs;
}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &rhs)
{
	this->c = rhs.c;
	this->i = rhs.i;
	this->f = rhs.f;
	this->d = rhs.d;
	this->initial_type = rhs.initial_type;


	return (*this);

}

int Converter::is_char(const std::string input)
{
	if (input.size() > 1)
		return (0);
	else if (!std::isalnum(input[0]))
		return(0);
	this->initial_type = "char";
	this->c = input[0];
	this->i = static_cast<int>(input[0]);
	this->f = static_cast<float>(input[0]);
	this->d = static_cast<double>(input[0]);
	// std::cout << "c = " << this->c << std::endl;
	return (1);
}

int Converter::is_int(std::string input)
{
	int i = 0;

	while(input[i])
	{
		if (!std::isdigit(input[i++]))
			return (0);
	}
	this->initial_type = "int";
	this->i = std::stoi(input);
	this->f = std::stof(input);
	this->c = static_cast<char>(std::stoi(input));
	this->d = std::stod(input);

	return (1);
}

int Converter::is_float(std::string input)
{
	if(input.find('.'))
	{
		this->c = static_cast<char>(std::stoi(input));
		this->i = std::stoi(input);
		this->f = std::stof(input);
		this->d = std::stod(input);
		return(1);
	}
	return(0);
}


void Converter::convert(std::string input)
{
	this->c = static_cast<char>(std::stoi(input));
	this->i = static_cast<int>(std::stoi(input));
	this->f = static_cast<float>(std::stof(input));
	this->d = static_cast<double>(std::stod(input));
}


void Converter::display_convertion()
{
	std::cout << "char: " << this->c << std::endl;
	std::cout << "int: " << this->i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << this->f << "f" << std::endl;
	std::cout << "double: " << this->d << std::endl;

}

int main(int argc, char **argv)
{
	Converter Converter;

	if (argc == 2)
	{
		// std::cout << Converter.is_char(argv[1]) << std::endl;
		// std::cout << Converter.is_int(argv[1]) << std::endl;
		Converter.convert(argv[1]);
		Converter.display_convertion();
	}
	else
		std::cout << "only 1 argument" << std::endl;

}