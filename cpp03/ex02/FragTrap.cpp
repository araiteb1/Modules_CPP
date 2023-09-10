/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:45:27 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 17:52:27 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Hit_points = 100;
    this->Enargy_points = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
    
}
void    FragTrap::highFivesGuys(void)
{
    std::cout<<"give as a high fives !" << std::endl;
}