/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:07:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 19:08:27 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"

WrongAnimal::WrongAnimal(void) : type("no type yet")
{
	std::cout << "WrongAnimal constructor called" << std::endl; 
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "Copy constructor called" << std::endl; 
	*this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

WrongAnimal* WrongAnimal::clone(void) const
{
	return (0);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Still no type, still no sound" << std::endl; 
}

void	WrongAnimal::animalTemper(void) const
{
	std::cout << "Still no type, still no temper" << std::endl; 
}

void	WrongAnimal::noVirtual(void) const
{
	std::cout << "Add this damn 'virtual' keyword for fuck sake!" << std::endl;
}

void	WrongAnimal::WrongAnimalCopy(const WrongAnimal *wrongMeta, const WrongAnimal *wrongCat) 
{
	std::cout << std::endl;
	std::cout << std::endl;
	draw_tab("copies");

	const	WrongAnimal	wrongCopyMeta = *wrongMeta;
	const	WrongAnimal*	copyWrongCat = wrongCat->clone();

	std::cout << "\nCopy type: " << wrongCopyMeta.getType() << " " << std::endl;
	wrongCopyMeta.makeSound();
	std::cout << "\nCopy type: " << copyWrongCat->getType() << " " << std::endl;
	copyWrongCat->makeSound();

	std::cout << "\n🐈 Try to call noVirtual() on copyWrongCat copy" << std::endl;
	copyWrongCat->noVirtual();

	std::cout << "\nHow your pet sees you?" << std::endl;
	wrongCopyMeta.animalTemper();
	copyWrongCat->animalTemper();

	std::cout << std::endl;
	delete (copyWrongCat);
}

