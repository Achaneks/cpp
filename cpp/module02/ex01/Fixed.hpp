/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:14:41 by achanek           #+#    #+#             */
/*   Updated: 2025/11/04 14:47:18 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private :
        int                 value;
        static const int    bits = 8;
    public :
        Fixed();
        Fixed(const int value);
        Fixed(const float number);
        ~FiXed();

        
        float toFloat(void) const;
        int toInt(void) const;
        
};


#endif