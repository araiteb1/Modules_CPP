/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:11:38 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 10:10:43 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog: public Animal
{
    public:
        Dog();
        Dog(Dog &d);
        Dog(std::string type);
        Dog& operator= (const Dog &d);
        ~Dog();
        void makeSound() const;
};


#endif