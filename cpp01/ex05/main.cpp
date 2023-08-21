/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 04:50:01 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/21 05:36:20 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
    while(1)
    {
        Harl  *harl = new Harl();
        std::string    level;
        std::cout<< "select a level : DEBUG, INFO, WARNING, ERROR" <<std::endl;
        std::cin >> level;
        harl->complain(level);
    }
    return 0;
}