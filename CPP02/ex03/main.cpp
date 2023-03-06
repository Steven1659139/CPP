/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:27:14 by slavoie           #+#    #+#             */
/*   Updated: 2023/03/06 15:12:58 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool find_point(Point const &a, Point const &b, Point const &c, Point const &point){
    float areaABC = (0.5f * (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())));
    float areaPAB = (0.5f * (a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY()) + point.getX()*(a.getY() - b.getY()))); 
    float areaPBC = (0.5f * (b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY()) + point.getX()*(b.getY() - c.getY()))); 
    float areaPCA = (0.5f * (c.getX() * (a.getY() - point.getY()) + a.getX() * (point.getY() - c.getY()) + point.getX()*(c.getY() - a.getY()))); 
    return ((areaABC) >= (abs(areaPAB) + abs(areaPBC) + abs(areaPCA)));
}

void viewTriangle(Point const &a, Point const &b, Point const &c, Point const &p) {
    int width = 12;
    int height = 25;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++) {
            if((p.getX()) == j && (p.getY()) == i)
                std::cout << "\033[41mX\033[0m";
            else if(find_point(a, b, c, Point(j, i)))
                std::cout << "Δ";
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
}

int main()
{

	Point a(0.0f, 7.0f);
    Point b(10.0f,2.0f);
    Point c(10.0f,17.0f);

    Point v(6.0f,10.0f);
    Point w(6.0f, 14.0f);
    Point x(10.0f, 10.0f);
    Point y(9.9f, 7.0f);

    std::cout << "Test 1,"<< v << " Dans le triangle:     True    " << "BSP: " << bsp(a, b, c, v) << std::endl;
        viewTriangle(a,b,c,v);
    std::cout << "Test 2,"<< w << " Dehors triangle:    False    " << "BSP: " << bsp(a, b, c, w) << std::endl;
        viewTriangle(a,b,c,w);
    std::cout << "Test 3,"<< x << " sur un arrete:        False    " << "BSP: " << bsp(a, b, c, x) << std::endl;
        viewTriangle(a,b,c,x);
    std::cout << "Test 4,"<< b << " sur un point:        False    " << "BSP: " << bsp(a, b, c, b) << std::endl;
        viewTriangle(a,b,c,b);
    std::cout << "Test 5,"<< y << " proche arrete:        True    " << "BSP: " << bsp(a, b, c, y) << std::endl;
        viewTriangle(a,b,c,y);



	Point A(6.0f,10.0f);
	Point B(6.0f,14.0f);
	Point C(10.0f, 10.0f);
	Point P(9.9f, 7.0f);
}

