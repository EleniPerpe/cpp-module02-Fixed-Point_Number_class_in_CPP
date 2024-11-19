/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:25:04 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/19 14:24:16 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point a(0, 0);
	Point b(0, 10);
	Point c(10, 5);

	Point example1(4, 5);
	if (bsp(a, b, c, example1))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
	Point example2(15, 5);
	
}
