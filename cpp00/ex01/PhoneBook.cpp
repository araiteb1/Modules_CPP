/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:28:37 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/16 19:04:20 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Contact   PhoneBook::add()
{
    Contact contact;

    std::string fname;
    std::string lname ;
    std::string nickname;
    std::string pn;
    std::string ds;
    
    std::cout <<"adding a contact :"<<std :: endl;
    if (fname.empty())
    {
            std::cout <<"first_name  : ";
            std ::cin >> fname;
            if (!fname.empty())
                contact.set_firstName(fname);
    }
    if (lname.empty())
    {
        std::cout <<"last_name  : ";
        std::cin >> lname;
        if (!lname.empty())
            contact.set_lastName(lname);
    }
    if (nickname.empty())
    {
        std::cout <<"nickname  : ";
        std::cin >> nickname;
        if(!nickname.empty())
            contact.set_nickname(nickname);
    }
    if (pn.empty())
    {
        std::cout <<"phone_number  : ";
        std::cin >> pn;
        if (!pn.empty())
            contact.set_phoneNumber(pn);
    }
    if (ds.empty())
    {
        std::cout <<"darkest_secret  :";
        std::cin >> ds;
        if (!ds.empty())
            contact.set_darkestSecret(ds);
    }
    // this->index++;
    return (contact);
}
void    PhoneBook::search()
{
    int i;
    std::string choix;
    int index;

    i = 0;
    std::cout << " Index  |  First Name   | Last Name  | NickName  " << std::endl;
    while(i < 8)
    {
        std::cout<< i << " | " << this->cont[i].get_firstName() << " | " << this->cont[i].get_lastName() << " | " << this->cont[i].get_nickname() << std::endl;
        i++;
    }
    std::cout << "select a index ::"<< std::endl;
    std::cin >> choix;
    index = stoi(choix);
    std::cout << index << std::endl;
    if(index >= 0 && index <= 7)
    {
        i = 0;
        while(i < 8)
        {
            if(i != index)
                i++;
            else if(i == index)
            {
                std::cout<< i << " | " << this->cont[i].get_firstName() << " | " << this->cont[i].get_lastName() << " | " << this->cont[i].get_nickname() << std::endl;
                break ;
            }
            i++;
        }
    }
    
    
    
}


int     main()
{
    std::string choice;
    PhoneBook phon;

    std::cout << "select your choice : ADD || SEARCH || EXIT ?" << std::endl;
    std::cin >> choice;
    int i = 0;
    while(!choice.empty())
    {
        if (choice == "ADD")
        {
            phon.set_cont(phon.add(), i);
            i++;
            if (i == 7)
                i= 0;
        }
        else if(choice == "SEARCH")
            phon.search();
        else if(choice == "EXIT")
            return (0);
        else
            std::cout << "try again !!" << std::endl;
        std::cout << "select your choice : ADD || SEARCH || EXIT ?" << std::endl;
        std::cin >> choice;
    }
    return 0;
}
