/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:31:19 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 17:29:27 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef    SCAVTRAP_HPP
#define     SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    
        ScavTrap();
        ~ScavTrap();

        void guardGate();
};

#endif