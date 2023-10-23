/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:05:25 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 13:21:59 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
    std::cout << "Animal constructor that takes a parameter called " << type << std::endl;
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