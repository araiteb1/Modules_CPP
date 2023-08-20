/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 03:57:22 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 05:30:42 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::~HumanA(){}
HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
}
void    HumanA::set_name(std::string name)
{
    this->name = name;
}
std::string  HumanA::get_name()
{
    return(this->name);
}
void    HumanA::attack()
{
   std::cout<< this->name << " attacks with their " << this->weapon.getType() <<std:: endl;
}
