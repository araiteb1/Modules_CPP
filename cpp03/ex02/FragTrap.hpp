/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:41:57 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/10 17:50:10 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
#define   FRAGTRAP_HPP

#include"ClapTrap.hpp"

class   FragTrap: public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();

        void highFivesGuys(void);
};
#endif