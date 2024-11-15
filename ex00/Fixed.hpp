/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:30:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/14 17:02:44 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPoint;
	static const int _num = 8;
public:
	Fixed();
	~Fixed();	
	Fixed(Fixed const& original);
	Fixed& operator=(Fixed const& original);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif