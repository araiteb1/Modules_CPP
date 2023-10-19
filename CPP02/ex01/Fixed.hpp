/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:55:00 by araiteb           #+#    #+#             */
/*   Updated: 2023/10/19 03:42:43 by araiteb          ###   ########.fr       */
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

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed& operator= (const Fixed& fixed);
};

std::ostream& operator<< (std::ostream &os, const Fixed& fixed);
#endif