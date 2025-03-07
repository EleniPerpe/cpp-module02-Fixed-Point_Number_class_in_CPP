/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:25:46 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/18 12:36:16 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#pragma once

class Fixed
{
private:
	int _fixedPoint;
	static const int _fractional = 8;
public:
	Fixed();
	Fixed(const int intNum);
	Fixed(const float floatNum);
	Fixed(Fixed const& original);
	Fixed& operator=(Fixed const& original);
	~Fixed();	
	
	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator>(const Fixed& original) const;
	bool operator<(const Fixed& original) const;
	bool operator>=(const Fixed& original) const;
	bool operator<=(const Fixed& original) const;
	bool operator==(const Fixed& original) const;
	bool operator!=(const Fixed& original) const;

	Fixed operator+(const Fixed& original) const;
	Fixed operator-(const Fixed& original) const;
	Fixed operator*(const Fixed& original) const;
	Fixed operator/(const Fixed& original) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

