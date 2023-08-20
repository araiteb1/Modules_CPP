/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 02:24:55 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 05:11:51 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void  set_name(std::string name);
        std::string  get_name();
        void    attack();
}; 
#endif