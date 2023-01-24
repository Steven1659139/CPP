/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:39:05 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 20:40:01 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char* argv[]) {
	// Vérifier que les trois paramètres ont été donnés
	if (argc != 4) {
	std::cout << "Veuillez entrer un nom de fichier et deux strings en argument" << std::endl;
	return 1;
	}

	replace(argv[1], argv[2], argv[3]);

	

	return 0;
}