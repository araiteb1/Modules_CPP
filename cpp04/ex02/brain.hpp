/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:30:55 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 22:29:54 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain: public Animal
{
	protected :
		std::string ideas[100];
	public :
		Brain();
		Brain(Brain &b);
		Brain &operator=(const Brain &b);
		~Brain();
};
#endif