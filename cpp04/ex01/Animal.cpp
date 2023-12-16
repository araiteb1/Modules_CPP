/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:03:22 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 22:48:40 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
	std::cout<<"Default constructor animal called"<<std::endl;
}
Animal::Animal(std::string type)
{
	 std::cout<<"constructor Parameters of animal called"<<std::endl;
	this->type = type;
}
Animal::Animal(Animal &a)
{
	std::cout<<"copy constructor of animal called"<<std::endl;
   *this = a;
}

Animal& Animal::operator=(const Animal &a)
{
	std::cout<<"copy assignment operator of animal called"<<std::endl;
	this->type = a.type;
	return (*this);
}
Animal::~Animal()
{
	std::cout<<"destructor of animal called"<<std::endl;
}
void    Animal::setType(std::string type)
{
	this->type = type;
}
std::string Animal::getType() const
{
	return(this->type);
}
void Animal::makeSound() const
{
	std::cout << "sound of animal" << std::endl;
}