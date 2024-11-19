/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:49:52 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/19 14:24:11 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#pragma once

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& original);
	Point& operator=(const Point& original);
	~Point();

	const Fixed& getX() const;
	const Fixed& getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

// std::ostream& operator<<(std::ostream& os, const Point& point)
// {
//  os << std::endl;
// 	os << point.getX();
// 	os << std::endl;
// 	os << point.getY();
// 	return os;
// }
