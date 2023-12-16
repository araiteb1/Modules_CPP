/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:47:54 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 22:29:37 by araiteb          ###   ########.fr       */
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
		Animal(std::string type);
		Animal(Animal &a);
		Animal &operator=(const Animal &a);
		virtual ~Animal();
		
		void setType(std::string type);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif