/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:27:45 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 00:29:26 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zom= new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
       zom[i].set_name(name);
    }
    return(&zom[0]);
}

int main()
{
    Zombie *b;
    int i = 0;
    b = zombieHorde(8, "a2");
    while(i < 8)
    {
        b[i].announce();
        i++;
    }
    return(0);
}