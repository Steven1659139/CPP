/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:39:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 17:19:02 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Veuillez entrer un nom de fichier et deux strings en argument" << std::endl;
		return 1;
	}
	replace(argv[1], argv[2], argv[3]);
	return 0;
}