/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:20:59 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 09:43:42 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

// const at end of function means that function will not change 
// any members of class and before parameter
// means that parameter will not be changed inside function
class AAnimal
{
    // protected so it can be accessed in the concrete classes
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &object);
        AAnimal &operator=(const AAnimal &object);
        // virtual so that compiler knows to looks for children classes destructors first
        virtual ~AAnimal();
        // making it equal to zero makes it a pure virtual function
        // and makes the class abstract so it cant be instantiated
        virtual void makeSound()const = 0;
        std::string getType()const;
     
};
#endif