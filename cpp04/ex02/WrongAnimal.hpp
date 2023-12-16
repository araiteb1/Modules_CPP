/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:46:09 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/16 01:10:28 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <string>
#include <iostream>
class  WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal &a);
        WrongAnimal &operator=(const WrongAnimal &a);
        ~WrongAnimal();
        
        void setType(std::string type);
        std::string getType() const;
        void makeSound() const;
};
#endif