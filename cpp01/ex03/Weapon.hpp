/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 02:25:05 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 05:19:05 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class   Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType();
        void        setType(std::string type);
};
#endif