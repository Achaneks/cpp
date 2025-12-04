/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:25:55 by achanek           #+#    #+#             */
/*   Updated: 2025/12/03 22:17:49 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed calcVector(Point const a, Point const b, Point const point) {
    float first = (point.getX().toFloat() - b.getX().toFloat()) *
                  (a.getY().toFloat() - b.getY().toFloat());

    float second = (a.getX().toFloat() - b.getX().toFloat()) *
                   (point.getY().toFloat() - b.getY().toFloat());

    return Fixed(first - second);
}


bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	PAB = calcVector(a, b, point);
	Fixed	PBC = calcVector(b, c, point);
	Fixed	PCA = calcVector(c, a, point);

	if (PAB > 0 && PBC > 0 && PCA > 0)
		return true;
	if (PAB < 0 && PBC < 0 && PCA < 0)
		return true;
	return false;
}