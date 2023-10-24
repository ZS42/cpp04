/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:06:55 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 23:19:44 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	size = 0;
}


Brain::Brain(const Brain &object)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = object;
}

Brain &Brain::operator=(const Brain &object)
{
	 std::cout << "Brain copy assignment operator called" << std::endl;
     this->size = 0;
	 if (this != &object)
	{
		for (int i = 0; i < 100 ; i++)
        {
			ideas[i] = object.getIdeas(i);
            if (ideas[i].empty())
            break;
        }
	}
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdeas(int i) const
{
	if (i < 0 || i > 99)
    {
		std::cout << "Error: index out of range" << std::endl;;
		// string cant be NULL
        return(" ");
    }
	else
	    return this->ideas[i];
}

void Brain::setIdeas(std::string idea, int size)
{
    if (size >= 0 && size < 100)
	    this->ideas[size] = idea;
    else
        std::cout << "Error: index out of range." << size << std::endl;
}