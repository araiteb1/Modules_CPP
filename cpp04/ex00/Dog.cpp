/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:13:55 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 10:12:59 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Default constructor of dog called"<<std::endl;
    this->type = "Dog";
}
Dog::Dog(Dog &d)
{
    std::cout<<"copy constructor of dog called"<<std::endl;
    *this = d;
}
Dog::Dog(std::string type)
{
    std::cout<<" constructor of dog called"<<std::endl;
    this->type = type;
}
Dog& Dog::operator=(const Dog &d)
{
    this->type = d.type;
    return (*this);
}
Dog::~Dog()
{
    std::cout<<"destructor of dog called"<<std::endl;
}

void Dog::makeSound() const 
{
    std::cout <<"sound of dog is hoho" << std::endl;
}