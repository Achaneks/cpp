/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:06:12 by achanek           #+#    #+#             */
/*   Updated: 2025/12/03 23:00:26 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

// int main() {
//     Point a(2.02f, 0.83f);
//     Point b(2.66f, 1.68f);
//     Point c(1.24f, 1.91f);
//     Point p(2.07f, 1.46f);

//     if (bsp(a, b, c, p))
//         std::cout << "Point p is inside the triangle." << std::endl;
//     else
//         std::cout << "Point p is NOT inside the triangle." << std::endl;

//     return 0;
// }



int main() {
    // Test 1: Point strictly inside triangle
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(1, 1);
        std::cout << "Test 1: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 2: Point on vertex A
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(0, 0);
        std::cout << "Test 2: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 3: Point on edge AB
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(2, 0);
        std::cout << "Test 3: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 4: Point on edge BC
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(2, 2);
        std::cout << "Test 4: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 5: Point outside near AB
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(2, -1);
        std::cout << "Test 5: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 6: Point outside near AC
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(-1, 2);
        std::cout << "Test 6: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 7: Point outside near BC
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(3, 3);
        std::cout << "Test 7: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 8: Point at center of triangle
    {
        Point a(0, 0), b(4, 0), c(0, 4), p(1, 1.33f);
        std::cout << "Test 8: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 9: Degenerate triangle (all points colinear)
    {
        Point a(0, 0), b(2, 2), c(4, 4), p(1, 1);
        std::cout << "Test 9: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    // Test 10: Small triangle, point clearly outside
    {
        Point a(0, 0), b(1, 0), c(0, 1), p(2, 2);
        std::cout << "Test 10: " << (bsp(a, b, c, p) ? "Inside" : "Outside") << std::endl;
    }

    return 0;
}

