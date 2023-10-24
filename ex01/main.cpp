/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:05:24 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 10:05:28 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* a = new Animal();
    // std::cout << "CAN INSTANTIATE ANIMAL" << std::endl;
    // delete a;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

	std::cout << "** TEST WITH ARRAYS OF ANIMALS **" << std::endl;
	int amountAnimals = 6;
	Animal *animal[amountAnimals];
	for (int i = 0; i < amountAnimals; i++ )
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "ARRAYS OF ANIMALS CREATED: " << std::endl;
	for (int i = 0; i < amountAnimals; i++)
			std::cout << "animal[" << i << "]: " << animal[i]->getType() << std::endl;
	for (int i = 0; i < amountAnimals; i++ )
			delete animal[i];

	std::cout << "TESTING FOR DEEP AND SHALLOW MEMORY" << std::endl
    // create a cat
	const Cat *k = new Cat();
    for (int i = 0; i < 100; i++)
	    k->getBrain()->setIdeas("OLD IDEA", i);
    std::cout << "K BRAIN IDEA 7 IS :   " << k->getBrain()->getIdeas(6) << std::endl;
    // assign the value to a copy
    Cat l;
	l = *k;
    std::cout << "L BRAIN IDEA 7 IS :   " << l.getBrain()->getIdeas(6) << std::endl;
	k->getBrain()->setIdeas("NEW IDEA", 6);
    std::cout << "K BRAIN IDEA 7 IS NOW:   " << k->getBrain()->getIdeas(6) << std::endl;
    std::cout << "L BRAIN IDEA 7 IS STILL:   " << l.getBrain()->getIdeas(6) << std::endl;
	delete k;
	return 0;
}
