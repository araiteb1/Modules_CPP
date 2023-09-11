/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:42:18 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 17:53:24 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{   
    FragTrap b;
    b.attack("a");
    b.beRepaired(20);
    b.takeDamage(10);
    b.highFivesGuys();
    return(0);
}