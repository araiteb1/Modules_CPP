/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:15:51 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/16 01:35:28 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"Default constructor of WrongCat called"<<std::endl;
    this->type = "WrongCat";
}
WrongCat::WrongCat(WrongCat &c)
{
    std::cout<<"copy constructor WrongCat called"<<std::endl;
    *this = c;
}
WrongCat::WrongCat(std::string type)
{
    std::cout<<" constructor Parameters WrongCat called"<<std::endl;
    this->type = type;
}
WrongCat& WrongCat::operator=(const WrongCat &c)
{
    this->type = c.type;
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout<<"destructor of WrongCat called"<<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "sound of WrongCat is mimi" <<std::endl; 
}