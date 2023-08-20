/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 03:32:50 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 05:20:31 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
}
Weapon::~Weapon(){}
std::string  Weapon::getType()
{
    return(this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

