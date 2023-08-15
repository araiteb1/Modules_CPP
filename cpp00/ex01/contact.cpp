/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:44:16 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/15 21:01:01 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    add()
{
    Contact contact;

    std::string fname;
    std::string lname;
    std::string pn;
    std::string ds;
    std::string nickname;
    std::cout <<"adding a contact :"<<std :: endl;
    std::cout <<"first_name  : ";
    std ::cin >> fname;
    if(!fname.empty())
        contact.set_firstName(fname);
    std::cout <<"last_name  :"<<std :: endl;
    std::cout <<"nickname  :"<<std :: endl;
    std::cout <<"phone_number  :"<<std :: endl;
    std::cout <<"darkest_secret  :"<<std :: endl;
    
}
void    search()
{
    std::cout <<"searching for contact"<<std::endl;
}
void    exit()
{
    std::cout <<"exit" << std::endl;
}
