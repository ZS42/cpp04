/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:07:45 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 20:48:04 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	brain = new Brain;
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &object): Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = object;
}

Cat &Cat::operator=(const Cat &object)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = object.type;
	if (brain)
		delete brain;
	brain = new Brain;
	brain = object.brain;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound()const
{
    std::cout << "Cat makes meowing sound" << std::endl;
}

// std::string Cat::getIdeas(int i) const
// {
// 	if (i < 0 ||i >99)
// 		return NULL;
// 	else
// 		return this->ideas[i];
// }

// void Cat::setIdeas(std::string idea, int number)
// {
// 	this->ideas[number] = idea;
// }