/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:07:22 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 20:46:21 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// const at end of function means that function will not change
// any members of class and before parameter
// means that parameter will not be changed inside function
class Animal
{
    // protected so it can be accessed in the concrete classes
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &object);
        Animal &operator=(const Animal &object);
        // virtual so that compiler knows to looks for children classes destructors first
        virtual ~Animal();
        virtual void makeSound()const;
        std::string getType()const;

};
#endif