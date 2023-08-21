/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 04:48:32 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/21 23:17:03 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
Harl::Harl(){}
Harl::~Harl(){}
void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void    Harl::info()
{
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void    Harl::warning()
{
    std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void    Harl::error()
{
    std::cout <<"This is unacceptable! I want to speak to the manager now." <<std::endl;
}
void    Harl::complain(std::string level)
{
    complainFunction tab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::cout<<" sel "<<level<< std::endl;
    std::string levels[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4 && levels[i].compare(level))
        i++;
    (this->*tab[i])();
}