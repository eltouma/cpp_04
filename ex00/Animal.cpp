/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:02 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 19:14:24 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("no type yet")
{
	std::cout << "Animal constructor called" << std::endl; 
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl; 
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Copy constructor called" << std::endl; 
	*this = obj;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

Animal* Animal::clone(void) const
{
	return (0);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "No type, no sound" << std::endl; 
}

void	Animal::animalTemper(void) const
{
	std::cout << "No type, no temper" << std::endl; 
}

void	Animal::noVirtual(void) const
{
	std::cout << "Sorry, you forgot the 'virtual' keyword. The message is therefore the same for all classes.";
	std::cout << " Does this method work as expected? Code answer: no." << std::endl;
}

void	Animal::animalCopy(const Animal *meta, const Animal *cat, const Animal *dog)
{
	std::cout << std::endl;
	std::cout << std::endl;
	draw_tab("copies");

	const	Animal	copyMeta = *meta;
	const	Animal*	copyCat = cat->clone();
	const	Animal*	copyDog = dog->clone();

	std::cout << "\nCopy type: " << copyMeta.getType() << " " << std::endl;
	copyMeta.makeSound();
	std::cout << "\nCopy type: " << copyDog->getType() << " " << std::endl;
	copyDog->makeSound();
	std::cout << "\nCopy type: " << copyCat->getType() << " " << std::endl;
	copyCat->makeSound();

	std::cout << "\n🐕 Try to call noVirtual() on copyDog copy" << std::endl;
	copyDog->noVirtual();
	std::cout << "\n🐈 Try to call noVirtual() on copyCat copy" << std::endl;
	copyCat->noVirtual();

	std::cout << "\nHow your pet sees you?" << std::endl;
	copyMeta.animalTemper();
	copyCat->animalTemper();
	copyDog->animalTemper();

	std::cout << std::endl;
	delete (copyDog);
	delete (copyCat);
}

void	draw_tab(std::string str)
{
		std::cout << "\u250c";
		for (int i = 0; i < 39; i++)
			std::cout << "\u2500";
		std::cout << "\u2510";
		std::cout << "\n\u2502\t Tests with " << str << " class\t\u2502\n";
		std::cout << "\u2514";
		for (int i = 0; i < 39; i++)
			std::cout << "\u2500";
		std::cout << "\u2518";
		std::cout << std::endl;
}
