/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:11:05 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/31 23:10:10 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl; 
}

Dog::Dog(const Dog& obj) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl; 
	*this = obj;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "The dogs barks" << std::endl; 
}

void	Dog::noVirtual(void) const
{
	std::cout << "🐕 The dogs bark when the caravan passes by" << std::endl; 
}

void	Dog::animalTemper(void) const
{
	std::cout << "You are your dog's best friend" << std::endl; 
}
