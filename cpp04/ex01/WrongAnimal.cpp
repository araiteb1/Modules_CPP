/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:45:03 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/16 01:15:30 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"Default constructor WrongAnimal called"<<std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<<"constructor Parameters WrongAnimal called"<<std::endl;
    this->type = type;
}
WrongAnimal::WrongAnimal(WrongAnimal &wa)
{
    std::cout<<"constructor Parameters WrongAnimal called"<<std::endl;
    *this = wa;
}
WrongAnimal& WrongAnimal::operator= (const WrongAnimal &wa)
{
    std::cout<<"constructor Parameters WrongAnimal called"<<std::endl;
    this->type = wa.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"destructor WrongAnimal called"<<std::endl;
}

void    WrongAnimal::setType(std::string type)
{
    this->type = type;
}
std::string WrongAnimal::getType() const
{
    return(this->type);
}
void WrongAnimal::makeSound() const
{
    std::cout << "sound of animal" << std::endl;
}