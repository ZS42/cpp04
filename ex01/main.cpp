/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:05:24 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/23 21:21:09 by zsyyida          ###   ########.fr       */
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

	// const Dog* k = new Dog();
    // const Dog* l = k;
    // delete k;
    // l->getBrain();
    // delete l;
	// testing for deep or shallow memory
    // create a dog
	const Dog *k = new Dog();
	// Brain *ofK = k->getBrain();
	k->getBrain()->setIdeas("need to rest", 0);
	k->getBrain()->setIdeas("feeling asleep", 1);
	k->getBrain()->setIdeas("looking for bones", 2);
	k->getBrain()->setIdeas("go and hunt a cat", 3);
	k->getBrain()->setIdeas("OLD IDEA", 4);
    std::cout << "K BRAIN IDEA 4 IS :   " << k->getBrain()->getIdeas(100) << std::endl;
    // assign the value to a copy
    Dog l;
	l = *k;
    std::cout << "L BRAIN IDEA 4 IS :   " << l.getBrain()->getIdeas(5) << std::endl;
    k->getBrain()->setIdeas("NEW IDEA", 4);
    std::cout << "K BRAIN IDEA IS :   " << k->getBrain()->getIdeas(5) << std::endl;
    std::cout << "L BRAIN IS STILL:   " << l.getBrain()->getIdeas(5) << std::endl;

	return 0;
}
//when animal is not an abstract class, it creates...
    // const Animal* meta = new Animal("Bat");
	// delete meta;
	// std::cout << std::endl;

	// testing Brain class
	// std::cout << "** test if ideas are deep copy **" << std::endl;

	// Dog *dog = new Dog();
	// Brain *a = dog.getBrain();
	// dog->brain->setIdeas[0]("need to rest");
	// dog->brain->setIdeas[1]("feeling asleep");
	// dog->brain->setIdeas[2]("looking for bones");
	// dog->brain->setIdeas[3]("go and hunt a cat");

    // // testing deep copy
    // Dog dog2; // to do with copy constructor just include Dog dog2 = dog;
  	// dog2 = dog; //copy by operator=
    // Brain *c = dog2.getBrain();
    // std::cout << *c << std::endl; // now is the same ideas from dog
    // c->setIdeas("idea only for dog2"); // now changed there is one more idea only in dog2
	// a->setIdeas("idea only for dog1"); // now this 5th idea is diff between the dogs
    // std::cout << "cheking if is different " << std::endl;
    // std::cout << *a << std::endl;
	// std::cout << *c << std::endl;

	// Cat cat;
	// // Brain *b = cat.getBrain();
	// b->setIdeas("i am such a smart cat");
	// std::cout << *b << std::endl;

	// // testing array of animals
	// std::cout << "** test with array of animals **" << std::endl;
	// int amountAnimals = 6;
	// Animal *animal[amountAnimals];
	// for (int i = 0; i < amountAnimals; i++ )
	// {
	// 	if (i % 2)
	// 		animal[i] = new Dog();
	// 	else
	// 		animal[i] = new Cat();
	// }
	// std::cout << "Arrays of Animals created: " << std::endl;
	// for (int i = 0; i < amountAnimals; i++)
	// 		std::cout << "animal[" << i << "]: " << animal[i]->getType() << std::endl;
	// for (int i = 0; i < amountAnimals; i++ )
	// 		delete animal[i];

    // // testing for deep or shallow memory
    // // create a dog
	// const Dog* k = new Dog();
    // k->getBrain()->setIdeas("OLD IDEA", 5);
    // std::cout << "K BRAIN IS :   " << k->getBrain()->getIdeas(5) << std::endl;
    // // assign the value to a copy
    // const Dog l = *k;
    // std::cout << "L BRAIN IS :   " << l.getBrain()->getIdeas(5) << std::endl;
    // delete k;
    // k->getBrain()->setIdeas("NEW IDEA", 5);
    // std::cout << "L BRAIN IS STILL:   " << l.getBrain()->getIdeas(5) << std::endl;
	// return 0;
// }
