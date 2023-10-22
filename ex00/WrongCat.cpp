/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:34:05 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 01:00:33 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &object): WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = object;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    this->type = object.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()const
{
    std::cout << "WrongCat makes wrong meowing sound" << std::endl;
}
