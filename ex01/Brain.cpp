/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:06:55 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 21:35:31 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	// for (int i = 0; i < 100 ; i++)
			// this->ideas[i] = "ideas";
}


Brain::Brain(const Brain &object)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = object;
}

Brain &Brain::operator=(const Brain &object)
{
	 std::cout << "Brain copy assignment operator called" << std::endl;
	 if (this != &object)
	{
		for (int i = 0; i < 100 ; i++)
			this->ideas[i] = object.getIdeas(i);
	}
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
		return this->ideas[i];
	else
		// string cant be NULL
		return "Too many ideas";
}

void Brain::setIdeas(std::string idea, int number)
{
	this->ideas[number] = idea;
}