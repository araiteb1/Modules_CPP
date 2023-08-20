/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 01:08:33 by araiteb           #+#    #+#             */
/*   Updated: 2023/08/20 01:56:52 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr;
    std::string & ref = str;
    
    ptr = &str;
    std::cout<< " * the memory address" << std::endl;
    std::cout << &str << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;
    std::cout<< " * the value" << std::endl;
    std::cout<< str << std::endl;
    std::cout << *ptr<< std::endl;
    std::cout << ref << std::endl;
}