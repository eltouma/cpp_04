/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:02 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/31 23:12:31 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("no type yet")
{
	std::cout << "Default constructor called" << std::endl; 
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl; 
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
	std::cout << "Sorry, you forgot the virtual keyword. The message is therefore the same for all classes.";
	std::cout << " Does this method work as expected? Code answer: no." << std::endl;
}
