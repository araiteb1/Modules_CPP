/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:11:38 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 22:30:26 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
#define DOG_HPP

#include "brain.hpp"

class   Dog: public Animal
{
	private :
		Brain *b;
	public:
		Dog();
		Dog(Dog &d);
		Dog(std::string type);
		Dog& operator= (const Dog &d);
		~Dog();
		void makeSound() const;
};


#endif