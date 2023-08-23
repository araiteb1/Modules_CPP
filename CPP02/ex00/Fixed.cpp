/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 03:12:45 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/23 00:00:01 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
    std::cout << "Default constructor called"<<std::endl;
}
Fixed::~Fixed(){
  std::cout << "Destructor called"<<std::endl;
  
}
Fixed::Fixed(Fixed &p){
  std::cout << "Copy constructor called"<<std::endl;
  this->value = p.value;
}
int     Fixed::getRawBits( void ) const
{
  std::cout<<"getRawBits member function called"<<std::endl;
  return (this->value); 
}
void       Fixed::setRawBits(int const raw)
{
  
  std::cout<<"setRawBits member function called"<<std::endl;
  this->value = raw;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
  this->value = fixed.value;
  std::cout<<"Copy assignment operator called"<<std::endl;
  return(*this);
}