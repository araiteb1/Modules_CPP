/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:15:56 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/16 01:31:06 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
     public:
        WrongCat();
        WrongCat(WrongCat &c);
        WrongCat(std::string type);
        WrongCat& operator=(const WrongCat &c);
        ~WrongCat();

        void makeSound() const ;
};
#endif