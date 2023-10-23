/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:07:58 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 16:19:08 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	protected:
		Brain *brain;
    public:
        Cat();
        Cat(const Cat &object);
        Cat &operator=(const Cat &object);
        ~Cat();

        void makeSound()const;
		std::string getBrain(int i) const;
        void setBrain(std::string idea, int number);

};

#endif