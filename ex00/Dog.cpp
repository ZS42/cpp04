/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:33:38 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 00:41:23 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &object):Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = object;
}

Dog &Dog::operator=(const Dog &object)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->type = object.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const
{
    std::cout << "Dog makes barking sound" << std::endl;
}
