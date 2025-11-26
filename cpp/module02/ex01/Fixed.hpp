/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:14:41 by achanek           #+#    #+#             */
/*   Updated: 2025/11/24 16:15:29 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
    int value;
    static const int bits = 8;

public:
    Fixed();                
    Fixed(const Fixed& other);
    Fixed(const int n); 
    Fixed(const float f);
    ~Fixed();
    
    Fixed& operator=(const Fixed& other);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
