/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:21:56 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 23:57:31 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

// const at end of function means that function will not change 
// any members of class and before parameter
// means that parameter will not be changed inside function
class WrongAnimal
{
    // protected so it can be accessed in the concrete classes
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &object);
        WrongAnimal &operator=(const WrongAnimal &object);
        // virtual so that compiler knows to looks for children classes destructors first
        virtual ~WrongAnimal();
        // not virtual so compiler uses base class function instead of most derived one
        void makeSound()const;
        std::string getType()const;
     
};
#endif