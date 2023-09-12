/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:13:55 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/12 13:14:10 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Default constructor of dog called"<<std::endl;
}
Dog::~Dog()
{
    std::cout<<"destructor of dog called"<<std::endl;
}
