/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:14:09 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/12 14:22:56 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "Default constructor called." << std::endl;
	this->number = 0;
	return ;
}

Fixed::Fixed( const Fixed &copy ){
	std::cout << "Copy constructor called." << std::endl;
	this->number = copy.getRawBits();
	return ;
}

Fixed::Fixed( const int i ){
	std::cout << "Int constructor called." << std::endl;
	this->number = i << Fixed::bits;
	return ;
}

Fixed::Fixed( const float f ){
	std::cout << "Float constructor called." << std::endl;
	this->number = roundf(f * (1 << Fixed::bits));
	return ;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called." << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const{
	return (this->number);
}

void	Fixed::setRawBits( int const raw ){
	this->number = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)this->number / (1 << Fixed::bits));
}

int		Fixed::toInt( void ) const{
	return (this->number >> Fixed::bits);
}

Fixed &Fixed::operator = ( const Fixed &copy ){
	std::cout << "Copy assignment operator called." << std::endl;
	this->number = copy.getRawBits();
	return (*this);
}

std::ostream &operator << (std::ostream &os, const Fixed &obj ){
	os << obj.toFloat();
	return (os);
}