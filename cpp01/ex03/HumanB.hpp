/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 02:24:51 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 05:32:37 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void  setName(std::string name);
        void    setWeapon(Weapon &weapon);
        std::string  getName();
        Weapon    getWeapon();
        void    attack();
    
};
#endif