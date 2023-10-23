/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:33:43 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 13:17:22 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

class Dog: public Animal
{
    public:
        Dog();
		Dog(std::string type);
        Dog(const Dog &object);
        Dog &operator=(const Dog &object);
        ~Dog();

        void makeSound()const;

};

#endif
