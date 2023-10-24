/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:08:15 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 08:51:54 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &object):Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
	this->type = object.type;
    delete this->brain;
    this->brain = new Brain();
    *this->brain = *object.brain;
}

Dog &Dog::operator=(const Dog &object)
{
    std::cout << "Dog copy assignment operator called " << std::endl;
    delete this->brain;
    this->brain = new Brain();
    this->type = object.type;
    this->brain = object.brain;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound()const
{
    std::cout << "Dog makes barking sound" << std::endl;
}

Brain *Dog::getBrain()const
{
    return (this->brain);
}
