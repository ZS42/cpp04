/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:05:24 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 08:23:22 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

	std::cout << "** test with array of animals **" << std::endl;
	int amountAnimals = 6;
	Animal *animal[amountAnimals];
	for (int i = 0; i < amountAnimals; i++ )
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "Arrays of Animals created: " << std::endl;
	for (int i = 0; i < amountAnimals; i++)
			std::cout << "animal[" << i << "]: " << animal[i]->getType() << std::endl;
	for (int i = 0; i < amountAnimals; i++ )
			delete animal[i];

	// testing for deep or shallow memory
    // create a dog
	const Dog *k = new Dog();
	Brain *ofK = k->getBrain();
    for (int i = 0; i < 100; i++)
        ofK->setIdeas("OLD IDEA", i);
	    // k->getBrain()->setIdeas("OLD IDEA", i);
    std::cout << "K BRAIN IDEA 7 IS :   " << k->getBrain()->getIdeas(6) << std::endl;
    // assign the value to a copy
    Dog l;
	l = *k;
    Brain *ofL = l.getBrain();
    // std::cout << "L BRAIN IDEA 7 IS :   " << l.getBrain()->getIdeas(6) << std::endl;
    std::cout << "L BRAIN IDEA 7 IS :   " << ofL->getIdeas(6) << std::endl;
    // for (int i = 0; i < 100; i++)
        ofK->setIdeas("NEW IDEA", 6);
	    // k->getBrain()->setIdeas("NEW IDEA", 6);
    // std::cout << "K BRAIN IDEA 7 IS NOW:   " << k->getBrain()->getIdeas(6) << std::endl;
    std::cout << "K BRAIN IDEA 7 IS NOW:   " << ofK->getIdeas(6) << std::endl;
    // std::cout << "L BRAIN IDEA 7 IS STILL:   " << l.getBrain()->getIdeas(6) << std::endl;
    std::cout << "L BRAIN IDEA 7 IS STILL:   " << ofL->getIdeas(6) << std::endl;

	return 0;
}
