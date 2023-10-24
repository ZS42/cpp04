/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:20:54 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 09:39:21 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &object)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = object;
}

AAnimal &AAnimal::operator=(const AAnimal &object)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    this->type = object.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void AAnimal::makeSound()const
{
    std::cout << "AAnimal makes sound" << std::endl;
}

std::string AAnimal::getType()const
{
    return (this->type);
}
