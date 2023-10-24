/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:33:48 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/24 10:09:48 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;

    std::cout << "**NOW TESTING WRONG ANIMAL AND WRONG CAT**" << std::endl;

    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    k->makeSound(); //will output the cat sound!
    beta->makeSound();
    delete k;
    delete beta;

	std::cout << std::endl;
    std::cout << "**TESTING WITHOUT ALLOCATION**" << std::endl;
    Animal meta1("Bat");
    Dog dog1;
    Cat cat1;
    dog1.makeSound();
    cat1.makeSound(); //will output the cat sound!
    meta1.makeSound();
    return 0;

}