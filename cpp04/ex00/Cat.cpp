/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:12:35 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/12 13:14:37 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<"Default constructor of cat called"<<std::endl;
}
Cat::~Cat()
{
    std::cout<<"destructor of cat called"<<std::endl;
}