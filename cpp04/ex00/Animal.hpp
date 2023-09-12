/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:47:54 by araiteb           #+#    #+#             */
/*   Updated: 2023/09/12 13:27:01 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        virtual void makeSound();
};

#endif