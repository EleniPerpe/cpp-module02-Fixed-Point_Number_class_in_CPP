/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:16:07 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/15 18:43:56 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
}

Fixed::Fixed(const int intNum)
{
	_fixedPoint = intNum << _fractional;
}

Fixed::Fixed(const float floatNum)
{
	_fixedPoint = roundf(floatNum * (1 << _fractional));
}

Fixed::Fixed(const Fixed& original)
{
	*this = original;
}

Fixed &Fixed::operator=(const Fixed& original)
{
	if (this != &original)
		this->_fixedPoint = original._fixedPoint;
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return _fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedPoint / (1 << _fractional));
}

int Fixed::toInt( void ) const
{
	return (_fixedPoint << _fractional);
}
