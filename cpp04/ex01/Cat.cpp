/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:12:35 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 22:30:03 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout<<"Default constructor of cat called"<<std::endl;
	this->type = "Cat";
	this->a = new Brain();
}
Cat::Cat(Cat &c)
{
	std::cout<<"copy constructor cat called"<<std::endl;
	*this = c;
}
Cat::Cat(std::string type)
{
	std::cout<<" constructor Parameters cat called"<<std::endl;
	this->type = type;
}
Cat& Cat::operator=(const Cat &c)
{
	this->type = c.type;
	return (*this);
}
Cat::~Cat()
{
	delete this->a;
	std::cout<<"destructor of cat called"<<std::endl;
}

void Cat::makeSound() const
{
	std::cout << "sound of Cat is mimi" <<std::endl; 
}