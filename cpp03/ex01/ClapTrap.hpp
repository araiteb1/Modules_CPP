/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:27:39 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 17:00:08 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class   ClapTrap{
    
    protected:
        std::string Name;
        unsigned int Enargy_points;
        unsigned int Hit_points;
        unsigned int attack_damage;

    public:
    
        ClapTrap();
        ~ClapTrap();

        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif