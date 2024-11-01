/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:11:05 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 19:13:08 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "🐕 Dog default constructor called" << std::endl;
	this->type = "dog";
}

Dog::~Dog(void)
{
	std::cout << "🐕 Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal()
{
	std::cout << "🐕 \033[1;33mDog copy\033[0m constructor called" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

Dog* Dog::clone(void) const
{
	return (new Dog(*this));
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
	std::cout << "You're your dog's best friend" << std::endl;
}
