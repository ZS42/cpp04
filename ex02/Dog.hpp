/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:08:36 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 09:46:12 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"
#include "AAnimal.hpp"

class Dog: public AAnimal
{
	private:
		Brain *brain;
  public:
      Dog();
      Dog(const Dog &object);
      Dog &operator=(const Dog &object);
      ~Dog();
      void makeSound()const;
	    Brain *getBrain()const;
};

#endif
