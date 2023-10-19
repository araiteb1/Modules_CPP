/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:55:00 by araiteb           #+#    #+#             */
/*   Updated: 2023/10/19 04:33:44 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
       int  value;
       static const int a = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &p);
        Fixed(const int a);
        Fixed(const float b);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed& operator= (const Fixed& fixed);
        Fixed& operator+ (const Fixed& fixed);
        Fixed& operator- (const Fixed& fixed);
        Fixed& operator* (const Fixed& fixed);
        Fixed& operator/ (const Fixed& fixed);

        static Fixed& min(Fixed &a, Fixed &b);
	    static Fixed& max(Fixed &a, Fixed &b);
	    static const Fixed& min(Fixed const &a, Fixed const &b);
	    static const Fixed& max(Fixed const &a, Fixed const &b);

        bool operator < (const Fixed& fixed);
        bool operator <= (const Fixed& fixed);
        bool operator > (const Fixed& fixed);
        bool operator >= (const Fixed& fixed);
        bool operator != (const Fixed& fixed);
        bool operator == (const Fixed& fixed);
        
};
std::ostream& operator<< (std::ostream &os, const Fixed& fixed);
#endif