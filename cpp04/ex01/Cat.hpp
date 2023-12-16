/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:08:59 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 22:48:16 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "brain.hpp"

class	Cat: public Animal
{
	private :
		Brain *a;
	public:
		Cat();
		Cat(Cat &c);
		Cat(std::string type);
		Cat& operator=(const Cat &c);
		~Cat();

		void makeSound() const ;
};


#endif