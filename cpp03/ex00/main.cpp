/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:42:18 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 15:12:11 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    
    a.attack("b");
    a.beRepaired(2);
    
    a.attack("b1");
    
    a.takeDamage(8);
    a.attack("b2");
    return(0);
}