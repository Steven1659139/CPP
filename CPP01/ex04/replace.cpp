/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:43:41 by slavoie           #+#    #+#             */
/*   Updated: 2023/01/23 20:41:06 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(std::string infile, std::string s1, std::string s2)
{
	// Ouvrir le fichier en lecture
	std::ifstream inFile(infile);
	if (!inFile) 
	{
		std::cout << "Impossible d'ouvrir le fichier " << infile << std::endl;
		return (0);
	}

	// Créer un nouveau fichier avec l'extension .replace
	std::string newFileName = infile;
	newFileName += ".replace";
	std::ofstream outFile(newFileName);
	if (!outFile) {
		std::cout << "Impossible de créer le fichier " << newFileName << std::endl;
		return (0);
	}

	// Lire le contenu du fichier et remplacer les occurrences de s1 par s2
	std::string line;
	while (getline(inFile, line)) {
		// Remplacer toutes les occurrences de s1 par s2 dans la ligne courante
		int pos = 0;
		while ((pos = line.find(s1, pos)) != (int)std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		// Écrire la ligne modifiée dans le nouveau fichier
		outFile << line << std::endl;
	}
	std::cout << "Le fichier " << infile << " a été copié dans " << newFileName << " avec les occurrences de " << s1 << " remplacées par " << s2 << std::endl;
	return(1);
}