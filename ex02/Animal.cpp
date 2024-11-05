/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:02 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/04 15:22:40 by eltouma          ###   ########.fr       */
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

void	Animal::noVirtual(void) const
{
	std::cout << "Sorry, you forgot the 'virtual' keyword. The message is therefore the same for all classes.";
	std::cout << " Does this method work as expected? Code answer: no." << std::endl;
}

void	Animal::animalCopy(const Animal *animal[], const Animal *cat, const Animal *dog)
{
	std::cout << std::endl;
	std::cout << std::endl;
	draw_tab("copies");

	for (int i = 0; i < IDEAS_NB / 2; i++)
		animal[i] = cat->clone();
	for (int i = IDEAS_NB / 2; i < IDEAS_NB; i++)
		animal[i] = dog->clone();

	for (int i= 0; i < IDEAS_NB; i++)
	{
		std::cout << "\nCopy type: " << animal[i]->getType() << " " << std::endl;
		animal[i]->makeSound();
		std::cout << "How your pet sees you?" << std::endl;
		animal[i]->animalTemper();
		std::cout << "Do copies have brains?" << std::endl;
		animal[i]->getBrain();
		std::cout << "Can you call noVirtual() function?" << std::endl;
		animal[i]->noVirtual();
	}
	for (int i= 0; i < IDEAS_NB; i++)
		delete(animal[i]);
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
