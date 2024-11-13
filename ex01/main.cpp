/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:20:48 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 18:45:09 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

/*
   If you want to see copy with polymorphism add this code into main() function

//	*****************************************
//	*	FOR ANIMAL CLASS WITH COPY()	*
//	*****************************************

	const	Animal	*animal[IDEAS_NB];
	const	Animal	*dog = new Dog();
	const	Animal	*cat = new Cat();
	Animal::animalCopy(animal, cat, dog);
	delete (dog);
	delete (cat);

//	 *************************************************
//	 *	FOR WRONGANIMAL CLASS WITH COPY()	*
//	 *************************************************

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
	WrongAnimal::WrongAnimalCopy(wrongMeta, wrongCat);
	delete (wrongMeta);
	delete (wrongCat);


//	*************************************************
//	*     FOR ANIMAL CLASS WITH COPY CONSTRUCTOR	*
//	*************************************************

	const Animal* metaCopy[IDEAS_NB];

	Cat* catOriginal = new Cat();
	Cat* catCopy = new Cat();
	*catCopy = *catOriginal;

	Dog* dogOriginal = new Dog();
	Dog* dogCopy = new Dog();
	*dogCopy = *dogOriginal;

	for (int i = 0; i < IDEAS_NB / 2; i++)
	{
		try {
			metaCopy[i] = new Dog();
		}
		catch (std::bad_alloc &ba)
		{
			for (int j = i - 1; j > 0; j--)
				delete (metaCopy[j]);
			std::cerr << ba.what() << std::endl;
			return (1);
		}
		if (!metaCopy[i]->getBrain())
		{
			for (--i; i >= 0; i--)
				delete (metaCopy[i]);
		}
	}
	for (int i = IDEAS_NB / 2; i < IDEAS_NB; i++)
	{
		try {
			metaCopy[i] = new Cat();
		}
		catch (std::bad_alloc &ba)
		{
			for (int j = i - 1; j >= IDEAS_NB / 2; j--)
				delete (metaCopy[i]);
			for (int k = 0; k < IDEAS_NB / 2; k++)
				delete (metaCopy[k]);
			std::cerr << ba.what() << std::endl;
			return (1);
		}
		if (!metaCopy[i]->getBrain())
		{
			for (int j = i - 1; j >= IDEAS_NB / 2; j--)
				delete (metaCopy[i]);
			for (int k = 0; k < IDEAS_NB / 2; k++)
				delete (metaCopy[k]);
		}
	}	
	for (int i = 0; i < IDEAS_NB; i++)
	{
		std::cout << "\nType: " << metaCopy[i]->getType() << " " << std::endl;
		metaCopy[i]->makeSound();
		std::cout << "How your pet sees you?" << std::endl;
		metaCopy[i]->animalTemper();
		std::cout << "Do they have brain?" << std::endl;
		metaCopy[i]->getBrain();
		std::cout << "Can you call noVirtual() function?" << std::endl;
		metaCopy[i]->noVirtual();
	}
	for (int i = 0; i < IDEAS_NB; i++)
		delete metaCopy[i];
	delete (catCopy);
	delete (dogCopy);
	delete (catOriginal);
	delete (dogOriginal);
*/

int main()
{
	const Animal* meta[IDEAS_NB];

	for (int i = 0; i < IDEAS_NB / 2; i++)
	{
		try {
			meta[i] = new Dog();
		}
		catch (std::bad_alloc &ba)
		{
			for (int j = i - 1; j > 0; j--)
				delete (meta[j]);
			std::cerr << ba.what() << std::endl;
			return (1);
		}
		if (!meta[i]->getBrain())
		{
			for (--i; i >= 0; i--)
				delete (meta[i]);
		}
	}
	for (int i = IDEAS_NB / 2; i < IDEAS_NB; i++)
	{
		try {
			meta[i] = new Cat();
		}
		catch (std::bad_alloc &ba)
		{
			for (int j = i - 1; j >= IDEAS_NB / 2; j--)
				delete (meta[i]);
			for (int k = 0; k < IDEAS_NB / 2; k++)
				delete (meta[k]);
			std::cerr << ba.what() << std::endl;
			return (1);
		}
		if (!meta[i]->getBrain())
		{
			for (int j = i - 1; j >= IDEAS_NB / 2; j--)
				delete (meta[i]);
			for (int k = 0; k < IDEAS_NB / 2; k++)
				delete (meta[k]);
		}
	}	
	for (int i = 0; i < IDEAS_NB; i++)
	{
		std::cout << "\nType: " << meta[i]->getType() << " " << std::endl;
		meta[i]->makeSound();
		std::cout << "How your pet sees you?" << std::endl;
		meta[i]->animalTemper();
		std::cout << "Do they have brain?" << std::endl;
		meta[i]->getBrain();
		std::cout << "Can you call noVirtual() function?" << std::endl;
		meta[i]->noVirtual();
	}
	for (int i = 0; i < IDEAS_NB; i++)
		delete meta[i];
	return 0;
}
