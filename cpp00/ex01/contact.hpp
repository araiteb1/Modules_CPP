/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:11:36 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/15 20:58:52 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class   Contact
{
    private:
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;          
        std::string   phone_number;
        std::string   darkest_secret;
    
    public:

        void    set_firstName(std::string fname)
        {
            first_name = fname;
        }        
};

void    add();
void    search();
void    exit();


#endif