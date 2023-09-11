/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:03:22 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/11 15:30:45 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    std::cout<<"Default constructor of animal called"<<std::endl;
}
Animal::~Animal()
{
    std::cout<<"destructor of animal called"<<std::endl;
}
Dog::Dog()
{
    std::cout<<"Default constructor of dog called"<<std::endl;
}
Dog::~Dog()
{
    std::cout<<"destructor of dog called"<<std::endl;
}

Cat::Cat()
{
    std::cout<<"Default constructor of cat called"<<std::endl;
}
Cat::~Cat()
{
    std::cout<<"destructor of cat called"<<std::endl;
}