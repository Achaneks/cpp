/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:34:37 by achanek           #+#    #+#             */
/*   Updated: 2025/11/03 22:25:09 by achanek          ###   ########.fr       */
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

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
