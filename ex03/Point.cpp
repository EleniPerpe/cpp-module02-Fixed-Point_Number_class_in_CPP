/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:59:11 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/18 18:12:00 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& original) : _x(original._x), _y(original._y) {}

Point &Point::operator=(const Point& original)
{
	(void)original;
	std::cerr << "Copy assignment operator is not allowed for constant members" << std::endl;
	return *this;
}

Point::~Point() {}

const Fixed& Point::getX() const
{
	return _x;
}

const Fixed& Point::getY() const
{
	return _y;
}