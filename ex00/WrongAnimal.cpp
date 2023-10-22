/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:33:56 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 00:52:13 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = object;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->type = object.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal makes sound" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return (this->type);
}