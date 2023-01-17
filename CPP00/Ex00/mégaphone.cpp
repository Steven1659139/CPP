/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mégaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stevenlavoie <stevenlavoie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:27:32 by stevenlavoi       #+#    #+#             */
/*   Updated: 2022/12/23 21:35:32 by stevenlavoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv){

    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    while(*argv)
    {
        argv++;
        while(*argv && **argv)
        {
            std::cout << (char)std::toupper(**argv);
            (*argv)++;
        }
    }
}
