/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:25:46 by achanek           #+#    #+#             */
/*   Updated: 2025/12/04 16:05:55 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"
#include <iostream>

class Point {
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &src);
		~Point();
        
		Point&	operator=(Point const &rSym);
		
		Fixed const	getX() const;
		Fixed const	getY() const;
		
	private:
		Fixed const	x;
		Fixed const	y;
};


#endif
