/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:11:36 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/16 17:33:12 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class PhoneBook;

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
        void    set_lastName(std::string lname)
        {
            last_name = lname;
        }
        void    set_nickname(std::string nname)
        {
            nickname = nname;
        }
        void    set_phoneNumber(std::string pn)
        {
            phone_number = pn;
        }
        void    set_darkestSecret(std::string ds)
        {
            darkest_secret = ds;
        }


        std::string    get_firstName()
        {
            return(first_name);
        }
        std::string    get_lastName()
        {
            return(last_name);
        }
        std::string    get_nickname()
        {
            return(nickname);
        }
        std::string    get_phoneNumer()
        {
            return(phone_number);
        }
        std::string    get_darkestSecret()
        {
            return(darkest_secret);
        }

};



#endif