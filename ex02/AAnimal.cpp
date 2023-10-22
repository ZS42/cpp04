/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:20:54 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 01:22:28 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &object)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = object;
}

Animal &Animal::operator=(const Animal &object)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = object.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()const
{
    std::cout << "Animal makes sound" << std::endl;
}

std::string Animal::getType()const
{
    return (this->type);
}
