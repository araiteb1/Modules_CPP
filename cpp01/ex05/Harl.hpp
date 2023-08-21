/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 04:33:03 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/21 23:11:49 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP



#include<iostream>
#include<string>

class   Harl
{
    private:
       void debug( void );
       void info( void );
       void warning( void );
       void error( void );
       
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};

typedef void (Harl::*complainFunction)(void);
#endif