/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:05:07 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/21 03:58:38 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<fstream>
#include <iterator>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::fstream file1(av[1]);
        std::string  complet = ".replace";
        std::ofstream  file2(av[1] + complet);
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string  text;
        int pose;
        
        while(std::getline(file1, text))
        {
            if(!s1.empty())
            {
                pose = text.find(s1);
                while(pose != std::string::npos)
                {
                    text.erase(pose, s1.length());
                    text.insert(pose, s2);
                    pose = text.find(s1);
                }  
            }
            file2 << text << std::endl;
        }
        file1.close();
        file2.close();
    }
}