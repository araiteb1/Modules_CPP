/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:08:59 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 10:13:14 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class   Cat: public Animal
{
    public:
        Cat();
        Cat(Cat &c);
        Cat(std::string type);
        Cat& operator=(const Cat &c);
        ~Cat();

        void makeSound() const ;
};


#endif