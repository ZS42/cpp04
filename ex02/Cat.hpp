/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:07:58 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 09:46:25 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat: public AAnimal
{
	private:
		Brain *brain;
  public:
      Cat();
      Cat(const Cat &object);
      Cat &operator=(const Cat &object);
      ~Cat();
      void makeSound()const;
	    Brain *getBrain() const;
};

#endif