/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:10:56 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 00:28:11 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef   ZOMBIE_HPP
#define    ZOMBIE_HPP


#include<iostream>
#include<string>

class  Zombie
{
    private:
        std:: string name;
   
    public:

        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    set_name(std::string nm);
        std::string    get_name();
        void    announce( void );

};
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );
    Zombie* zombieHorde( int N, std::string name );
#endif