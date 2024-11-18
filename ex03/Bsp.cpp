/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:27:54 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/18 19:19:28 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed calculate(const Point& point1, const Point& point2, const Point& point3);

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed originalArea = calculate(a, b, c);

	Fixed area1 = calculate(point, b, c);
	Fixed area2 = calculate(point, a, c);
	Fixed area3 = calculate(point, a, b);

	if (area1 == Fixed(0) || area2 == Fixed(0) || area3 == Fixed(0))
		return false;
	return (originalArea == (area1 + area2 + area3));
}
static Fixed calculate(const Point& point1, const Point& point2, const Point& point3)
{
	Fixed x1 = point1.getX();
	Fixed y1 = point1.getY();
	Fixed x2 = point2.getX();
	Fixed y2 = point2.getY();
	Fixed x3 = point3.getX();
	Fixed y3 = point3.getY();

	Fixed area = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

	if (area < Fixed(0))
		return area / Fixed(-2);
	return area / Fixed(2);
}