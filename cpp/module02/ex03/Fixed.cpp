/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:06:06 by achanek           #+#    #+#             */
/*   Updated: 2025/12/04 15:38:23 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed& other) {
    this->value = other.getRawBits();
}



Fixed::Fixed(const int n) {
    this->value = n << bits;
}

Fixed::Fixed(const float f) {
    this->value = static_cast<int>(roundf(f * (1 << bits)));
}
Fixed::~Fixed() {
}


int Fixed::getRawBits(void) const {
    return this->value;
}


float Fixed::toFloat(void) const {
    return static_cast<float>(this->value) / static_cast<float>(1 << bits);
}

int Fixed::toInt(void) const {
    return static_cast<int>(this->toFloat());
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return os;
}


Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        this->value = other.getRawBits();
    return *this;
}


bool Fixed::operator>(const Fixed& other) const
{
    return (this->value > other.value);
}
bool Fixed::operator<(const Fixed& other) const
{
    return (this->value < other.value);
}
bool Fixed::operator>=(const Fixed& other) const
{
    return (this->value >= other.value);
}
bool Fixed::operator<=(const Fixed& other) const
{
    return (this->value <= other.value);
}
bool Fixed::operator==(const Fixed& other) const
{
    return (this->value == other.value);
}
bool Fixed::operator!=(const Fixed& other) const
{
    return (this->value != other.value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));   
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed& other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++()
{
    this->value++;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->value++;
    return (tmp);
}
Fixed& Fixed::operator--()
{
        this->value--;
    return (*this);      
}
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->value--;
    return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    else
        return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    else 
        return b;  
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a < b)
        return b;
    else 
        return a;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return b;
    else 
        return a;
    
}