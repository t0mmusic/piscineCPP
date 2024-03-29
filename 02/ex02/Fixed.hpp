/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:26:52 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/15 09:52:11 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int					number;
	static const int	bits = 8;

public:

	Fixed( void );
	Fixed( const Fixed &copy );
	Fixed( const int i );
	Fixed( const float f );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed 	&operator = ( const Fixed &copy );

	float	operator + ( const Fixed &obj ) const ;

	float	operator - ( const Fixed &obj ) const ;

	float	operator / ( const Fixed &obj ) const ;

	float	operator * ( const Fixed &obj ) const ;

	bool 	operator > ( Fixed &obj ) const ;

	bool 	operator < ( Fixed &obj ) const ;

	bool 	operator >= ( Fixed &obj ) const ;

	bool 	operator <= ( Fixed &obj ) const ;

	bool 	operator == ( Fixed &obj ) const ;

	bool 	operator != ( Fixed &obj ) const ;

	float	operator ++ ( void );

	float	operator -- ( void );

	int		operator ++ ( int );

	int		operator -- ( int );

	Fixed	static &min( Fixed &obj1, Fixed &obj2 );

	const Fixed	static &min( const Fixed &obj1, const Fixed &obj2 );

	Fixed	static &max( Fixed &obj1, Fixed &obj2 );

	const Fixed	static &max( const Fixed &obj1, const Fixed &obj2 );
};

std::ostream &operator << (std::ostream &os, const Fixed &obj );

#endif