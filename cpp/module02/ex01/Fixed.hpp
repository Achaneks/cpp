/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:14:41 by achanek           #+#    #+#             */
/*   Updated: 2025/11/05 10:35:29 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
    int _value;
    static const int _bits = 8;

public:
    Fixed();                
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    // New for ex01:
    Fixed(const int n);                 // from int
    Fixed(const float f);               // from float

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

// insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
