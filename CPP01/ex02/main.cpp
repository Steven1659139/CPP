/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:23:59 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 15:41:37 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h> 
#include <iostream>

int main(){

	std::string Brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &Brain;
	std::string& stringREF = Brain;

	std::cout << "Brain adress:     " << &Brain << std::endl;
	std::cout << "stringPTR adress: " << stringPTR << std::endl;
	std::cout << "stringREF adress: " << &stringREF << std::endl << std::endl;

	std::cout << "Brain value:     " << Brain << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;

	



}