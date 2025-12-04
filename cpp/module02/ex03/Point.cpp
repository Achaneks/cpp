/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:25:49 by achanek           #+#    #+#             */
/*   Updated: 2025/12/03 23:05:42 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(): x(0) ,y(0){}
Point::Point(float const x, float const y): x(x),y(y){}
Point::Point(Point const &src){ *this = src;}
Point::~Point(){}
Fixed const	Point::getX() const{return x;}
Fixed const	Point::getY() const {return y;}
Point&	Point::operator=(Point const &rSym)
{
    (void)rSym;
    return *this;
}
Point Point::operator-(Point const &rSym)
{
    return Point((this->x.toFloat() - rSym.x.toFloat()),
                 (this->y.toFloat() - rSym.y.toFloat()));
}
std::ostream&	operator<<(std::ostream &o, Point const &rSym) {
	o << "x:(" << rSym.getX() << "); y:(" << rSym.getY() << ");";
	return o;
}