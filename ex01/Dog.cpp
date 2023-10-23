/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:08:15 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 21:19:49 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &object):Animal()
{
	type = "Dog";
    std::cout << "Dog copy constructor called" << std::endl;
    *this = object;
}

Dog &Dog::operator=(const Dog &object)
{
    if (this->type == object.type)
	{
    	std::cout << "Dog copy assignment operator called" << std::endl;
		if (this != &object)
		{
			if (brain)
				delete brain;
			brain = new Brain(*object.brain);
		}
   		 return (*this);
	}
	else
	{
		std::cout << "types do not match!!" <<std::endl;
		return (*this);
	}
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const
{
    std::cout << "Dog makes barking sound" << std::endl;
}

Brain *Dog::getBrain()const
{
    return (this->brain);
}

// std::string Dog::getIdeas( std::string ideas, int i) const
// {
// 	if (i > 0 && i < 99)
// 		return this->ideas[i];
// 	else
// 		return NULL;
// }

// void Dog::setIdeas(std::string idea, int number)
// {
// 	this->brain->ideas[number] = idea;
// }