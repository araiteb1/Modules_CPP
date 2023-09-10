/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:39:10 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 15:44:20 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Hit_points = 10;
    this->Enargy_points = 10;
    this->attack_damage = 0;
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout<< "Destructor called"<<std::endl;
}
void ClapTrap::attack(const std::string& traget)
{
    std::cout<< "ClapTrap" << this->Name << " attacks " << traget << ", causing " << this->attack_damage <<" points of damage" <<std::endl;
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hit_points != 0)
    {
        this->Hit_points = this->Hit_points - amount;
        std::cout<<this->Name << " have a " << this->Hit_points << " in here energy "<< std::endl;
    }
    else
        std::cout<< "deid" <<std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Enargy_points != 0)
    {
        std::cout<< " 1   "<<this->Enargy_points  << std::endl;
        this->Enargy_points = this->Enargy_points + amount;
        std::cout<<this->Name << "have a " << this->Enargy_points << " in here energy "<< std::endl;
    }
    else
        std::cout << " NULL Energy " << std::endl;
}
