/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:03:22 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/12 13:23:10 by araiteb          ###   ########.fr       */
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
void Animal::makeSound()
{
    
}