/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:08:36 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 20:01:43 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Brain.hpp"

class Dog: public Animal
{
	protected:
		Brain *brain;
    public:
        Dog();
        Dog(const Dog &object);
        Dog &operator=(const Dog &object);
        ~Dog();

        void makeSound()const;
		Brain *getBrain()const;
		 // std::string getIdeas(std::string ideas,int i) const;
        // void setIdeas(std::string idea, int number);

};

#endif
