/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:09:26 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/14 19:38:27 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>

int main(int ac, char **av)
{
    int len;
    if(ac >= 2)
    {
        for(int j = 1; j < ac; j++)
        {
            len =strlen(av[j]);
            for(int i = 0 ; i < len; i++)
            {
                if(islower(av[j][i]))
                    av[j][i] = toupper(av[j][i]);
            } 
        
            std::cout << av[j] ; 
        }
        std::cout<< std::endl;
    }
    else
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}