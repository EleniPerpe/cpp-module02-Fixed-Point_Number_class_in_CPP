/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:10:15 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/15 18:15:15 by eperperi         ###   ########.fr       */
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
};