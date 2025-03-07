/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:25:04 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/18 12:16:11 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
// Fixed a;
// Fixed d(10);    
// Fixed c(10.10f);
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << b << std::endl;
// std::cout << d << std::endl;
// std::cout << d + b << std::endl;
// std::cout << (c < d) << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << c << std::endl;
// std::cout << Fixed::min( a, b ) << std::endl;
// std::cout << b - a << std::endl;
// return 0;
// }

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << (b - a) << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}