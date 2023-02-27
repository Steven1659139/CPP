/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:43:41 by slavoie           #+#    #+#             */
/*   Updated: 2023/02/27 17:04:19 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(std::string infile, std::string s1, std::string s2)
{
	std::ifstream inFile(infile);
	if (!inFile) 
	{
		std::cout << "Impossible d'ouvrir le fichier " << infile << std::endl;
		return (0);
	}
	std::string newFileName = infile;
	newFileName += ".replace";
	std::ofstream outFile(newFileName);
	if (!outFile)
	{
		std::cout << "Impossible de créer le fichier " << newFileName << std::endl;
		return (0);
	}
	std::string line;
	while (getline(inFile, line))
	{
		int pos = 0;
		while ((pos = line.find(s1, pos)) != (int)std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line << std::endl;
	}
	std::cout << "Le fichier " << infile << " a été copié dans " << newFileName << " avec les occurrences de " << s1 << " remplacées par " << s2 << std::endl;
	return(1);
}