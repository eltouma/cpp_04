/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:20:48 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 19:15:52 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*
	If you want to see copy with polymorphism add this code besore delete()
		Animal::animalCopy(meta, cat, dog);
		WrongAnimal::WrongAnimalCopy(wrongMeta, wrongCat);
*/

int main()
{
	try {
		draw_tab("Animal");

		const	Animal	*meta = new Animal();
		const	Animal	*dog = new Dog();
		const	Animal	*cat = new Cat();

		std::cout << "\nType: " << meta->getType() << " " << std::endl;
		meta->makeSound();
		std::cout << "\nType: " << dog->getType() << " " << std::endl;
		dog->makeSound();
		std::cout << "\nType: " << cat->getType() << " " << std::endl;
		cat->makeSound();

		std::cout << "\n🐕 Try to call noVirtual() on dog object" << std::endl;
		dog->noVirtual();
		std::cout << "\n🐈 Try to call noVirtual() on cat object" << std::endl;
		cat->noVirtual();

		std::cout << "\nHow your pet sees you?" << std::endl;
		meta->animalTemper();
		dog->animalTemper();
		cat->animalTemper();

		std::cout << std::endl;
		std::cout << std::endl;
		draw_tab("WrongAnimal");

		const	WrongAnimal	*wrongMeta = new WrongAnimal();
		const	WrongAnimal	*wrongCat = new WrongCat();

		std::cout << "\nType: " << wrongMeta->getType() << " " << std::endl;
		wrongMeta->makeSound();
		std::cout << "\nType: " << wrongCat->getType() << " " << std::endl;
		wrongCat->makeSound();

		std::cout << "\n🐈 Try to call noVirtual() on wrongCat object" << std::endl;
		wrongCat->noVirtual();

		std::cout << "\nHow your pet sees you?" << std::endl;
		wrongMeta->animalTemper();
		wrongCat->animalTemper();

		delete (meta);
		delete (dog);
		delete (cat);
		delete (wrongMeta);
		delete (wrongCat);
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Bad alloc\n" << e.what();
	}
	return (0);
}
