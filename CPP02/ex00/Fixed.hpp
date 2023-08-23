/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:55:00 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/22 23:41:26 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
       int  value;
       static const int a = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed &p);
        Fixed& operator= (const Fixed& fixed);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
#endif