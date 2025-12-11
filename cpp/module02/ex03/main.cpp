/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:06:12 by achanek           #+#    #+#             */
/*   Updated: 2025/12/04 16:07:05 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    Point a(2.02f, 0.83f);
    Point b(2.66f, 1.68f);
    Point c(1.24f, 1.91f);
    Point p(2.07f, 1.46f);

    if (bsp(a, b, c, p))
        std::cout << "Point p is inside the triangle." << std::endl;
    else
        std::cout << "Point p is NOT inside the triangle." << std::endl;

    return 0;
}



