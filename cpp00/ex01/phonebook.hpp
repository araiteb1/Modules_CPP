/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:45:34 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/16 17:55:04 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include "contact.hpp"


class   PhoneBook
{
    private:
        Contact cont[8];

    public:
        void    set_cont(Contact ct, int ind)
        {
            cont[ind] = ct;
        }

        Contact     add();
        void        search();
        void        exit();
        void        set_index(int i);
        int         get_index();
};


#endif