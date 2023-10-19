/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 03:12:45 by araiteb           #+#    #+#             */
/*   Updated: 2023/10/19 04:34:12 by araiteb          ###   ########.fr       */
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
Fixed::Fixed(const Fixed &p){
	this->value = p.value;
	std::cout << "Copy constructor called"<<std::endl;
}
Fixed::Fixed(const int a)
{
	std::cout << "Int cestructor called" << std::endl;
	this->value = a << this->a;
}
Fixed::Fixed(const float b)
{
	std::cout << "Float cestructor called" << std::endl;
	this->value = std::roundf(b * (1 << this->a));
}
float Fixed:: toFloat( void ) const
{
	return((float )(this->getRawBits()) / (1 << this->a));
}
int Fixed ::toInt( void ) const
{
	return (this->getRawBits() >> this->a);
}
int     Fixed::getRawBits( void ) const
{
	return (this->value); 
}
void       Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
Fixed& Fixed::operator= (const Fixed& fixed)
{
	this->value = fixed.value;
	std::cout << "Copy assignment operator called " << std::endl;
	return (*this);
}
std::ostream& operator<< (std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
/*------- comparison operators -----------*/
bool Fixed::operator<(const Fixed& fixed)
{
	if (this->value < fixed.value)
		return 1;
	else
		return 0;
}
bool Fixed::operator<=(const Fixed& fixed)
{
	if (this->value <= fixed.value)
		return 1;
	else
		return 0;
}
bool Fixed::operator>(const Fixed& fixed)
{
	if (this->value > fixed.value)
		return 1;
	else
		return 0;
}
bool Fixed::operator>=(const Fixed& fixed)
{
	if (this->value >= fixed.value)
		return 1;
	else
		return 0;
}
bool Fixed::operator!=(const Fixed& fixed)
{
	if (this->value != fixed.value)
		return 1;
	else
		return 0;
}
bool Fixed::operator==(const Fixed& fixed)
{
	if (this->value == fixed.value)
		return 1;
	else
		return 0;
}
/*------- arithmetic operators ----------*/

Fixed& Fixed::operator+ (const Fixed& fixed)
{
	this->value = this->value + fixed.value;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return(*this);
}
Fixed& Fixed::operator- (const Fixed& fixed)
{
	this->value = this->value - fixed.value;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return(*this);
}
Fixed& Fixed::operator* (const Fixed& fixed)
{
	this->value = this->value * fixed.value;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return(*this);
}
Fixed& Fixed::operator/ (const Fixed& fixed)
{
	if (fixed.value != 0)
		this->value = this->value / fixed.value;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return(*this);
}
/*--------------- max/min ----------------*/

