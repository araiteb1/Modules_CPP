/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 04:26:13 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 05:33:14 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
# include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::~HumanB(){}
HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

std::string  HumanB::getName()
{
    return(this->name);
}
void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
Weapon    HumanB::getWeapon()
{
    return(*this->weapon);
}

void    HumanB::attack()
{
    if(!this->weapon)
    {
        std::cout<< this->name << " has no weapon " << std::endl;
        return;
    }
    std::cout<< this->name << " attacks with their " << this->weapon->getType() << std::endl;
}