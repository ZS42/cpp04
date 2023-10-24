/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:07:45 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 09:46:55 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	type = "Cat";
	brain = new Brain;
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &object): AAnimal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this->brain = *object.brain;
}

Cat &Cat::operator=(const Cat &object)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	delete this->brain;
    this->brain = new Brain();
    this->type = object.type;
    *this->brain = *object.brain;
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

Brain *Cat::getBrain()const
{
    return (this->brain);
}
