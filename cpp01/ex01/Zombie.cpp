/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:50:36 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 00:28:17 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(){}

void    Zombie::set_name(std::string nm)
{
    this->name = nm;
}

void    Zombie::announce( void )
{
   std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
    return(this->name);
}
