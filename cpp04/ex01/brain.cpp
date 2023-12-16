/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiteb <araiteb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:16:23 by araiteb           #+#    #+#             */
/*   Updated: 2023/12/15 23:38:20 by araiteb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout<< "Brain Default constructor called"<<std::endl;
}
Brain::Brain(Brain &b)
{
	std::cout<< "copy constructor Brain called"<<std::endl;
	*this = b;
}
Brain& Brain::operator=(const Brain &b)
{
	std::cout<< "constructor Parameters Brain called"<<std::endl;
	this->type = b.type;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = b.ideas[i];
	}
	return (*this);
}
Brain::~Brain()
{
	std::cout<< "destructor of Brain called"<<std::endl;
}