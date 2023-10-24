/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:05:24 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 10:01:33 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"

int main()
{
	// compare with ex01
	// const AAnimal* a = new Animal();
	// std::cout << "CANT INSTANTIATE AANIMAL" << std::endl;
	// delete a;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;

	std::cout << "** TEST WITH ARRAY OF AANIMALS **" << std::endl;
	int amountAAnimals = 6;
	AAnimal *aanimal[amountAAnimals];
	for (int i = 0; i < amountAAnimals; i++ )
	{
		if (i % 2)
			aanimal[i] = new Dog();
		else
			aanimal[i] = new Cat();
	}
	std::cout << "**ARRAYS OF AANIMALS CREATED**: " << std::endl;
	for (int i = 0; i < amountAAnimals; i++)
			std::cout << "aanimal[" << i << "]: " << aanimal[i]->getType() << std::endl;
	for (int i = 0; i < amountAAnimals; i++ )
			delete aanimal[i];

	std::cout << "**TESTING FOR DEEP AND SHALLOW MEMORY**" << std::endl;
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
