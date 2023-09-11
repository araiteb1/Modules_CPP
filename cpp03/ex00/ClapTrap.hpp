/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:27:39 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/11 14:14:57 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class   ClapTrap{
    
    private:

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
        
        // ClapTrap& ClapTrap::operator- (int value);
        // ClapTrap& ClapTrap::operator+ (int value); 
};
#endif