/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:26:12 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/16 18:22:41 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = intNum << _fractional;
}

Fixed::Fixed(const float floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(floatNum * (1 << _fractional));
}

Fixed::Fixed(const Fixed& original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed& Fixed::operator=(const Fixed& original)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &original)
		this->_fixedPoint = original._fixedPoint;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return _fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
	// _fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedPoint / (1 << _fractional));
}

int Fixed::toInt( void ) const
{
	return (_fixedPoint >> _fractional);
}

bool Fixed::operator>(const Fixed& original) const
{
	return (this->_fixedPoint > original._fixedPoint);
}

bool Fixed::operator<(const Fixed& original) const
{
	return (this->_fixedPoint < original._fixedPoint);
}

bool Fixed::operator>=(const Fixed& original) const
{
	return (this->_fixedPoint >= original._fixedPoint);
}

bool Fixed::operator<=(const Fixed& original) const
{
	return (this->_fixedPoint <= original._fixedPoint);
}

bool Fixed::operator==(const Fixed& original) const
{
	return (this->_fixedPoint == original._fixedPoint);
}

bool Fixed::operator!=(const Fixed& original) const
{
	return (this->_fixedPoint != original._fixedPoint);
}

Fixed Fixed::operator+(const Fixed& original) const
{
	Fixed res;
	res._fixedPoint = _fixedPoint + original._fixedPoint;
}

Fixed Fixed::operator-(const Fixed& original) const
{
	Fixed res;
	res._fixedPoint = _fixedPoint - original._fixedPoint;
}

Fixed Fixed::operator*(const Fixed& original) const
{
	Fixed res;
	res._fixedPoint = _fixedPoint * original._fixedPoint;
}

Fixed Fixed::operator/(const Fixed& original) const
{
	Fixed res;
	res._fixedPoint = _fixedPoint / original._fixedPoint;
}

std::ostream& operator<<(std::ostream& os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}