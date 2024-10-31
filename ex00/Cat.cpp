/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:17:21 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/31 23:08:45 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() 
{
	std::cout << "Cat default constructor called" << std::endl; 
	this->type = "cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl; 
}

Cat::Cat(const Cat& obj) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl; 
	*this = obj;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat meows" << std::endl; 
}

void	Cat::noVirtual(void) const
{
	std::cout << "🐈 A cat that never stops meowing never catches anything" << std::endl;
}

void	Cat::animalTemper(void) const
{
	std::cout << "You're your cat's slave" << std::endl; 
}
