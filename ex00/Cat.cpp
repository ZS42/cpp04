/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:33:24 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 13:22:13 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
    std::cout << "cat constructor that takes a parameter called " << type << std::endl;
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
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Cat makes meowing sound" << std::endl;
}
